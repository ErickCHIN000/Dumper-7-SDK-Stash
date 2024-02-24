#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureCompositePiece.BP_StructureCompositePiece_C
// (None)

class UClass* UBP_StructureCompositePiece_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureCompositePiece_C");

	return Clss;
}


// BP_StructureCompositePiece_C BP_StructureCompositePiece.Default__BP_StructureCompositePiece_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureCompositePiece_C* UBP_StructureCompositePiece_C::GetDefaultObj()
{
	static class UBP_StructureCompositePiece_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureCompositePiece_C*>(UBP_StructureCompositePiece_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetFirstSupportingObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     OutFirstSupportingObject                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetFirstSupportingObject(class UObject** OutFirstSupportingObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetFirstSupportingObject");

	Params::UBP_StructureCompositePiece_C_GetFirstSupportingObject_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutFirstSupportingObject != nullptr)
		*OutFirstSupportingObject = Parms.OutFirstSupportingObject;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSupportingObjects
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FStructureSupportObjectData>OutSupportingStructures                                          (Parm, OutParm)

void UBP_StructureCompositePiece_C::GetSupportingObjects(TArray<struct FStructureSupportObjectData>* OutSupportingStructures)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetSupportingObjects");

	Params::UBP_StructureCompositePiece_C_GetSupportingObjects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutSupportingStructures != nullptr)
		*OutSupportingStructures = std::move(Parms.OutSupportingStructures);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.IsSupported
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_StructureCompositePiece_C::IsSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "IsSupported");

	Params::UBP_StructureCompositePiece_C_IsSupported_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSupportedObjects
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FStructureSupportObjectData>OutSupportedStructures                                           (Parm, OutParm)

void UBP_StructureCompositePiece_C::GetSupportedObjects(TArray<struct FStructureSupportObjectData>* OutSupportedStructures)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetSupportedObjects");

	Params::UBP_StructureCompositePiece_C_GetSupportedObjects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutSupportedStructures != nullptr)
		*OutSupportedStructures = std::move(Parms.OutSupportedStructures);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.IsSupportingOtherObjects
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_StructureCompositePiece_C::IsSupportingOtherObjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "IsSupportingOtherObjects");

	Params::UBP_StructureCompositePiece_C_IsSupportingOtherObjects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.TraceForGroundSupport
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeBasePotential                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutIsIntersectingGround                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          OutResults                                                       (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FHitResult>          Temp_struct_Variable                                             (ReferenceParm, ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSupportInterfaceObject_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISupportInterface>K2Node_DynamicCast_AsSupport_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TraceForGroundSupport_OutIsIntersectingGround           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_TraceForGroundSupport_OutResults                        (ReferenceParm, ContainsInstancedReference)

void UBP_StructureCompositePiece_C::TraceForGroundSupport(bool bIncludeBasePotential, bool* OutIsIntersectingGround, TArray<struct FHitResult>* OutResults, TArray<struct FHitResult>& Temp_struct_Variable, bool Temp_bool_Variable, class UObject* CallFunc_GetSupportInterfaceObject_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TraceForGroundSupport_OutIsIntersectingGround, TArray<struct FHitResult>& CallFunc_TraceForGroundSupport_OutResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "TraceForGroundSupport");

	Params::UBP_StructureCompositePiece_C_TraceForGroundSupport_Params Parms{};

	Parms.bIncludeBasePotential = bIncludeBasePotential;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSupportInterfaceObject_ReturnValue = CallFunc_GetSupportInterfaceObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSupport_Interface = K2Node_DynamicCast_AsSupport_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TraceForGroundSupport_OutIsIntersectingGround = CallFunc_TraceForGroundSupport_OutIsIntersectingGround;
	Parms.CallFunc_TraceForGroundSupport_OutResults = CallFunc_TraceForGroundSupport_OutResults;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsIntersectingGround != nullptr)
		*OutIsIntersectingGround = Parms.OutIsIntersectingGround;

	if (OutResults != nullptr)
		*OutResults = std::move(Parms.OutResults);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.TryDestroyIfUnsupported
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DeconstructionSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSupportInterfaceObject_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISupportInterface>K2Node_DynamicCast_AsSupport_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryDestroyIfUnsupported_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_StructureCompositePiece_C::TryDestroyIfUnsupported(class AActor* DeconstructionSource, class UObject* CallFunc_GetSupportInterfaceObject_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryDestroyIfUnsupported_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "TryDestroyIfUnsupported");

	Params::UBP_StructureCompositePiece_C_TryDestroyIfUnsupported_Params Parms{};

	Parms.DeconstructionSource = DeconstructionSource;
	Parms.CallFunc_GetSupportInterfaceObject_ReturnValue = CallFunc_GetSupportInterfaceObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSupport_Interface = K2Node_DynamicCast_AsSupport_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryDestroyIfUnsupported_ReturnValue = CallFunc_TryDestroyIfUnsupported_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.UpdateSupport
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback_SupportReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)

struct FStructurePlacementFeedback_Support UBP_StructureCompositePiece_C::UpdateSupport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "UpdateSupport");

	Params::UBP_StructureCompositePiece_C_UpdateSupport_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetAreaOfEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USphereComponent*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class USphereComponent* UBP_StructureCompositePiece_C::GetAreaOfEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetAreaOfEffect");

	Params::UBP_StructureCompositePiece_C_GetAreaOfEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetAudioComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActorComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   CallFunc_GetBPStructureComposite_AsBP_Structure_Composite        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISchematicInfoInterface>CallFunc_GetAudioComponent_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             CallFunc_GetAudioComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UActorComponent* UBP_StructureCompositePiece_C::GetAudioComponent(class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, TScriptInterface<class ISchematicInfoInterface> CallFunc_GetAudioComponent_self_CastInput, class UActorComponent* CallFunc_GetAudioComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetAudioComponent");

	Params::UBP_StructureCompositePiece_C_GetAudioComponent_Params Parms{};

	Parms.CallFunc_GetBPStructureComposite_AsBP_Structure_Composite = CallFunc_GetBPStructureComposite_AsBP_Structure_Composite;
	Parms.CallFunc_GetAudioComponent_self_CastInput = CallFunc_GetAudioComponent_self_CastInput;
	Parms.CallFunc_GetAudioComponent_ReturnValue = CallFunc_GetAudioComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetBuildRadiusInformation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              OutRadius                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutOrigin                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetBuildRadiusInformation(float* OutRadius, struct FVector* OutOrigin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetBuildRadiusInformation");

	Params::UBP_StructureCompositePiece_C_GetBuildRadiusInformation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutRadius != nullptr)
		*OutRadius = Parms.OutRadius;

	if (OutOrigin != nullptr)
		*OutOrigin = std::move(Parms.OutOrigin);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetDisplayNameText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_GetUIData_IsValid                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureUIData            CallFunc_GetUIData_OutUIData                                     (None)

class FText UBP_StructureCompositePiece_C::GetDisplayNameText(bool CallFunc_GetUIData_IsValid, const struct FStructureUIData& CallFunc_GetUIData_OutUIData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetDisplayNameText");

	Params::UBP_StructureCompositePiece_C_GetDisplayNameText_Params Parms{};

	Parms.CallFunc_GetUIData_IsValid = CallFunc_GetUIData_IsValid;
	Parms.CallFunc_GetUIData_OutUIData = CallFunc_GetUIData_OutUIData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetStructureID
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetPieceData_OutPieceData                               (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

class FString UBP_StructureCompositePiece_C::GetStructureID(const struct FCompositePieceGameplay& CallFunc_GetPieceData_OutPieceData, const class FString& CallFunc_Conv_IntToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetStructureID");

	Params::UBP_StructureCompositePiece_C_GetStructureID_Params Parms{};

	Parms.CallFunc_GetPieceData_OutPieceData = CallFunc_GetPieceData_OutPieceData;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetStructureInteractions
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_GetAllStructureInteractions_AvailableInteractions       (ReferenceParm)

TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*> UBP_StructureCompositePiece_C::GetStructureInteractions(TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetAllStructureInteractions_AvailableInteractions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetStructureInteractions");

	Params::UBP_StructureCompositePiece_C_GetStructureInteractions_Params Parms{};

	Parms.CallFunc_GetAllStructureInteractions_AvailableInteractions = CallFunc_GetAllStructureInteractions_AvailableInteractions;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetTotalResourceRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FStructureResourceRequirements>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// class ABP_Structure_Composite_C*   CallFunc_GetBPStructureComposite_AsBP_Structure_Composite        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISchematicInfoInterface>CallFunc_GetTotalResourceRequirements_self_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>CallFunc_GetTotalResourceRequirements_ReturnValue                (ReferenceParm, ContainsInstancedReference)

TArray<struct FStructureResourceRequirements> UBP_StructureCompositePiece_C::GetTotalResourceRequirements(class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISchematicInfoInterface> CallFunc_GetTotalResourceRequirements_self_CastInput, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetTotalResourceRequirements");

	Params::UBP_StructureCompositePiece_C_GetTotalResourceRequirements_Params Parms{};

	Parms.CallFunc_GetBPStructureComposite_AsBP_Structure_Composite = CallFunc_GetBPStructureComposite_AsBP_Structure_Composite;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTotalResourceRequirements_self_CastInput = CallFunc_GetTotalResourceRequirements_self_CastInput;
	Parms.CallFunc_GetTotalResourceRequirements_ReturnValue = CallFunc_GetTotalResourceRequirements_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.StructureHasAddedResources
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureResourcesObject_C*CallFunc_GetResourcesInfoObject_OutComponent                     (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StructureHasAddedResources_HasAddedResources            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_StructureCompositePiece_C::StructureHasAddedResources(class UBP_StructureResourcesObject_C* CallFunc_GetResourcesInfoObject_OutComponent, bool CallFunc_StructureHasAddedResources_HasAddedResources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "StructureHasAddedResources");

	Params::UBP_StructureCompositePiece_C_StructureHasAddedResources_Params Parms{};

	Parms.CallFunc_GetResourcesInfoObject_OutComponent = CallFunc_GetResourcesInfoObject_OutComponent;
	Parms.CallFunc_StructureHasAddedResources_HasAddedResources = CallFunc_StructureHasAddedResources_HasAddedResources;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSupportMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        SupportMesh                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetSupportMesh(class UStaticMeshComponent** SupportMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetSupportMesh");

	Params::UBP_StructureCompositePiece_C_GetSupportMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SupportMesh != nullptr)
		*SupportMesh = Parms.SupportMesh;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetWorldTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceMeshInstance_C*CallFunc_GetBPMeshInstance_MeshInstance                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRootTransform_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform UBP_StructureCompositePiece_C::GetWorldTransform(class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, const struct FTransform& CallFunc_GetRootTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetWorldTransform");

	Params::UBP_StructureCompositePiece_C_GetWorldTransform_Params Parms{};

	Parms.CallFunc_GetBPMeshInstance_MeshInstance = CallFunc_GetBPMeshInstance_MeshInstance;
	Parms.CallFunc_GetRootTransform_ReturnValue = CallFunc_GetRootTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetFuelComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_StructureFuelComponent_C*FuelComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetFuelComponent(class UBP_StructureFuelComponent_C** FuelComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetFuelComponent");

	Params::UBP_StructureCompositePiece_C_GetFuelComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FuelComponent != nullptr)
		*FuelComponent = Parms.FuelComponent;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetInventoryContainerInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RequestingActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>ContainerInterface                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetInventoryContainerInterface");

	Params::UBP_StructureCompositePiece_C_GetInventoryContainerInterface_Params Parms{};

	Parms.RequestingActor = RequestingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ContainerInterface != nullptr)
		*ContainerInterface = Parms.ContainerInterface;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetReachableNavTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  ReachableNavTransform                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Structure                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetReachableNavTransform(class APawn* Pawn, bool* Success, struct FTransform* ReachableNavTransform, class UObject** Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetReachableNavTransform");

	Params::UBP_StructureCompositePiece_C_GetReachableNavTransform_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ReachableNavTransform != nullptr)
		*ReachableNavTransform = std::move(Parms.ReachableNavTransform);

	if (Structure != nullptr)
		*Structure = Parms.Structure;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.CompleteCompletableStructure
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             AICharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Complete                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::CompleteCompletableStructure(class ANWXAICharacter* AICharacter, bool* Complete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "CompleteCompletableStructure");

	Params::UBP_StructureCompositePiece_C_CompleteCompletableStructure_Params Parms{};

	Parms.AICharacter = AICharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (Complete != nullptr)
		*Complete = Parms.Complete;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetRangedAttackLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     QueryingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AttackLocationType AttackLocationType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetStructureWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetRangedAttackLocation(class UObject* QueryingActor, enum class Enum_AttackLocationType AttackLocationType, struct FVector* Location, const struct FTransform& CallFunc_GetStructureWorldTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetRangedAttackLocation");

	Params::UBP_StructureCompositePiece_C_GetRangedAttackLocation_Params Parms{};

	Parms.QueryingActor = QueryingActor;
	Parms.AttackLocationType = AttackLocationType;
	Parms.CallFunc_GetStructureWorldTransform_ReturnValue = CallFunc_GetStructureWorldTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetFacingTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     QueryingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      FacingTarget                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetFacingTarget(class UObject* QueryingActor, class AActor** FacingTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetFacingTarget");

	Params::UBP_StructureCompositePiece_C_GetFacingTarget_Params Parms{};

	Parms.QueryingActor = QueryingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (FacingTarget != nullptr)
		*FacingTarget = Parms.FacingTarget;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSimulationStateManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXSimStateManagerBase*     Simulation_State_Manager                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetSimulationStateManager(class ANWXSimStateManagerBase** Simulation_State_Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetSimulationStateManager");

	Params::UBP_StructureCompositePiece_C_GetSimulationStateManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Simulation_State_Manager != nullptr)
		*Simulation_State_Manager = Parms.Simulation_State_Manager;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ResolveSimulationRound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::ResolveSimulationRound(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "ResolveSimulationRound");

	Params::UBP_StructureCompositePiece_C_ResolveSimulationRound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetDamageEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageEffect                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetDamageEffect(class UClass** DamageEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetDamageEffect");

	Params::UBP_StructureCompositePiece_C_GetDamageEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DamageEffect != nullptr)
		*DamageEffect = Parms.DamageEffect;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetRedirectedTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRedirect                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      RedirectedTarget                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetRedirectedTarget(bool* ShouldRedirect, class AActor** RedirectedTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetRedirectedTarget");

	Params::UBP_StructureCompositePiece_C_GetRedirectedTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldRedirect != nullptr)
		*ShouldRedirect = Parms.ShouldRedirect;

	if (RedirectedTarget != nullptr)
		*RedirectedTarget = Parms.RedirectedTarget;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetEventsObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStructureEventsObject*      EventObject                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetEventsObject(class UStructureEventsObject** EventObject, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetEventsObject");

	Params::UBP_StructureCompositePiece_C_GetEventsObject_Params Parms{};

	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EventObject != nullptr)
		*EventObject = Parms.EventObject;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSnapPoints
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FGridPoint>          SnapPoints                                                       (Parm, OutParm)
// class UCompositePieceSnapObject*   CallFunc_GetSnapComponent_SnapObject                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          CallFunc_GetGridPoints_ReturnValue                               (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetSnapPoints(TArray<struct FGridPoint>* SnapPoints, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, TArray<struct FGridPoint>& CallFunc_GetGridPoints_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetSnapPoints");

	Params::UBP_StructureCompositePiece_C_GetSnapPoints_Params Parms{};

	Parms.CallFunc_GetSnapComponent_SnapObject = CallFunc_GetSnapComponent_SnapObject;
	Parms.CallFunc_GetGridPoints_ReturnValue = CallFunc_GetGridPoints_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SnapPoints != nullptr)
		*SnapPoints = std::move(Parms.SnapPoints);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSnapType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class ESnapType               SnapPointType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   CallFunc_GetSnapComponent_SnapObject                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetSnapType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetSnapType(enum class ESnapType* SnapPointType, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, enum class ESnapType CallFunc_GetSnapType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetSnapType");

	Params::UBP_StructureCompositePiece_C_GetSnapType_Params Parms{};

	Parms.CallFunc_GetSnapComponent_SnapObject = CallFunc_GetSnapComponent_SnapObject;
	Parms.CallFunc_GetSnapType_ReturnValue = CallFunc_GetSnapType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SnapPointType != nullptr)
		*SnapPointType = Parms.SnapPointType;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSnapComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCompositePieceSnapObject*   SnapObject                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   CallFunc_GetBPStructureComposite_AsBP_Structure_Composite        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   CallFunc_GetSnapObjectForPiece_ResourcesManager                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetSnapComponent(class UCompositePieceSnapObject** SnapObject, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, class UCompositePieceSnapObject* CallFunc_GetSnapObjectForPiece_ResourcesManager, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetSnapComponent");

	Params::UBP_StructureCompositePiece_C_GetSnapComponent_Params Parms{};

	Parms.CallFunc_GetBPStructureComposite_AsBP_Structure_Composite = CallFunc_GetBPStructureComposite_AsBP_Structure_Composite;
	Parms.CallFunc_GetSnapObjectForPiece_ResourcesManager = CallFunc_GetSnapObjectForPiece_ResourcesManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SnapObject != nullptr)
		*SnapObject = Parms.SnapObject;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.CanQueryInteractable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Query                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::CanQueryInteractable(bool* Can_Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "CanQueryInteractable");

	Params::UBP_StructureCompositePiece_C_CanQueryInteractable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Query != nullptr)
		*Can_Query = Parms.Can_Query;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.HoldInteractionAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::HoldInteractionAvailable(bool* bAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "HoldInteractionAvailable");

	Params::UBP_StructureCompositePiece_C_HoldInteractionAvailable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bAvailable != nullptr)
		*bAvailable = Parms.bAvailable;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.IsInteractionDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               bIsDisabled                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisabledText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "IsInteractionDisabled");

	Params::UBP_StructureCompositePiece_C_IsInteractionDisabled_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsDisabled != nullptr)
		*bIsDisabled = Parms.bIsDisabled;

	if (DisabledText != nullptr)
		*DisabledText = std::move(Parms.DisabledText);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.DoesHaveResourceType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HitId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           DesiredResourceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasResourceType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "DoesHaveResourceType");

	Params::UBP_StructureCompositePiece_C_DoesHaveResourceType_Params Parms{};

	Parms.HitId = HitId;
	Parms.DesiredResourceType = DesiredResourceType;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasResourceType != nullptr)
		*bHasResourceType = Parms.bHasResourceType;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.IsHarvestable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInteractionData            Interaction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               IsHarvestable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "IsHarvestable");

	Params::UBP_StructureCompositePiece_C_IsHarvestable_Params Parms{};

	Parms.Interaction = Interaction;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHarvestable != nullptr)
		*IsHarvestable = Parms.IsHarvestable;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetInteractIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetInteractIcon");

	Params::UBP_StructureCompositePiece_C_GetInteractIcon_Params Parms{};

	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetInteractText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteractWithStructure_CanInteract                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanInteractWithStructure_InteractionMessage             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanInteractWithStructure_CanInteract, class FText CallFunc_CanInteractWithStructure_InteractionMessage, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetInteractText");

	Params::UBP_StructureCompositePiece_C_GetInteractText_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_CanInteractWithStructure_CanInteract = CallFunc_CanInteractWithStructure_CanInteract;
	Parms.CallFunc_CanInteractWithStructure_InteractionMessage = CallFunc_CanInteractWithStructure_InteractionMessage;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = std::move(Parms.InteractText);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.CanInteractWithActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteractWithStructure_CanInteract                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanInteractWithStructure_InteractionMessage             (None)

void UBP_StructureCompositePiece_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanInteractWithStructure_CanInteract, class FText CallFunc_CanInteractWithStructure_InteractionMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "CanInteractWithActor");

	Params::UBP_StructureCompositePiece_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_CanInteractWithStructure_CanInteract = CallFunc_CanInteractWithStructure_CanInteract;
	Parms.CallFunc_CanInteractWithStructure_InteractionMessage = CallFunc_CanInteractWithStructure_InteractionMessage;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ReturnMeshToHighlight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>StaticMesh_to_Highlight                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>SkeletalMesh_to_Highlight                                        (Parm, OutParm, ContainsInstancedReference)
// bool                               Hostile_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceMeshInstance_C*CallFunc_GetBPMeshInstance_MeshInstance                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMeshComponent*>CallFunc_GetMeshes_OutMeshes                                     (ReferenceParm, ContainsInstancedReference)

void UBP_StructureCompositePiece_C::ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, TArray<class UStaticMeshComponent*>& CallFunc_GetMeshes_OutMeshes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "ReturnMeshToHighlight");

	Params::UBP_StructureCompositePiece_C_ReturnMeshToHighlight_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.CallFunc_GetBPMeshInstance_MeshInstance = CallFunc_GetBPMeshInstance_MeshInstance;
	Parms.CallFunc_GetMeshes_OutMeshes = CallFunc_GetMeshes_OutMeshes;

	UObject::ProcessEvent(Func, &Parms);

	if (StaticMesh_to_Highlight != nullptr)
		*StaticMesh_to_Highlight = std::move(Parms.StaticMesh_to_Highlight);

	if (SkeletalMesh_to_Highlight != nullptr)
		*SkeletalMesh_to_Highlight = std::move(Parms.SkeletalMesh_to_Highlight);

	if (Hostile_ != nullptr)
		*Hostile_ = Parms.Hostile_;

	if (Quality != nullptr)
		*Quality = Parms.Quality;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.InteractPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::InteractPressed(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "InteractPressed");

	Params::UBP_StructureCompositePiece_C_InteractPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.InteractReleased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::InteractReleased(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "InteractReleased");

	Params::UBP_StructureCompositePiece_C_InteractReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.InteractionRequiresClientOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               RequiresClientAction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "InteractionRequiresClientOnly");

	Params::UBP_StructureCompositePiece_C_InteractionRequiresClientOnly_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (RequiresClientAction != nullptr)
		*RequiresClientAction = Parms.RequiresClientAction;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ExecuteDeconstructStructure
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDeconstructionResourceReturnResourceReturn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DeconstructionSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         OwningStructure                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecuteDestroyStructure_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DamageObject_CompositePiece_C*CallFunc_GetDamageObject_DamageObject                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::ExecuteDeconstructStructure(enum class EDeconstructionResourceReturn ResourceReturn, class AActor* DeconstructionSource, bool* Success, class AStructureComposite* OwningStructure, bool CallFunc_ExecuteDestroyStructure_Success, class UBP_DamageObject_CompositePiece_C* CallFunc_GetDamageObject_DamageObject, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "ExecuteDeconstructStructure");

	Params::UBP_StructureCompositePiece_C_ExecuteDeconstructStructure_Params Parms{};

	Parms.ResourceReturn = ResourceReturn;
	Parms.DeconstructionSource = DeconstructionSource;
	Parms.OwningStructure = OwningStructure;
	Parms.CallFunc_ExecuteDestroyStructure_Success = CallFunc_ExecuteDestroyStructure_Success;
	Parms.CallFunc_GetDamageObject_DamageObject = CallFunc_GetDamageObject_DamageObject;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ExecuteDestroyStructure
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestructionSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DamageObject_CompositePiece_C*CallFunc_GetDamageObject_DamageObject                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DestroyStructure_bSuccess                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::ExecuteDestroyStructure(class AActor* DestructionSource, bool* Success, class UBP_DamageObject_CompositePiece_C* CallFunc_GetDamageObject_DamageObject, bool CallFunc_DestroyStructure_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "ExecuteDestroyStructure");

	Params::UBP_StructureCompositePiece_C_ExecuteDestroyStructure_Params Parms{};

	Parms.DestructionSource = DestructionSource;
	Parms.CallFunc_GetDamageObject_DamageObject = CallFunc_GetDamageObject_DamageObject;
	Parms.CallFunc_DestroyStructure_bSuccess = CallFunc_DestroyStructure_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetEntitySupportMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UStaticMeshComponent* UBP_StructureCompositePiece_C::GetEntitySupportMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetEntitySupportMesh");

	Params::UBP_StructureCompositePiece_C_GetEntitySupportMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetEntityPlacementCollider
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBoxComponent*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UBoxComponent* UBP_StructureCompositePiece_C::GetEntityPlacementCollider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetEntityPlacementCollider");

	Params::UBP_StructureCompositePiece_C_GetEntityPlacementCollider_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetStructurePlacerObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStructurePlacerObject*      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_PlacerObject_CompositePiece_C*CallFunc_GetDefaultObject_ReturnValue                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UStructurePlacerObject* UBP_StructureCompositePiece_C::GetStructurePlacerObject(class UBP_PlacerObject_CompositePiece_C* CallFunc_GetDefaultObject_ReturnValue, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetStructurePlacerObject");

	Params::UBP_StructureCompositePiece_C_GetStructurePlacerObject_Params Parms{};

	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.SetPlacementFeedback
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandlePlacementTargetData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback FeedbackData                                                     (Parm, OutParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructurePlacerObject*      PlacerObject                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback CallFunc_SetPlacementFeedback_ReturnValue                        (ContainsInstancedReference)

bool UBP_StructureCompositePiece_C::SetPlacementFeedback(struct FGameplayAbilityTargetDataHandle& PlacementTargetData, class AController* Controller, struct FStructurePlacementFeedback* FeedbackData, class UStructurePlacerObject* PlacerObject, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue, const struct FStructurePlacementFeedback& CallFunc_SetPlacementFeedback_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "SetPlacementFeedback");

	Params::UBP_StructureCompositePiece_C_SetPlacementFeedback_Params Parms{};

	Parms.PlacementTargetData = PlacementTargetData;
	Parms.Controller = Controller;
	Parms.PlacerObject = PlacerObject;
	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;
	Parms.CallFunc_SetPlacementFeedback_ReturnValue = CallFunc_SetPlacementFeedback_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FeedbackData != nullptr)
		*FeedbackData = std::move(Parms.FeedbackData);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.IsValidPlacement
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStructurePlacementFeedback PlacementFeedbackData                                            (Parm, OutParm, ContainsInstancedReference)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback CallFunc_IsValidPlacement_ReturnValue                            (ContainsInstancedReference)

void UBP_StructureCompositePiece_C::IsValidPlacement(class AController* Controller, struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructurePlacementFeedback* PlacementFeedbackData, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, const struct FStructurePlacementFeedback& CallFunc_IsValidPlacement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "IsValidPlacement");

	Params::UBP_StructureCompositePiece_C_IsValidPlacement_Params Parms{};

	Parms.Controller = Controller;
	Parms.TargetData = TargetData;
	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_IsValidPlacement_ReturnValue = CallFunc_IsValidPlacement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlacementFeedbackData != nullptr)
		*PlacementFeedbackData = std::move(Parms.PlacementFeedbackData);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetPlacementTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              OptionalDeltaRotationZ                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OptionalDeltaHeightZ                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, OutParm)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_GetPlacementTransform_ReturnValue                       (None)

void UBP_StructureCompositePiece_C::GetPlacementTransform(class ACharacter* Character, float OptionalDeltaRotationZ, float OptionalDeltaHeightZ, struct FGameplayAbilityTargetDataHandle* TargetData, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetPlacementTransform");

	Params::UBP_StructureCompositePiece_C_GetPlacementTransform_Params Parms{};

	Parms.Character = Character;
	Parms.OptionalDeltaRotationZ = OptionalDeltaRotationZ;
	Parms.OptionalDeltaHeightZ = OptionalDeltaHeightZ;
	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_GetPlacementTransform_ReturnValue = CallFunc_GetPlacementTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetData != nullptr)
		*TargetData = std::move(Parms.TargetData);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.FinalizePlacement
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSnapPlacementTargetData    SnapData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      Message                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinalizePlacement_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_StructureCompositePiece_C::FinalizePlacement(class AController* Controller, struct FSnapPlacementTargetData& SnapData, class FString* Message, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_FinalizePlacement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "FinalizePlacement");

	Params::UBP_StructureCompositePiece_C_FinalizePlacement_Params Parms{};

	Parms.Controller = Controller;
	Parms.SnapData = SnapData;
	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_FinalizePlacement_ReturnValue = CallFunc_FinalizePlacement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.InitializePlacementState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       PlacingCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_SetStructureSchematicState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   CallFunc_GetBPStructureComposite_AsBP_Structure_Composite        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>CallFunc_SetStructureSchematicState_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_SetStructureSchematicState_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_StructureCompositePiece_C::InitializePlacementState(class APawn* PlacingCharacter, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureStateInterface> CallFunc_SetStructureSchematicState_self_CastInput, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "InitializePlacementState");

	Params::UBP_StructureCompositePiece_C_InitializePlacementState_Params Parms{};

	Parms.PlacingCharacter = PlacingCharacter;
	Parms.CallFunc_SetStructureSchematicState_ReturnValue = CallFunc_SetStructureSchematicState_ReturnValue;
	Parms.CallFunc_GetBPStructureComposite_AsBP_Structure_Composite = CallFunc_GetBPStructureComposite_AsBP_Structure_Composite;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetStructureSchematicState_self_CastInput = CallFunc_SetStructureSchematicState_self_CastInput;
	Parms.CallFunc_SetStructureSchematicState_ReturnValue_1 = CallFunc_SetStructureSchematicState_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSupportInterfaceObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   CallFunc_GetBPStructureComposite_AsBP_Structure_Composite        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureSupportObject*     CallFunc_GetSupportObjectForPiece_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UObject* UBP_StructureCompositePiece_C::GetSupportInterfaceObject(class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, class UStructureSupportObject* CallFunc_GetSupportObjectForPiece_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetSupportInterfaceObject");

	Params::UBP_StructureCompositePiece_C_GetSupportInterfaceObject_Params Parms{};

	Parms.CallFunc_GetBPStructureComposite_AsBP_Structure_Composite = CallFunc_GetBPStructureComposite_AsBP_Structure_Composite;
	Parms.CallFunc_GetSupportObjectForPiece_ReturnValue = CallFunc_GetSupportObjectForPiece_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnStateChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStructureCompositePiece*    StructurePiece                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnStateChanged(class UStructureCompositePiece* StructurePiece, enum class EStructureState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnStateChanged");

	Params::UBP_StructureCompositePiece_C_OnStateChanged_Params Parms{};

	Parms.StructurePiece = StructurePiece;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetStructureDamageObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStructureDamageObject*      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DamageObject_CompositePiece_C*CallFunc_GetDamageObject_DamageObject                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UStructureDamageObject* UBP_StructureCompositePiece_C::GetStructureDamageObject(class UBP_DamageObject_CompositePiece_C* CallFunc_GetDamageObject_DamageObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetStructureDamageObject");

	Params::UBP_StructureCompositePiece_C_GetStructureDamageObject_Params Parms{};

	Parms.CallFunc_GetDamageObject_DamageObject = CallFunc_GetDamageObject_DamageObject;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetCompositePieceGameplay
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FCompositePieceGameplay     GameplayData                                                     (Parm, OutParm)
// struct FCompositePieceGameplay     CallFunc_GetPieceData_OutPieceData                               (None)

void UBP_StructureCompositePiece_C::GetCompositePieceGameplay(struct FCompositePieceGameplay* GameplayData, const struct FCompositePieceGameplay& CallFunc_GetPieceData_OutPieceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetCompositePieceGameplay");

	Params::UBP_StructureCompositePiece_C_GetCompositePieceGameplay_Params Parms{};

	Parms.CallFunc_GetPieceData_OutPieceData = CallFunc_GetPieceData_OutPieceData;

	UObject::ProcessEvent(Func, &Parms);

	if (GameplayData != nullptr)
		*GameplayData = std::move(Parms.GameplayData);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetCompositeStructure
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AStructureComposite*         Composite                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   CallFunc_GetBPStructureComposite_AsBP_Structure_Composite        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetCompositeStructure(class AStructureComposite** Composite, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetCompositeStructure");

	Params::UBP_StructureCompositePiece_C_GetCompositeStructure_Params Parms{};

	Parms.CallFunc_GetBPStructureComposite_AsBP_Structure_Composite = CallFunc_GetBPStructureComposite_AsBP_Structure_Composite;

	UObject::ProcessEvent(Func, &Parms);

	if (Composite != nullptr)
		*Composite = Parms.Composite;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.LocalPlayerExitedVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::LocalPlayerExitedVolume(class AActor* Actor, const class FString& CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "LocalPlayerExitedVolume");

	Params::UBP_StructureCompositePiece_C_LocalPlayerExitedVolume_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.LocalPlayerEnteredVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::LocalPlayerEnteredVolume(class AActor* Actor, const class FString& CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "LocalPlayerEnteredVolume");

	Params::UBP_StructureCompositePiece_C_LocalPlayerEnteredVolume_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.UpdateMeshMaterialsBasedOnState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CompositePieceMeshInstance_C*LMeshInstance                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback CallFunc_GetValidPlacementFeedbackData_ReturnValue               (ContainsInstancedReference)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceRequirementsInterface>CallFunc_GetResourceRequirementsForCurrentState_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyAddedResources_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceMeshInstance_C*CallFunc_GetBPMeshInstance_MeshInstance                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::UpdateMeshMaterialsBasedOnState(class UBP_CompositePieceMeshInstance_C* LMeshInstance, const struct FStructurePlacementFeedback& CallFunc_GetValidPlacementFeedbackData_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetFunctionName_ReturnValue, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, TScriptInterface<class IStructureResourceRequirementsInterface> CallFunc_GetResourceRequirementsForCurrentState_ReturnValue, bool CallFunc_HasAnyAddedResources_ReturnValue, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "UpdateMeshMaterialsBasedOnState");

	Params::UBP_StructureCompositePiece_C_UpdateMeshMaterialsBasedOnState_Params Parms{};

	Parms.LMeshInstance = LMeshInstance;
	Parms.CallFunc_GetValidPlacementFeedbackData_ReturnValue = CallFunc_GetValidPlacementFeedbackData_ReturnValue;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_GetResourceRequirementsForCurrentState_ReturnValue = CallFunc_GetResourceRequirementsForCurrentState_ReturnValue;
	Parms.CallFunc_HasAnyAddedResources_ReturnValue = CallFunc_HasAnyAddedResources_ReturnValue;
	Parms.CallFunc_GetBPMeshInstance_MeshInstance = CallFunc_GetBPMeshInstance_MeshInstance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.UpdateMeshOnStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCompositePieceInstance*     CallFunc_GetMeshInstance_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceMeshInstance_C*CallFunc_GetBPMeshInstance_MeshInstance                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceMeshInstance_C*CallFunc_GetBPMeshInstance_MeshInstance_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class UBP_CompositePieceMeshInstance_C*CallFunc_GetBPMeshInstance_MeshInstance_2                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::UpdateMeshOnStateChange(class UCompositePieceInstance* CallFunc_GetMeshInstance_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance_1, const class FString& CallFunc_GetFunctionName_ReturnValue, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "UpdateMeshOnStateChange");

	Params::UBP_StructureCompositePiece_C_UpdateMeshOnStateChange_Params Parms{};

	Parms.CallFunc_GetMeshInstance_ReturnValue = CallFunc_GetMeshInstance_ReturnValue;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_GetSchematicState_ReturnValue_1 = CallFunc_GetSchematicState_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetBPMeshInstance_MeshInstance = CallFunc_GetBPMeshInstance_MeshInstance;
	Parms.CallFunc_GetBPMeshInstance_MeshInstance_1 = CallFunc_GetBPMeshInstance_MeshInstance_1;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetBPMeshInstance_MeshInstance_2 = CallFunc_GetBPMeshInstance_MeshInstance_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetDamageObject
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBP_DamageObject_CompositePiece_C*DamageObject                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DamageObject_CompositePiece_C*CallFunc_GetComponentOfClass_OutComponent                        (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetDamageObject(class UBP_DamageObject_CompositePiece_C** DamageObject, class UBP_DamageObject_CompositePiece_C* CallFunc_GetComponentOfClass_OutComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetDamageObject");

	Params::UBP_StructureCompositePiece_C_GetDamageObject_Params Parms{};

	Parms.CallFunc_GetComponentOfClass_OutComponent = CallFunc_GetComponentOfClass_OutComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageObject != nullptr)
		*DamageObject = Parms.DamageObject;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.RefreshOverlappingPawns
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CurrentFunctionName                                              (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               OverlappingNPCOrCharacter                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LCurrentHitActor                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         LCurrentMesh                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_RefreshIsStructureCompletionBlocked_ReturnValue         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::RefreshOverlappingPawns(const class FString& CurrentFunctionName, bool OverlappingNPCOrCharacter, class AActor* LCurrentHitActor, class UPrimitiveComponent* LCurrentMesh, const struct FTimerHandle& CallFunc_RefreshIsStructureCompletionBlocked_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "RefreshOverlappingPawns");

	Params::UBP_StructureCompositePiece_C_RefreshOverlappingPawns_Params Parms{};

	Parms.CurrentFunctionName = CurrentFunctionName;
	Parms.OverlappingNPCOrCharacter = OverlappingNPCOrCharacter;
	Parms.LCurrentHitActor = LCurrentHitActor;
	Parms.LCurrentMesh = LCurrentMesh;
	Parms.CallFunc_RefreshIsStructureCompletionBlocked_ReturnValue = CallFunc_RefreshIsStructureCompletionBlocked_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.PlayDestructionEffects
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           System                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              EffectTemplate                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceMeshInstance_C*Instance                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     StructureBounds                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureDestructionData   CallFunc_MakeStructureDestructionData_DestructionData            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::PlayDestructionEffects(class UNiagaraComponent* System, class UNiagaraSystem* EffectTemplate, class UBP_CompositePieceMeshInstance_C* Instance, const struct FVector& StructureBounds, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FStructureDestructionData& CallFunc_MakeStructureDestructionData_DestructionData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "PlayDestructionEffects");

	Params::UBP_StructureCompositePiece_C_PlayDestructionEffects_Params Parms{};

	Parms.System = System;
	Parms.EffectTemplate = EffectTemplate;
	Parms.Instance = Instance;
	Parms.StructureBounds = StructureBounds;
	Parms.CallFunc_GetCompositeStructure_Composite = CallFunc_GetCompositeStructure_Composite;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeStructureDestructionData_DestructionData = CallFunc_MakeStructureDestructionData_DestructionData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.On Owner Composite State Changed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStructureState         StructureState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureStateObject*       CallFunc_GetStateObject_ReturnValue                              (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_SetStructureSchematicState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckStateTransition_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::On_Owner_Composite_State_Changed(enum class EStructureState StructureState, class UStructureStateObject* CallFunc_GetStateObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue, bool CallFunc_CheckStateTransition_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "On Owner Composite State Changed");

	Params::UBP_StructureCompositePiece_C_On_Owner_Composite_State_Changed_Params Parms{};

	Parms.StructureState = StructureState;
	Parms.CallFunc_GetStateObject_ReturnValue = CallFunc_GetStateObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SetStructureSchematicState_ReturnValue = CallFunc_SetStructureSchematicState_ReturnValue;
	Parms.CallFunc_CheckStateTransition_ReturnValue = CallFunc_CheckStateTransition_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetResourcesInfoObject
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBP_StructureResourcesObject_C*OutComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureResourcesObject_C*CallFunc_GetComponentOfClass_OutComponent                        (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetResourcesInfoObject(class UBP_StructureResourcesObject_C** OutComponent, class UBP_StructureResourcesObject_C* CallFunc_GetComponentOfClass_OutComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetResourcesInfoObject");

	Params::UBP_StructureCompositePiece_C_GetResourcesInfoObject_Params Parms{};

	Parms.CallFunc_GetComponentOfClass_OutComponent = CallFunc_GetComponentOfClass_OutComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (OutComponent != nullptr)
		*OutComponent = Parms.OutComponent;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ChangeMaterialBasedOnHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentHealth                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxHealth                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentHealthPercentage                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHealth_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceMeshInstance_C*CallFunc_GetBPMeshInstance_MeshInstance                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentHealth_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MaxHealth_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::ChangeMaterialBasedOnHealth(double CurrentHealth, double MaxHealth, double CurrentHealthPercentage, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_GetCurrentHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, double K2Node_VariableSet_CurrentHealth_ImplicitCast, double K2Node_VariableSet_MaxHealth_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "ChangeMaterialBasedOnHealth");

	Params::UBP_StructureCompositePiece_C_ChangeMaterialBasedOnHealth_Params Parms{};

	Parms.CurrentHealth = CurrentHealth;
	Parms.MaxHealth = MaxHealth;
	Parms.CurrentHealthPercentage = CurrentHealthPercentage;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetCurrentHealth_ReturnValue = CallFunc_GetCurrentHealth_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetBPMeshInstance_MeshInstance = CallFunc_GetBPMeshInstance_MeshInstance;
	Parms.K2Node_VariableSet_CurrentHealth_ImplicitCast = K2Node_VariableSet_CurrentHealth_ImplicitCast;
	Parms.K2Node_VariableSet_MaxHealth_ImplicitCast = K2Node_VariableSet_MaxHealth_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ToggleMeshVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceMeshInstance_C*CallFunc_GetBPMeshInstance_MeshInstance                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::ToggleMeshVisibility(bool IsVisible, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "ToggleMeshVisibility");

	Params::UBP_StructureCompositePiece_C_ToggleMeshVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.CallFunc_GetBPMeshInstance_MeshInstance = CallFunc_GetBPMeshInstance_MeshInstance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCompleteState
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetOwnerStructureComposite_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetPieceData_OutPieceData                               (None)
// class ABP_StructureComposite_Base_C*K2Node_DynamicCast_AsBP_Structure_Composite_Base                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnCompleteState(bool* Success, class AStructureComposite* CallFunc_GetOwnerStructureComposite_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetPieceData_OutPieceData, class ABP_StructureComposite_Base_C* K2Node_DynamicCast_AsBP_Structure_Composite_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnCompleteState");

	Params::UBP_StructureCompositePiece_C_OnCompleteState_Params Parms{};

	Parms.CallFunc_GetOwnerStructureComposite_ReturnValue = CallFunc_GetOwnerStructureComposite_ReturnValue;
	Parms.CallFunc_GetPieceData_OutPieceData = CallFunc_GetPieceData_OutPieceData;
	Parms.K2Node_DynamicCast_AsBP_Structure_Composite_Base = K2Node_DynamicCast_AsBP_Structure_Composite_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnConstructionState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnConstructionState(bool* Success, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnConstructionState");

	Params::UBP_StructureCompositePiece_C_OnConstructionState_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnConfirmedState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnConfirmedState(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnConfirmedState");

	Params::UBP_StructureCompositePiece_C_OnConfirmedState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnInitState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnInitState(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnInitState");

	Params::UBP_StructureCompositePiece_C_OnInitState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnSchematicPlacedState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnSchematicPlacedState(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnSchematicPlacedState");

	Params::UBP_StructureCompositePiece_C_OnSchematicPlacedState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetBPMeshInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBP_CompositePieceMeshInstance_C*MeshInstance                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class UCompositePieceInstance*     CallFunc_GetMeshInstance_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceMeshInstance_C*K2Node_DynamicCast_AsBP_Composite_Piece_Mesh_Instance            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetBPMeshInstance(class UBP_CompositePieceMeshInstance_C** MeshInstance, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, class UCompositePieceInstance* CallFunc_GetMeshInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_CompositePieceMeshInstance_C* K2Node_DynamicCast_AsBP_Composite_Piece_Mesh_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetBPMeshInstance");

	Params::UBP_StructureCompositePiece_C_GetBPMeshInstance_Params Parms{};

	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_GetMeshInstance_ReturnValue = CallFunc_GetMeshInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Composite_Piece_Mesh_Instance = K2Node_DynamicCast_AsBP_Composite_Piece_Mesh_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (MeshInstance != nullptr)
		*MeshInstance = Parms.MeshInstance;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetBPStructureComposite
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_Structure_Composite_C*   AsBP_Structure_Composite                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetOwnerStructureComposite_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   K2Node_DynamicCast_AsBP_Structure_Composite                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::GetBPStructureComposite(class ABP_Structure_Composite_C** AsBP_Structure_Composite, class AStructureComposite* CallFunc_GetOwnerStructureComposite_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Structure_Composite_C* K2Node_DynamicCast_AsBP_Structure_Composite, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "GetBPStructureComposite");

	Params::UBP_StructureCompositePiece_C_GetBPStructureComposite_Params Parms{};

	Parms.CallFunc_GetOwnerStructureComposite_ReturnValue = CallFunc_GetOwnerStructureComposite_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Composite = K2Node_DynamicCast_AsBP_Structure_Composite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Structure_Composite != nullptr)
		*AsBP_Structure_Composite = Parms.AsBP_Structure_Composite;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnPlacementState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnPlacementState(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnPlacementState");

	Params::UBP_StructureCompositePiece_C_OnPlacementState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.RefreshState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LSuccess                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnCompleteState_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnConstructionState_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnConfirmedState_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnInitState_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnSchematicPlacedState_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnPlacementState_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::RefreshState(bool LSuccess, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_OnCompleteState_Success, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_OnConstructionState_Success, bool CallFunc_OnConfirmedState_Success, bool CallFunc_OnInitState_Success, bool CallFunc_OnSchematicPlacedState_Success, bool CallFunc_OnPlacementState_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "RefreshState");

	Params::UBP_StructureCompositePiece_C_RefreshState_Params Parms{};

	Parms.LSuccess = LSuccess;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_OnCompleteState_Success = CallFunc_OnCompleteState_Success;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_OnConstructionState_Success = CallFunc_OnConstructionState_Success;
	Parms.CallFunc_OnConfirmedState_Success = CallFunc_OnConfirmedState_Success;
	Parms.CallFunc_OnInitState_Success = CallFunc_OnInitState_Success;
	Parms.CallFunc_OnSchematicPlacedState_Success = CallFunc_OnSchematicPlacedState_Success;
	Parms.CallFunc_OnPlacementState_Success = CallFunc_OnPlacementState_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.BindTo_SupportingObjectsChangedDelegate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 SupportingObjectsChangedDelegate                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::BindTo_SupportingObjectsChangedDelegate(FDelegateProperty_& SupportingObjectsChangedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "BindTo_SupportingObjectsChangedDelegate");

	Params::UBP_StructureCompositePiece_C_BindTo_SupportingObjectsChangedDelegate_Params Parms{};

	Parms.SupportingObjectsChangedDelegate = SupportingObjectsChangedDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.InvalidateSupportingObjectsCache
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::InvalidateSupportingObjectsCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "InvalidateSupportingObjectsCache");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnOwnerInitialized
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::OnOwnerInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnOwnerInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnOwnerSnapped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::OnOwnerSnapped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnOwnerSnapped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnPlacementBlockedBeforeSupport
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::OnPlacementBlockedBeforeSupport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnPlacementBlockedBeforeSupport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.RebuildSupportingObjectsCache
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::RebuildSupportingObjectsCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "RebuildSupportingObjectsCache");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.TrackSupportedObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureSupportObjectData SupportedObject                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_StructureCompositePiece_C::TrackSupportedObject(struct FStructureSupportObjectData& SupportedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "TrackSupportedObject");

	Params::UBP_StructureCompositePiece_C_TrackSupportedObject_Params Parms{};

	Parms.SupportedObject = SupportedObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.UnbindFrom_SupportingObjectsChangedDelegate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 SupportingObjectsChangedDelegate                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::UnbindFrom_SupportingObjectsChangedDelegate(FDelegateProperty_& SupportingObjectsChangedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "UnbindFrom_SupportingObjectsChangedDelegate");

	Params::UBP_StructureCompositePiece_C_UnbindFrom_SupportingObjectsChangedDelegate_Params Parms{};

	Parms.SupportingObjectsChangedDelegate = SupportingObjectsChangedDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.UntrackSupportedObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureSupportObjectData SupportedObject                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_StructureCompositePiece_C::UntrackSupportedObject(struct FStructureSupportObjectData& SupportedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "UntrackSupportedObject");

	Params::UBP_StructureCompositePiece_C_UntrackSupportedObject_Params Parms{};

	Parms.SupportedObject = SupportedObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnAnyAttributeChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnAnyAttributeChanged(struct FGameplayAttribute& Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnAnyAttributeChanged");

	Params::UBP_StructureCompositePiece_C_OnAnyAttributeChanged_Params Parms{};

	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCharacterOverWeight
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::OnCharacterOverWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnCharacterOverWeight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCharacterUnderWeight
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::OnCharacterUnderWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnCharacterUnderWeight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCharacterWeightChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnCharacterWeightChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnCharacterWeightChanged");

	Params::UBP_StructureCompositePiece_C_OnCharacterWeightChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCharacterWeightMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnCharacterWeightMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnCharacterWeightMaxChanged");

	Params::UBP_StructureCompositePiece_C_OnCharacterWeightMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCraftBuildPointsChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnCraftBuildPointsChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnCraftBuildPointsChanged");

	Params::UBP_StructureCompositePiece_C_OnCraftBuildPointsChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCraftIntegrityChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnCraftIntegrityChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnCraftIntegrityChanged");

	Params::UBP_StructureCompositePiece_C_OnCraftIntegrityChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCraftQualityChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnCraftQualityChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnCraftQualityChanged");

	Params::UBP_StructureCompositePiece_C_OnCraftQualityChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnEstateScoreChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnEstateScoreChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnEstateScoreChanged");

	Params::UBP_StructureCompositePiece_C_OnEstateScoreChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnFedChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnFedChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnFedChanged");

	Params::UBP_StructureCompositePiece_C_OnFedChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnFedMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnFedMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnFedMaxChanged");

	Params::UBP_StructureCompositePiece_C_OnFedMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnFuelChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnFuelChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnFuelChanged");

	Params::UBP_StructureCompositePiece_C_OnFuelChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnHealthMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnHealthMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnHealthMaxChanged");

	Params::UBP_StructureCompositePiece_C_OnHealthMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnHopeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnHopeChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnHopeChanged");

	Params::UBP_StructureCompositePiece_C_OnHopeChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnHopeMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnHopeMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnHopeMaxChanged");

	Params::UBP_StructureCompositePiece_C_OnHopeMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnHopeMinChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnHopeMinChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnHopeMinChanged");

	Params::UBP_StructureCompositePiece_C_OnHopeMinChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnLoadoutLevelChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnLoadoutLevelChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnLoadoutLevelChanged");

	Params::UBP_StructureCompositePiece_C_OnLoadoutLevelChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnMaxSpeedBonusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnMaxSpeedBonusChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnMaxSpeedBonusChanged");

	Params::UBP_StructureCompositePiece_C_OnMaxSpeedBonusChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnMaxSpeedRunChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnMaxSpeedRunChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnMaxSpeedRunChanged");

	Params::UBP_StructureCompositePiece_C_OnMaxSpeedRunChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnMaxSpeedWalkChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnMaxSpeedWalkChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnMaxSpeedWalkChanged");

	Params::UBP_StructureCompositePiece_C_OnMaxSpeedWalkChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnMaxSpeedWalkFastChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnMaxSpeedWalkFastChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnMaxSpeedWalkFastChanged");

	Params::UBP_StructureCompositePiece_C_OnMaxSpeedWalkFastChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnQuestScoreChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnQuestScoreChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnQuestScoreChanged");

	Params::UBP_StructureCompositePiece_C_OnQuestScoreChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnRestedChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnRestedChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnRestedChanged");

	Params::UBP_StructureCompositePiece_C_OnRestedChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnRestedMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnRestedMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnRestedMaxChanged");

	Params::UBP_StructureCompositePiece_C_OnRestedMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnStaminaChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnStaminaChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnStaminaChanged");

	Params::UBP_StructureCompositePiece_C_OnStaminaChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnStaminaDepleted
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::OnStaminaDepleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnStaminaDepleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnStaminaMaxChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnStaminaMaxChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnStaminaMaxChanged");

	Params::UBP_StructureCompositePiece_C_OnStaminaMaxChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnReceiveCarriedResources
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnReceiveCarriedResources(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnReceiveCarriedResources");

	Params::UBP_StructureCompositePiece_C_OnReceiveCarriedResources_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.PerformClientSideInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::PerformClientSideInteraction(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "PerformClientSideInteraction");

	Params::UBP_StructureCompositePiece_C_PerformClientSideInteraction_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnBuildProgressChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnBuildProgressChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnBuildProgressChanged");

	Params::UBP_StructureCompositePiece_C_OnBuildProgressChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnHealthChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::OnHealthChanged(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnHealthChanged");

	Params::UBP_StructureCompositePiece_C_OnHealthChanged_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnReachedMinSchematicTimeout
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::OnReachedMinSchematicTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "OnReachedMinSchematicTimeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.CallHealthChangedEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureHealthChangedContextHealthChangedContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_StructureCompositePiece_C::CallHealthChangedEvent(const struct FStructureHealthChangedContext& HealthChangedContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "CallHealthChangedEvent");

	Params::UBP_StructureCompositePiece_C_CallHealthChangedEvent_Params Parms{};

	Parms.HealthChangedContext = HealthChangedContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.K2_OnDestroyed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::K2_OnDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "K2_OnDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.K2_OnBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::K2_OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "K2_OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.K2_OnDamageReceived
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          TagValueContainer                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_StructureCompositePiece_C::K2_OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "K2_OnDamageReceived");

	Params::UBP_StructureCompositePiece_C_K2_OnDamageReceived_Params Parms{};

	Parms.Damage = Damage;
	Parms.Target = Target;
	Parms.Source = Source;
	Parms.EffectTags = EffectTags;
	Parms.HitResult = HitResult;
	Parms.TagValueContainer = TagValueContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.K2_OnRepCompositePieceData
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_StructureCompositePiece_C::K2_OnRepCompositePieceData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "K2_OnRepCompositePieceData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.AddGameplayTagToStructure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::AddGameplayTagToStructure(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "AddGameplayTagToStructure");

	Params::UBP_StructureCompositePiece_C_AddGameplayTagToStructure_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.RemoveGameplayTagFromStructure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::RemoveGameplayTagFromStructure(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "RemoveGameplayTagFromStructure");

	Params::UBP_StructureCompositePiece_C_RemoveGameplayTagFromStructure_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ExecuteUbergraph_BP_StructureCompositePiece
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetPieceData_OutPieceData                               (None)
// FDelegateProperty_                 K2Node_Event_SupportingObjectsChangedDelegate_1                  (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureSupportObjectData K2Node_Event_SupportedObject_1                                   (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_Event_SupportingObjectsChangedDelegate                    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureSupportObjectData K2Node_Event_SupportedObject                                     (ConstParm, NoDestructor)
// struct FGameplayAttribute          K2Node_Event_Attribute                                           (ConstParm, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_Controller_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureHealthChangedContextK2Node_Event_HealthChangedContext                                (NoDestructor)
// class ABP_Structure_Composite_C*   CallFunc_GetBPStructureComposite_AsBP_Structure_Composite        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Source                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_EffectTags                                          (ConstParm)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          K2Node_Event_TagValueContainer                                   (ConstParm)
// class UBP_DamageObject_CompositePiece_C*CallFunc_GetDamageObject_DamageObject                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_1      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_2      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_GameplayTag_1                                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_GameplayTag                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_3      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISchematicInfoInterface>K2Node_DynamicCast_AsSchematic_Info_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             CallFunc_GetAudioComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsVisible_Client_IsVisible                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_SetStructureSchematicState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Structure_Audio_Component_C*K2Node_DynamicCast_AsBP_Structure_Audio_Component                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_4      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue_1                  (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnStructureDamageReceived_Damage_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositePiece_C::ExecuteUbergraph_BP_StructureCompositePiece(int32 EntryPoint, const struct FCompositePieceGameplay& CallFunc_GetPieceData_OutPieceData, FDelegateProperty_ K2Node_Event_SupportingObjectsChangedDelegate_1, const struct FStructureSupportObjectData& K2Node_Event_SupportedObject_1, FDelegateProperty_ K2Node_Event_SupportingObjectsChangedDelegate, const struct FStructureSupportObjectData& K2Node_Event_SupportedObject, const struct FGameplayAttribute& K2Node_Event_Attribute, float K2Node_Event_Delta_24, float K2Node_Event_Delta_23, float K2Node_Event_Delta_22, float K2Node_Event_Delta_21, float K2Node_Event_Delta_20, float K2Node_Event_Delta_19, float K2Node_Event_Delta_18, float K2Node_Event_Delta_17, float K2Node_Event_Delta_16, float K2Node_Event_Delta_15, float K2Node_Event_Delta_14, float K2Node_Event_Delta_13, float K2Node_Event_Delta_12, float K2Node_Event_Delta_11, float K2Node_Event_Delta_10, float K2Node_Event_Delta_9, float K2Node_Event_Delta_8, float K2Node_Event_Delta_7, float K2Node_Event_Delta_6, float K2Node_Event_Delta_5, float K2Node_Event_Delta_4, float K2Node_Event_Delta_3, float K2Node_Event_Delta_2, class AController* K2Node_Event_Controller_1, class AController* K2Node_Event_Controller, float K2Node_Event_Delta_1, float K2Node_Event_Delta, const struct FStructureHealthChangedContext& K2Node_Event_HealthChangedContext, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer, class UBP_DamageObject_CompositePiece_C* CallFunc_GetDamageObject_DamageObject, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_1, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_2, const struct FGameplayTag& K2Node_Event_GameplayTag_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTag& K2Node_Event_GameplayTag, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_OwnerHasAuthority_ReturnValue_1, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_3, TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface, bool K2Node_DynamicCast_bSuccess, class UActorComponent* CallFunc_GetAudioComponent_ReturnValue, bool CallFunc_GetIsVisible_Client_IsVisible, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UActorComponent* Temp_object_Variable, bool CallFunc_OwnerHasAuthority_ReturnValue_2, class UBP_Structure_Audio_Component_C* K2Node_DynamicCast_AsBP_Structure_Audio_Component, bool K2Node_DynamicCast_bSuccess_1, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_4, bool CallFunc_IsValid_ReturnValue_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue_3, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue_1, bool CallFunc_OwnerHasAuthority_ReturnValue_4, double CallFunc_OnStructureDamageReceived_Damage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositePiece_C", "ExecuteUbergraph_BP_StructureCompositePiece");

	Params::UBP_StructureCompositePiece_C_ExecuteUbergraph_BP_StructureCompositePiece_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPieceData_OutPieceData = CallFunc_GetPieceData_OutPieceData;
	Parms.K2Node_Event_SupportingObjectsChangedDelegate_1 = K2Node_Event_SupportingObjectsChangedDelegate_1;
	Parms.K2Node_Event_SupportedObject_1 = K2Node_Event_SupportedObject_1;
	Parms.K2Node_Event_SupportingObjectsChangedDelegate = K2Node_Event_SupportingObjectsChangedDelegate;
	Parms.K2Node_Event_SupportedObject = K2Node_Event_SupportedObject;
	Parms.K2Node_Event_Attribute = K2Node_Event_Attribute;
	Parms.K2Node_Event_Delta_24 = K2Node_Event_Delta_24;
	Parms.K2Node_Event_Delta_23 = K2Node_Event_Delta_23;
	Parms.K2Node_Event_Delta_22 = K2Node_Event_Delta_22;
	Parms.K2Node_Event_Delta_21 = K2Node_Event_Delta_21;
	Parms.K2Node_Event_Delta_20 = K2Node_Event_Delta_20;
	Parms.K2Node_Event_Delta_19 = K2Node_Event_Delta_19;
	Parms.K2Node_Event_Delta_18 = K2Node_Event_Delta_18;
	Parms.K2Node_Event_Delta_17 = K2Node_Event_Delta_17;
	Parms.K2Node_Event_Delta_16 = K2Node_Event_Delta_16;
	Parms.K2Node_Event_Delta_15 = K2Node_Event_Delta_15;
	Parms.K2Node_Event_Delta_14 = K2Node_Event_Delta_14;
	Parms.K2Node_Event_Delta_13 = K2Node_Event_Delta_13;
	Parms.K2Node_Event_Delta_12 = K2Node_Event_Delta_12;
	Parms.K2Node_Event_Delta_11 = K2Node_Event_Delta_11;
	Parms.K2Node_Event_Delta_10 = K2Node_Event_Delta_10;
	Parms.K2Node_Event_Delta_9 = K2Node_Event_Delta_9;
	Parms.K2Node_Event_Delta_8 = K2Node_Event_Delta_8;
	Parms.K2Node_Event_Delta_7 = K2Node_Event_Delta_7;
	Parms.K2Node_Event_Delta_6 = K2Node_Event_Delta_6;
	Parms.K2Node_Event_Delta_5 = K2Node_Event_Delta_5;
	Parms.K2Node_Event_Delta_4 = K2Node_Event_Delta_4;
	Parms.K2Node_Event_Delta_3 = K2Node_Event_Delta_3;
	Parms.K2Node_Event_Delta_2 = K2Node_Event_Delta_2;
	Parms.K2Node_Event_Controller_1 = K2Node_Event_Controller_1;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.K2Node_Event_Delta_1 = K2Node_Event_Delta_1;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;
	Parms.K2Node_Event_HealthChangedContext = K2Node_Event_HealthChangedContext;
	Parms.CallFunc_GetBPStructureComposite_AsBP_Structure_Composite = CallFunc_GetBPStructureComposite_AsBP_Structure_Composite;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_Target = K2Node_Event_Target;
	Parms.K2Node_Event_Source = K2Node_Event_Source;
	Parms.K2Node_Event_EffectTags = K2Node_Event_EffectTags;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_TagValueContainer = K2Node_Event_TagValueContainer;
	Parms.CallFunc_GetDamageObject_DamageObject = CallFunc_GetDamageObject_DamageObject;
	Parms.CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_1 = CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_1;
	Parms.CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_2 = CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_2;
	Parms.K2Node_Event_GameplayTag_1 = K2Node_Event_GameplayTag_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_GameplayTag = K2Node_Event_GameplayTag;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue_1 = CallFunc_OwnerHasAuthority_ReturnValue_1;
	Parms.CallFunc_GetCompositeStructure_Composite = CallFunc_GetCompositeStructure_Composite;
	Parms.CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_3 = CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_3;
	Parms.K2Node_DynamicCast_AsSchematic_Info_Interface = K2Node_DynamicCast_AsSchematic_Info_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAudioComponent_ReturnValue = CallFunc_GetAudioComponent_ReturnValue;
	Parms.CallFunc_GetIsVisible_Client_IsVisible = CallFunc_GetIsVisible_Client_IsVisible;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_SetStructureSchematicState_ReturnValue = CallFunc_SetStructureSchematicState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue_2 = CallFunc_OwnerHasAuthority_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Structure_Audio_Component = K2Node_DynamicCast_AsBP_Structure_Audio_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_4 = CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue_3 = CallFunc_OwnerHasAuthority_ReturnValue_3;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue_1 = CallFunc_GetStructureEventsObject_ReturnValue_1;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue_4 = CallFunc_OwnerHasAuthority_ReturnValue_4;
	Parms.CallFunc_OnStructureDamageReceived_Damage_ImplicitCast = CallFunc_OnStructureDamageReceived_Damage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


