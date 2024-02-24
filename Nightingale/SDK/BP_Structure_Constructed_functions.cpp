#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Constructed.BP_Structure_Constructed_C
// (Actor)

class UClass* ABP_Structure_Constructed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Constructed_C");

	return Clss;
}


// BP_Structure_Constructed_C BP_Structure_Constructed.Default__BP_Structure_Constructed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Constructed_C* ABP_Structure_Constructed_C::GetDefaultObj()
{
	static class ABP_Structure_Constructed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Constructed_C*>(ABP_Structure_Constructed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetFirstSupportingObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     OutFirstSupportingObject                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::GetFirstSupportingObject(class UObject** OutFirstSupportingObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetFirstSupportingObject");

	Params::ABP_Structure_Constructed_C_GetFirstSupportingObject_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutFirstSupportingObject != nullptr)
		*OutFirstSupportingObject = Parms.OutFirstSupportingObject;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetSupportingObjects
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FStructureSupportObjectData>OutSupportingStructures                                          (Parm, OutParm)

void ABP_Structure_Constructed_C::GetSupportingObjects(TArray<struct FStructureSupportObjectData>* OutSupportingStructures)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetSupportingObjects");

	Params::ABP_Structure_Constructed_C_GetSupportingObjects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutSupportingStructures != nullptr)
		*OutSupportingStructures = std::move(Parms.OutSupportingStructures);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.IsSupported
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Constructed_C::IsSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "IsSupported");

	Params::ABP_Structure_Constructed_C_IsSupported_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetSupportedObjects
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FStructureSupportObjectData>OutSupportedStructures                                           (Parm, OutParm)

void ABP_Structure_Constructed_C::GetSupportedObjects(TArray<struct FStructureSupportObjectData>* OutSupportedStructures)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetSupportedObjects");

	Params::ABP_Structure_Constructed_C_GetSupportedObjects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutSupportedStructures != nullptr)
		*OutSupportedStructures = std::move(Parms.OutSupportedStructures);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.IsSupportingOtherObjects
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Constructed_C::IsSupportingOtherObjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "IsSupportingOtherObjects");

	Params::ABP_Structure_Constructed_C_IsSupportingOtherObjects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.TraceForGroundSupport
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

void ABP_Structure_Constructed_C::TraceForGroundSupport(bool bIncludeBasePotential, bool* OutIsIntersectingGround, TArray<struct FHitResult>* OutResults, TArray<struct FHitResult>& Temp_struct_Variable, bool Temp_bool_Variable, class UObject* CallFunc_GetSupportInterfaceObject_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TraceForGroundSupport_OutIsIntersectingGround, TArray<struct FHitResult>& CallFunc_TraceForGroundSupport_OutResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "TraceForGroundSupport");

	Params::ABP_Structure_Constructed_C_TraceForGroundSupport_Params Parms{};

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


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.TryDestroyIfUnsupported
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DeconstructionSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSupportInterfaceObject_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISupportInterface>K2Node_DynamicCast_AsSupport_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryDestroyIfUnsupported_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Constructed_C::TryDestroyIfUnsupported(class AActor* DeconstructionSource, class UObject* CallFunc_GetSupportInterfaceObject_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryDestroyIfUnsupported_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "TryDestroyIfUnsupported");

	Params::ABP_Structure_Constructed_C_TryDestroyIfUnsupported_Params Parms{};

	Parms.DeconstructionSource = DeconstructionSource;
	Parms.CallFunc_GetSupportInterfaceObject_ReturnValue = CallFunc_GetSupportInterfaceObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSupport_Interface = K2Node_DynamicCast_AsSupport_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryDestroyIfUnsupported_ReturnValue = CallFunc_TryDestroyIfUnsupported_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.UpdateSupport
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback_SupportReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)

struct FStructurePlacementFeedback_Support ABP_Structure_Constructed_C::UpdateSupport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "UpdateSupport");

	Params::ABP_Structure_Constructed_C_UpdateSupport_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetAreaOfEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USphereComponent*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class USphereComponent* ABP_Structure_Constructed_C::GetAreaOfEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetAreaOfEffect");

	Params::ABP_Structure_Constructed_C_GetAreaOfEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetAudioComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActorComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UActorComponent* ABP_Structure_Constructed_C::GetAudioComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetAudioComponent");

	Params::ABP_Structure_Constructed_C_GetAudioComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetBuildRadiusInformation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              OutRadius                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutOrigin                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::GetBuildRadiusInformation(float* OutRadius, struct FVector* OutOrigin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetBuildRadiusInformation");

	Params::ABP_Structure_Constructed_C_GetBuildRadiusInformation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutRadius != nullptr)
		*OutRadius = Parms.OutRadius;

	if (OutOrigin != nullptr)
		*OutOrigin = std::move(Parms.OutOrigin);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetDisplayNameText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_GetUIData_IsValid                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureUIData            CallFunc_GetUIData_OutUIData                                     (None)

class FText ABP_Structure_Constructed_C::GetDisplayNameText(bool CallFunc_GetUIData_IsValid, const struct FStructureUIData& CallFunc_GetUIData_OutUIData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetDisplayNameText");

	Params::ABP_Structure_Constructed_C_GetDisplayNameText_Params Parms{};

	Parms.CallFunc_GetUIData_IsValid = CallFunc_GetUIData_IsValid;
	Parms.CallFunc_GetUIData_OutUIData = CallFunc_GetUIData_OutUIData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetStructureID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString ABP_Structure_Constructed_C::GetStructureID(const class FString& CallFunc_Conv_GuidToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetStructureID");

	Params::ABP_Structure_Constructed_C_GetStructureID_Params Parms{};

	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetStructureInteractions
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_GetAllStructureInteractions_AvailableInteractions       (ReferenceParm)

TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*> ABP_Structure_Constructed_C::GetStructureInteractions(TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetAllStructureInteractions_AvailableInteractions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetStructureInteractions");

	Params::ABP_Structure_Constructed_C_GetStructureInteractions_Params Parms{};

	Parms.CallFunc_GetAllStructureInteractions_AvailableInteractions = CallFunc_GetAllStructureInteractions_AvailableInteractions;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetTotalResourceRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FStructureResourceRequirements>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// class UBP_StructureResourcesObject_C*CallFunc_GetResourceInfoObject_ReturnValue                       (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>CallFunc_GetTotalResourceRequirements_TotalResourceRequirements  (ReferenceParm, ContainsInstancedReference)

TArray<struct FStructureResourceRequirements> ABP_Structure_Constructed_C::GetTotalResourceRequirements(class UBP_StructureResourcesObject_C* CallFunc_GetResourceInfoObject_ReturnValue, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_TotalResourceRequirements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetTotalResourceRequirements");

	Params::ABP_Structure_Constructed_C_GetTotalResourceRequirements_Params Parms{};

	Parms.CallFunc_GetResourceInfoObject_ReturnValue = CallFunc_GetResourceInfoObject_ReturnValue;
	Parms.CallFunc_GetTotalResourceRequirements_TotalResourceRequirements = CallFunc_GetTotalResourceRequirements_TotalResourceRequirements;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.StructureHasAddedResources
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureResourcesObject_C*CallFunc_GetResourceInfoObject_ReturnValue                       (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StructureHasAddedResources_HasAddedResources            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Constructed_C::StructureHasAddedResources(class UBP_StructureResourcesObject_C* CallFunc_GetResourceInfoObject_ReturnValue, bool CallFunc_StructureHasAddedResources_HasAddedResources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "StructureHasAddedResources");

	Params::ABP_Structure_Constructed_C_StructureHasAddedResources_Params Parms{};

	Parms.CallFunc_GetResourceInfoObject_ReturnValue = CallFunc_GetResourceInfoObject_ReturnValue;
	Parms.CallFunc_StructureHasAddedResources_HasAddedResources = CallFunc_StructureHasAddedResources_HasAddedResources;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetSnapPoints
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FGridPoint>          SnapPoints                                                       (Parm, OutParm)
// TArray<struct FGridPoint>          K2Node_MakeArray_Array                                           (ReferenceParm)
// class UBP_CompositePieceSnapObject_C*CallFunc_GetSnapObject_SnapObject                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceSnapObject_C*CallFunc_GetSnapObject_SnapObject_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          CallFunc_GetGridPoints_ReturnValue                               (ReferenceParm)

void ABP_Structure_Constructed_C::GetSnapPoints(TArray<struct FGridPoint>* SnapPoints, TArray<struct FGridPoint>& K2Node_MakeArray_Array, class UBP_CompositePieceSnapObject_C* CallFunc_GetSnapObject_SnapObject, bool CallFunc_IsValid_ReturnValue, class UBP_CompositePieceSnapObject_C* CallFunc_GetSnapObject_SnapObject_1, TArray<struct FGridPoint>& CallFunc_GetGridPoints_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetSnapPoints");

	Params::ABP_Structure_Constructed_C_GetSnapPoints_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSnapObject_SnapObject = CallFunc_GetSnapObject_SnapObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSnapObject_SnapObject_1 = CallFunc_GetSnapObject_SnapObject_1;
	Parms.CallFunc_GetGridPoints_ReturnValue = CallFunc_GetGridPoints_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SnapPoints != nullptr)
		*SnapPoints = std::move(Parms.SnapPoints);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetSnapType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class ESnapType               SnapPointType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceSnapObject_C*CallFunc_GetSnapObject_SnapObject                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetSnapType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::GetSnapType(enum class ESnapType* SnapPointType, class UBP_CompositePieceSnapObject_C* CallFunc_GetSnapObject_SnapObject, enum class ESnapType CallFunc_GetSnapType_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetSnapType");

	Params::ABP_Structure_Constructed_C_GetSnapType_Params Parms{};

	Parms.CallFunc_GetSnapObject_SnapObject = CallFunc_GetSnapObject_SnapObject;
	Parms.CallFunc_GetSnapType_ReturnValue = CallFunc_GetSnapType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SnapPointType != nullptr)
		*SnapPointType = Parms.SnapPointType;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetSnapComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCompositePieceSnapObject*   SnapObject                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceSnapObject_C*CallFunc_GetSnapObject_SnapObject                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::GetSnapComponent(class UCompositePieceSnapObject** SnapObject, class UBP_CompositePieceSnapObject_C* CallFunc_GetSnapObject_SnapObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetSnapComponent");

	Params::ABP_Structure_Constructed_C_GetSnapComponent_Params Parms{};

	Parms.CallFunc_GetSnapObject_SnapObject = CallFunc_GetSnapObject_SnapObject;

	UObject::ProcessEvent(Func, &Parms);

	if (SnapObject != nullptr)
		*SnapObject = Parms.SnapObject;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetSupportMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        SupportMesh                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::GetSupportMesh(class UStaticMeshComponent** SupportMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetSupportMesh");

	Params::ABP_Structure_Constructed_C_GetSupportMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SupportMesh != nullptr)
		*SupportMesh = Parms.SupportMesh;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetFuelComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_StructureFuelComponent_C*FuelComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::GetFuelComponent(class UBP_StructureFuelComponent_C** FuelComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetFuelComponent");

	Params::ABP_Structure_Constructed_C_GetFuelComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FuelComponent != nullptr)
		*FuelComponent = Parms.FuelComponent;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetInventoryContainerInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RequestingActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>ContainerInterface                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetInventoryContainerInterface");

	Params::ABP_Structure_Constructed_C_GetInventoryContainerInterface_Params Parms{};

	Parms.RequestingActor = RequestingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ContainerInterface != nullptr)
		*ContainerInterface = Parms.ContainerInterface;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.IsInteractionDisabled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               bIsDisabled                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisabledText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureInteractionDisabled_IsDisabled               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_IsStructureInteractionDisabled_InteractionMessage       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsStructureInteractionDisabled_IsDisabled, class FText CallFunc_IsStructureInteractionDisabled_InteractionMessage, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "IsInteractionDisabled");

	Params::ABP_Structure_Constructed_C_IsInteractionDisabled_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsStructureInteractionDisabled_IsDisabled = CallFunc_IsStructureInteractionDisabled_IsDisabled;
	Parms.CallFunc_IsStructureInteractionDisabled_InteractionMessage = CallFunc_IsStructureInteractionDisabled_InteractionMessage;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsDisabled != nullptr)
		*bIsDisabled = Parms.bIsDisabled;

	if (DisabledText != nullptr)
		*DisabledText = std::move(Parms.DisabledText);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetStructureFireComponentForModify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UStructureFireComponent*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UStructureFireComponent* ABP_Structure_Constructed_C::GetStructureFireComponentForModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetStructureFireComponentForModify");

	Params::ABP_Structure_Constructed_C_GetStructureFireComponentForModify_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.Is Component AVFXPlane or Scatter Mask
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             SceneComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bIsMatchingComponent                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ComponentClass                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::Is_Component_AVFXPlane_or_Scatter_Mask(class USceneComponent* SceneComponent, bool* bIsMatchingComponent, class UClass* ComponentClass, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "Is Component AVFXPlane or Scatter Mask");

	Params::ABP_Structure_Constructed_C_Is_Component_AVFXPlane_or_Scatter_Mask_Params Parms{};

	Parms.SceneComponent = SceneComponent;
	Parms.ComponentClass = ComponentClass;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsMatchingComponent != nullptr)
		*bIsMatchingComponent = Parms.bIsMatchingComponent;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.Bind Events
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::Bind_Events(enum class EStructureState CallFunc_GetSchematicState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "Bind Events");

	Params::ABP_Structure_Constructed_C_Bind_Events_Params Parms{};

	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetStructureFireComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UStructureFireComponent*     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UStructureFireComponent* ABP_Structure_Constructed_C::GetStructureFireComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetStructureFireComponent");

	Params::ABP_Structure_Constructed_C_GetStructureFireComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.InitalizeFireComponent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_StructureFireComponent_C*CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFireData_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureFireDefinition*    CallFunc_GetFireData_OutFireData                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::InitalizeFireComponent(class UBP_StructureFireComponent_C* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_GetFireData_IsValid, class UStructureFireDefinition* CallFunc_GetFireData_OutFireData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "InitalizeFireComponent");

	Params::ABP_Structure_Constructed_C_InitalizeFireComponent_Params Parms{};

	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_GetFireData_IsValid = CallFunc_GetFireData_IsValid;
	Parms.CallFunc_GetFireData_OutFireData = CallFunc_GetFireData_OutFireData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.Create Respawn Point
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetOwningPlayerController_ReturnValue                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureRespawnPoint_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_CreateRespawnPoint_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::Create_Respawn_Point(class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsStructureRespawnPoint_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_CreateRespawnPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "Create Respawn Point");

	Params::ABP_Structure_Constructed_C_Create_Respawn_Point_Params Parms{};

	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsStructureRespawnPoint_ReturnValue = CallFunc_IsStructureRespawnPoint_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateRespawnPoint_ReturnValue = CallFunc_CreateRespawnPoint_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetStructureTraitAuraCollider
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* ABP_Structure_Constructed_C::GetStructureTraitAuraCollider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetStructureTraitAuraCollider");

	Params::ABP_Structure_Constructed_C_GetStructureTraitAuraCollider_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetStructureTraitAuraColliderForModify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* ABP_Structure_Constructed_C::GetStructureTraitAuraColliderForModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetStructureTraitAuraColliderForModify");

	Params::ABP_Structure_Constructed_C_GetStructureTraitAuraColliderForModify_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetInteractionTag
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InteractionTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                LocalInteractionTag                                              (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Constructed_C::GetInteractionTag(struct FGameplayTag* InteractionTag, const struct FGameplayTag& LocalInteractionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetInteractionTag");

	Params::ABP_Structure_Constructed_C_GetInteractionTag_Params Parms{};

	Parms.LocalInteractionTag = LocalInteractionTag;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTag != nullptr)
		*InteractionTag = std::move(Parms.InteractionTag);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetStructurePlacerObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStructurePlacerObject*      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_StructurePlacerObject_C* CallFunc_GetDefaultObject_ReturnValue                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UStructurePlacerObject* ABP_Structure_Constructed_C::GetStructurePlacerObject(class UBP_StructurePlacerObject_C* CallFunc_GetDefaultObject_ReturnValue, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetStructurePlacerObject");

	Params::ABP_Structure_Constructed_C_GetStructurePlacerObject_Params Parms{};

	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.SetPlacementFeedback
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandlePlacementTargetData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback FeedbackData                                                     (Parm, OutParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructurePlacerObject*      PlacerObject                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback CallFunc_SetPlacementFeedback_ReturnValue                        (ContainsInstancedReference)

bool ABP_Structure_Constructed_C::SetPlacementFeedback(struct FGameplayAbilityTargetDataHandle& PlacementTargetData, class AController* Controller, struct FStructurePlacementFeedback* FeedbackData, class UStructurePlacerObject* PlacerObject, bool CallFunc_HasAuthority_ReturnValue, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FStructurePlacementFeedback& CallFunc_SetPlacementFeedback_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "SetPlacementFeedback");

	Params::ABP_Structure_Constructed_C_SetPlacementFeedback_Params Parms{};

	Parms.PlacementTargetData = PlacementTargetData;
	Parms.Controller = Controller;
	Parms.PlacerObject = PlacerObject;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_SetPlacementFeedback_ReturnValue = CallFunc_SetPlacementFeedback_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FeedbackData != nullptr)
		*FeedbackData = std::move(Parms.FeedbackData);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.InitializePlacementState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       PlacingCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_SetStructureSchematicState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Constructed_C::InitializePlacementState(class APawn* PlacingCharacter, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "InitializePlacementState");

	Params::ABP_Structure_Constructed_C_InitializePlacementState_Params Parms{};

	Parms.PlacingCharacter = PlacingCharacter;
	Parms.CallFunc_SetStructureSchematicState_ReturnValue = CallFunc_SetStructureSchematicState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.FinalizePlacement
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSnapPlacementTargetData    SnapData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      Message                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinalizePlacement_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Constructed_C::FinalizePlacement(class AController* Controller, struct FSnapPlacementTargetData& SnapData, class FString* Message, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_FinalizePlacement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "FinalizePlacement");

	Params::ABP_Structure_Constructed_C_FinalizePlacement_Params Parms{};

	Parms.Controller = Controller;
	Parms.SnapData = SnapData;
	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_FinalizePlacement_ReturnValue = CallFunc_FinalizePlacement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetPlacementTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              OptionalDeltaRotationZ                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OptionalDeltaHeightZ                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, OutParm)
// TArray<struct FHitResult>          CornerHits                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FVector                     Hit_Location                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxZ                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  GroundTransform                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaHeight                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    SpawnRotation                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  ControllingCharacter                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_GetPlacementTransform_ReturnValue                       (None)

void ABP_Structure_Constructed_C::GetPlacementTransform(class ACharacter* Character, float OptionalDeltaRotationZ, float OptionalDeltaHeightZ, struct FGameplayAbilityTargetDataHandle* TargetData, const TArray<struct FHitResult>& CornerHits, const struct FVector& Hit_Location, double MaxZ, const struct FTransform& GroundTransform, double DeltaHeight, const struct FRotator& SpawnRotation, class ACharacter* ControllingCharacter, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetPlacementTransform");

	Params::ABP_Structure_Constructed_C_GetPlacementTransform_Params Parms{};

	Parms.Character = Character;
	Parms.OptionalDeltaRotationZ = OptionalDeltaRotationZ;
	Parms.OptionalDeltaHeightZ = OptionalDeltaHeightZ;
	Parms.CornerHits = CornerHits;
	Parms.Hit_Location = Hit_Location;
	Parms.MaxZ = MaxZ;
	Parms.GroundTransform = GroundTransform;
	Parms.DeltaHeight = DeltaHeight;
	Parms.SpawnRotation = SpawnRotation;
	Parms.ControllingCharacter = ControllingCharacter;
	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_GetPlacementTransform_ReturnValue = CallFunc_GetPlacementTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetData != nullptr)
		*TargetData = std::move(Parms.TargetData);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.IsValidPlacement
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStructurePlacementFeedback PlacementFeedbackData                                            (Parm, OutParm, ContainsInstancedReference)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback CallFunc_IsValidPlacement_ReturnValue                            (ContainsInstancedReference)

void ABP_Structure_Constructed_C::IsValidPlacement(class AController* Controller, struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructurePlacementFeedback* PlacementFeedbackData, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, const struct FStructurePlacementFeedback& CallFunc_IsValidPlacement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "IsValidPlacement");

	Params::ABP_Structure_Constructed_C_IsValidPlacement_Params Parms{};

	Parms.Controller = Controller;
	Parms.TargetData = TargetData;
	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_IsValidPlacement_ReturnValue = CallFunc_IsValidPlacement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlacementFeedbackData != nullptr)
		*PlacementFeedbackData = std::move(Parms.PlacementFeedbackData);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetSupportInterfaceObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UStructureSupportObject*     CallFunc_GetSinglePieceSupportObject_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* ABP_Structure_Constructed_C::GetSupportInterfaceObject(class UStructureSupportObject* CallFunc_GetSinglePieceSupportObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetSupportInterfaceObject");

	Params::ABP_Structure_Constructed_C_GetSupportInterfaceObject_Params Parms{};

	Parms.CallFunc_GetSinglePieceSupportObject_ReturnValue = CallFunc_GetSinglePieceSupportObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetEventsObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStructureEventsObject*      EventObject                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::GetEventsObject(class UStructureEventsObject** EventObject, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetEventsObject");

	Params::ABP_Structure_Constructed_C_GetEventsObject_Params Parms{};

	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EventObject != nullptr)
		*EventObject = Parms.EventObject;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnSchematicState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ToggleVFX_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::OnSchematicState(bool* Success, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ToggleVFX_Success, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnSchematicState");

	Params::ABP_Structure_Constructed_C_OnSchematicState_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_ToggleVFX_Success = CallFunc_ToggleVFX_Success;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetMeshComponents
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UMeshComponent*>      ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<class UMeshComponent*>      CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)

TArray<class UMeshComponent*> ABP_Structure_Constructed_C::GetMeshComponents(TArray<class UMeshComponent*>& CallFunc_Map_Keys_Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetMeshComponents");

	Params::ABP_Structure_Constructed_C_GetMeshComponents_Params Parms{};

	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnStructureStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_RefreshState_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::OnStructureStateChanged(const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_RefreshState_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnStructureStateChanged");

	Params::ABP_Structure_Constructed_C_OnStructureStateChanged_Params Parms{};

	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_RefreshState_Success = CallFunc_RefreshState_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.InitializeStructure
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RefreshState_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSupportInterfaceObject_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISupportInterface>K2Node_DynamicCast_AsSupport_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::InitializeStructure(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_RefreshState_Success, class UObject* CallFunc_GetSupportInterfaceObject_ReturnValue, bool CallFunc_IsServer_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "InitializeStructure");

	Params::ABP_Structure_Constructed_C_InitializeStructure_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RefreshState_Success = CallFunc_RefreshState_Success;
	Parms.CallFunc_GetSupportInterfaceObject_ReturnValue = CallFunc_GetSupportInterfaceObject_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsSupport_Interface = K2Node_DynamicCast_AsSupport_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.PopulateSnapDataFromTable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SnapComponent_C*         CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPlacementData_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructurePlacementData*     CallFunc_GetPlacementData_OutPlacementData                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBoxComponent*               CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsStructure_Support_Object               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCollisionProfileName_ProfileName                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>CallFunc_GetStructureData_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureData_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureData_OutStructureData                       (ContainsInstancedReference)
// TScriptInterface<class IStructureDataProviderInterface>CallFunc_GetSnappableData_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSnappableData_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureSnappableData*     CallFunc_GetSnappableData_OutSnappableData                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Structure_Constructed_C::PopulateSnapDataFromTable(const struct FTransform& Temp_struct_Variable, bool CallFunc_HasAuthority_ReturnValue, class UBP_SnapComponent_C* CallFunc_AddComponent_ReturnValue, const struct FTransform& Temp_struct_Variable_1, bool CallFunc_GetPlacementData_IsValid, class UStructurePlacementData* CallFunc_GetPlacementData_OutPlacementData, class UBoxComponent* CallFunc_AddComponent_ReturnValue_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsStructure_Support_Object, bool K2Node_ClassDynamicCast_bSuccess, class FName CallFunc_GetCollisionProfileName_ProfileName, TScriptInterface<class IStructureDataProviderInterface> CallFunc_GetStructureData_self_CastInput, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, TScriptInterface<class IStructureDataProviderInterface> CallFunc_GetSnappableData_self_CastInput, bool CallFunc_GetSnappableData_IsValid, class UStructureSnappableData* CallFunc_GetSnappableData_OutSnappableData, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "PopulateSnapDataFromTable");

	Params::ABP_Structure_Constructed_C_PopulateSnapDataFromTable_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetPlacementData_IsValid = CallFunc_GetPlacementData_IsValid;
	Parms.CallFunc_GetPlacementData_OutPlacementData = CallFunc_GetPlacementData_OutPlacementData;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsStructure_Support_Object = K2Node_ClassDynamicCast_AsStructure_Support_Object;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetCollisionProfileName_ProfileName = CallFunc_GetCollisionProfileName_ProfileName;
	Parms.CallFunc_GetStructureData_self_CastInput = CallFunc_GetStructureData_self_CastInput;
	Parms.CallFunc_GetStructureData_IsValid = CallFunc_GetStructureData_IsValid;
	Parms.CallFunc_GetStructureData_OutStructureData = CallFunc_GetStructureData_OutStructureData;
	Parms.CallFunc_GetSnappableData_self_CastInput = CallFunc_GetSnappableData_self_CastInput;
	Parms.CallFunc_GetSnappableData_IsValid = CallFunc_GetSnappableData_IsValid;
	Parms.CallFunc_GetSnappableData_OutSnappableData = CallFunc_GetSnappableData_OutSnappableData;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetSnapObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBP_CompositePieceSnapObject_C*SnapObject                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   CallFunc_GetSinglePieceSnapObject_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CompositePieceSnapObject_C*K2Node_DynamicCast_AsBP_Composite_Piece_Snap_Object              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::GetSnapObject(class UBP_CompositePieceSnapObject_C** SnapObject, bool CallFunc_IsValid_ReturnValue, class UCompositePieceSnapObject* CallFunc_GetSinglePieceSnapObject_ReturnValue, class UBP_CompositePieceSnapObject_C* K2Node_DynamicCast_AsBP_Composite_Piece_Snap_Object, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetSnapObject");

	Params::ABP_Structure_Constructed_C_GetSnapObject_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSinglePieceSnapObject_ReturnValue = CallFunc_GetSinglePieceSnapObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Composite_Piece_Snap_Object = K2Node_DynamicCast_AsBP_Composite_Piece_Snap_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SnapObject != nullptr)
		*SnapObject = Parms.SnapObject;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.EnableAreaOfEffectCollision
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USphereComponent*            AOE                                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*            CallFunc_GetAreaOfEffect_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCollisionProfileName_ProfileName                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::EnableAreaOfEffectCollision(class USphereComponent* AOE, bool CallFunc_IsValid_ReturnValue, class USphereComponent* CallFunc_GetAreaOfEffect_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class FName CallFunc_GetCollisionProfileName_ProfileName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "EnableAreaOfEffectCollision");

	Params::ABP_Structure_Constructed_C_EnableAreaOfEffectCollision_Params Parms{};

	Parms.AOE = AOE;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAreaOfEffect_ReturnValue = CallFunc_GetAreaOfEffect_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCollisionProfileName_ProfileName = CallFunc_GetCollisionProfileName_ProfileName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.InitializeAreaOfEffect
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LAreaOfEffectRadius                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*            CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConstructedStructureData_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTypeData_Constructed*CallFunc_GetConstructedStructureData_OutConstructedStructureData (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshOrigin_LocalLocation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshOrigin_WorldLocation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             K2Node_VariableSet_LAreaOfEffectRadius_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::InitializeAreaOfEffect(double LAreaOfEffectRadius, const struct FTransform& Temp_struct_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, class USphereComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_GetConstructedStructureData_Success, class UStructureTypeData_Constructed* CallFunc_GetConstructedStructureData_OutConstructedStructureData, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, double K2Node_VariableSet_LAreaOfEffectRadius_ImplicitCast, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "InitializeAreaOfEffect");

	Params::ABP_Structure_Constructed_C_InitializeAreaOfEffect_Params Parms{};

	Parms.LAreaOfEffectRadius = LAreaOfEffectRadius;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_GetConstructedStructureData_Success = CallFunc_GetConstructedStructureData_Success;
	Parms.CallFunc_GetConstructedStructureData_OutConstructedStructureData = CallFunc_GetConstructedStructureData_OutConstructedStructureData;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetMeshOrigin_LocalLocation = CallFunc_GetMeshOrigin_LocalLocation;
	Parms.CallFunc_GetMeshOrigin_WorldLocation = CallFunc_GetMeshOrigin_WorldLocation;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.K2Node_VariableSet_LAreaOfEffectRadius_ImplicitCast = K2Node_VariableSet_LAreaOfEffectRadius_ImplicitCast;
	Parms.CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast = CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.LoadDataFromTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStructureTypeData_Constructed*ConstructedStructureData                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureFuelComponent_C*CallFunc_PopulateFuelDataFromTable_FuelComponent                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConstructedStructureData_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTypeData_Constructed*CallFunc_GetConstructedStructureData_OutConstructedStructureData (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::LoadDataFromTable(class UStructureTypeData_Constructed* ConstructedStructureData, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, class UBP_StructureFuelComponent_C* CallFunc_PopulateFuelDataFromTable_FuelComponent, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_GetConstructedStructureData_Success, class UStructureTypeData_Constructed* CallFunc_GetConstructedStructureData_OutConstructedStructureData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "LoadDataFromTable");

	Params::ABP_Structure_Constructed_C_LoadDataFromTable_Params Parms{};

	Parms.ConstructedStructureData = ConstructedStructureData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_PopulateFuelDataFromTable_FuelComponent = CallFunc_PopulateFuelDataFromTable_FuelComponent;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_GetConstructedStructureData_Success = CallFunc_GetConstructedStructureData_Success;
	Parms.CallFunc_GetConstructedStructureData_OutConstructedStructureData = CallFunc_GetConstructedStructureData_OutConstructedStructureData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetConstructedStructureData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTypeData_Constructed*OutConstructedStructureData                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      StructureName                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureType_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTypeData*          CallFunc_GetStructureType_OutStructureType                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureTypeData_Constructed*K2Node_DynamicCast_AsStructure_Type_Data_Constructed             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUIData_IsValid                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureUIData            CallFunc_GetUIData_OutUIData                                     (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::GetConstructedStructureData(bool* Success, class UStructureTypeData_Constructed** OutConstructedStructureData, const class FString& StructureName, bool CallFunc_GetStructureType_IsValid, class UStructureTypeData* CallFunc_GetStructureType_OutStructureType, class UStructureTypeData_Constructed* K2Node_DynamicCast_AsStructure_Type_Data_Constructed, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GetUIData_IsValid, const struct FStructureUIData& CallFunc_GetUIData_OutUIData, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetConstructedStructureData");

	Params::ABP_Structure_Constructed_C_GetConstructedStructureData_Params Parms{};

	Parms.StructureName = StructureName;
	Parms.CallFunc_GetStructureType_IsValid = CallFunc_GetStructureType_IsValid;
	Parms.CallFunc_GetStructureType_OutStructureType = CallFunc_GetStructureType_OutStructureType;
	Parms.K2Node_DynamicCast_AsStructure_Type_Data_Constructed = K2Node_DynamicCast_AsStructure_Type_Data_Constructed;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetUIData_IsValid = CallFunc_GetUIData_IsValid;
	Parms.CallFunc_GetUIData_OutUIData = CallFunc_GetUIData_OutUIData;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (OutConstructedStructureData != nullptr)
		*OutConstructedStructureData = Parms.OutConstructedStructureData;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.PopulateMeshState
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CurrentComponent                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CurrentChildComponents                                           (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UMeshComponent*>      StructureMeshes                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class USceneComponent*>     AllMeshesComponents                                              (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ComponentHasTag_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              K2Node_DynamicCast_AsMesh_Component                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// bool                               CallFunc_GetComponentIsNavRelavent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureMeshStateDefinitionK2Node_MakeStruct_StructureMeshStateDefinition                   (None)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Component_AVFXPlane_or_Scatter_Mask_bIsMatchingComponent(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMeshComponent*>      CallFunc_GetStructureMeshes_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children_1                        (ReferenceParm, ContainsInstancedReference)

void ABP_Structure_Constructed_C::PopulateMeshState(class UStaticMeshComponent* NewLocalVar, class USceneComponent* CurrentComponent, const TArray<class USceneComponent*>& CurrentChildComponents, const TArray<class UMeshComponent*>& StructureMeshes, const TArray<class USceneComponent*>& AllMeshesComponents, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, class FName Temp_name_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item, class UMeshComponent* CallFunc_Array_Get_Item_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ComponentHasTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component, bool K2Node_DynamicCast_bSuccess_1, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, bool CallFunc_GetComponentIsNavRelavent_ReturnValue, const struct FStructureMeshStateDefinition& K2Node_MakeStruct_StructureMeshStateDefinition, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Is_Component_AVFXPlane_or_Scatter_Mask_bIsMatchingComponent, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "PopulateMeshState");

	Params::ABP_Structure_Constructed_C_PopulateMeshState_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.CurrentComponent = CurrentComponent;
	Parms.CurrentChildComponents = CurrentChildComponents;
	Parms.StructureMeshes = StructureMeshes;
	Parms.AllMeshesComponents = AllMeshesComponents;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ComponentHasTag_ReturnValue = CallFunc_ComponentHasTag_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_DynamicCast_AsMesh_Component = K2Node_DynamicCast_AsMesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component = K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_GetComponentIsNavRelavent_ReturnValue = CallFunc_GetComponentIsNavRelavent_ReturnValue;
	Parms.K2Node_MakeStruct_StructureMeshStateDefinition = K2Node_MakeStruct_StructureMeshStateDefinition;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Is_Component_AVFXPlane_or_Scatter_Mask_bIsMatchingComponent = CallFunc_Is_Component_AVFXPlane_or_Scatter_Mask_bIsMatchingComponent;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetStructureMeshes_ReturnValue = CallFunc_GetStructureMeshes_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children_1 = CallFunc_GetChildrenComponents_Children_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.RefreshOverlappingPawns
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CurrentFunctionName                                              (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      LCurrentHitActor                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_RefreshIsStructureCompletionBlocked_ReturnValue         (NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::RefreshOverlappingPawns(const class FString& CurrentFunctionName, class AActor* LCurrentHitActor, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FTimerHandle& CallFunc_RefreshIsStructureCompletionBlocked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "RefreshOverlappingPawns");

	Params::ABP_Structure_Constructed_C_RefreshOverlappingPawns_Params Parms{};

	Parms.CurrentFunctionName = CurrentFunctionName;
	Parms.LCurrentHitActor = LCurrentHitActor;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RefreshIsStructureCompletionBlocked_ReturnValue = CallFunc_RefreshIsStructureCompletionBlocked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnAnySchematicStateChange
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Schematic_Material                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetPlacementFeedbackMaterial_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetPlacementFeedbackMaterial_ReturnValue_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::OnAnySchematicStateChange(class UMaterialInterface* Schematic_Material, bool Temp_bool_Variable, class UMaterialInstance* CallFunc_GetPlacementFeedbackMaterial_ReturnValue, class UMaterialInstance* CallFunc_GetPlacementFeedbackMaterial_ReturnValue_1, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* K2Node_Select_Default, const class FString& CallFunc_GetFunctionName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnAnySchematicStateChange");

	Params::ABP_Structure_Constructed_C_OnAnySchematicStateChange_Params Parms{};

	Parms.Schematic_Material = Schematic_Material;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPlacementFeedbackMaterial_ReturnValue = CallFunc_GetPlacementFeedbackMaterial_ReturnValue;
	Parms.CallFunc_GetPlacementFeedbackMaterial_ReturnValue_1 = CallFunc_GetPlacementFeedbackMaterial_ReturnValue_1;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnConstructionState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::OnConstructionState(bool* Success, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnConstructionState");

	Params::ABP_Structure_Constructed_C_OnConstructionState_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.RefreshState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LSuccess                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnSchematicState_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnConstructionState_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnCompletedState_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnConfirmedState_IsSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnPlacementState_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnInitState_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::RefreshState(bool* Success, bool LSuccess, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_OnSchematicState_Success, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_OnConstructionState_Success, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_OnCompletedState_Success, bool CallFunc_OnConfirmedState_IsSuccess, bool CallFunc_OnPlacementState_Success, bool CallFunc_OnInitState_Success, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "RefreshState");

	Params::ABP_Structure_Constructed_C_RefreshState_Params Parms{};

	Parms.LSuccess = LSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_OnSchematicState_Success = CallFunc_OnSchematicState_Success;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_OnConstructionState_Success = CallFunc_OnConstructionState_Success;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_OnCompletedState_Success = CallFunc_OnCompletedState_Success;
	Parms.CallFunc_OnConfirmedState_IsSuccess = CallFunc_OnConfirmedState_IsSuccess;
	Parms.CallFunc_OnPlacementState_Success = CallFunc_OnPlacementState_Success;
	Parms.CallFunc_OnInitState_Success = CallFunc_OnInitState_Success;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.UpdateStateTags
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_StructureCompleteTag_StructureCompleteTag               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_SchematicTag_SchematicTag                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_StructureCompleteTag_StructureCompleteTag_1             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_SchematicTag_SchematicTag_1                             (NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::UpdateStateTags(bool CallFunc_HasAuthority_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTag& CallFunc_StructureCompleteTag_StructureCompleteTag, const struct FGameplayTag& CallFunc_SchematicTag_SchematicTag, const struct FGameplayTag& CallFunc_StructureCompleteTag_StructureCompleteTag_1, const struct FGameplayTag& CallFunc_SchematicTag_SchematicTag_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "UpdateStateTags");

	Params::ABP_Structure_Constructed_C_UpdateStateTags_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_StructureCompleteTag_StructureCompleteTag = CallFunc_StructureCompleteTag_StructureCompleteTag;
	Parms.CallFunc_SchematicTag_SchematicTag = CallFunc_SchematicTag_SchematicTag;
	Parms.CallFunc_StructureCompleteTag_StructureCompleteTag_1 = CallFunc_StructureCompleteTag_StructureCompleteTag_1;
	Parms.CallFunc_SchematicTag_SchematicTag_1 = CallFunc_SchematicTag_SchematicTag_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.ExecuteDeconstructStructure
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDeconstructionResourceReturnResourceReturn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DeconstructionSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LDeconstructSource                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               LDropAllResources                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureDamageObject_C* CallFunc_GetDamageObject_DamageObject                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecuteDestroyStructure_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::ExecuteDeconstructStructure(enum class EDeconstructionResourceReturn ResourceReturn, class AActor* DeconstructionSource, bool* Success, class AActor* LDeconstructSource, bool LDropAllResources, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UBP_StructureDamageObject_C* CallFunc_GetDamageObject_DamageObject, bool CallFunc_ExecuteDestroyStructure_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "ExecuteDeconstructStructure");

	Params::ABP_Structure_Constructed_C_ExecuteDeconstructStructure_Params Parms{};

	Parms.ResourceReturn = ResourceReturn;
	Parms.DeconstructionSource = DeconstructionSource;
	Parms.LDeconstructSource = LDeconstructSource;
	Parms.LDropAllResources = LDropAllResources;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetDamageObject_DamageObject = CallFunc_GetDamageObject_DamageObject;
	Parms.CallFunc_ExecuteDestroyStructure_Success = CallFunc_ExecuteDestroyStructure_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetResourceInfoObject
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBP_StructureResourcesObject_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureResourcesObject_C*CallFunc_GetDefaultObject_ReturnValue                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UBP_StructureResourcesObject_C* ABP_Structure_Constructed_C::GetResourceInfoObject(class UBP_StructureResourcesObject_C* CallFunc_GetDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetResourceInfoObject");

	Params::ABP_Structure_Constructed_C_GetResourceInfoObject_Params Parms{};

	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.CanInteractWithActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEnabled_Enabled                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteractWithStructure_CanInteract                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanInteractWithStructure_InteractionMessage             (None)

void ABP_Structure_Constructed_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_GetEnabled_Enabled, bool CallFunc_CanInteractWithStructure_CanInteract, class FText CallFunc_CanInteractWithStructure_InteractionMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "CanInteractWithActor");

	Params::ABP_Structure_Constructed_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetEnabled_Enabled = CallFunc_GetEnabled_Enabled;
	Parms.CallFunc_CanInteractWithStructure_CanInteract = CallFunc_CanInteractWithStructure_CanInteract;
	Parms.CallFunc_CanInteractWithStructure_InteractionMessage = CallFunc_CanInteractWithStructure_InteractionMessage;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.GetInteractText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteractWithStructure_CanInteract                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanInteractWithStructure_InteractionMessage             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanInteractWithStructure_CanInteract, class FText CallFunc_CanInteractWithStructure_InteractionMessage, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "GetInteractText");

	Params::ABP_Structure_Constructed_C_GetInteractText_Params Parms{};

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


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnDestroyedEvent
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMeshComponent*>      MeshComponents                                                   (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FVector                     StructureBounds                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetOwningPlayerController_ReturnValue                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveRespawnPoint_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureDestructionData   CallFunc_MakeStructureDestructionData_DestructionData            (None)

void ABP_Structure_Constructed_C::OnDestroyedEvent(const TArray<class UMeshComponent*>& MeshComponents, const struct FVector& StructureBounds, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveRespawnPoint_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FStructureDestructionData& CallFunc_MakeStructureDestructionData_DestructionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnDestroyedEvent");

	Params::ABP_Structure_Constructed_C_OnDestroyedEvent_Params Parms{};

	Parms.MeshComponents = MeshComponents;
	Parms.StructureBounds = StructureBounds;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RemoveRespawnPoint_ReturnValue = CallFunc_RemoveRespawnPoint_ReturnValue;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeStructureDestructionData_DestructionData = CallFunc_MakeStructureDestructionData_DestructionData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.ToggleVFX
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::ToggleVFX(bool Enabled, bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "ToggleVFX");

	Params::ABP_Structure_Constructed_C_ToggleVFX_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.CompleteCompletableStructure
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             AICharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Complete                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             LNWXAICharacter                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>CallFunc_GetTotalResourceRequirements_ReturnValue                (ReferenceParm, ContainsInstancedReference)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureResourceRequirementsCallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuantityRemaining_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_SetStructureSchematicState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::CompleteCompletableStructure(class ANWXAICharacter* AICharacter, bool* Complete, class ANWXAICharacter* LNWXAICharacter, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTag_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "CompleteCompletableStructure");

	Params::ABP_Structure_Constructed_C_CompleteCompletableStructure_Params Parms{};

	Parms.AICharacter = AICharacter;
	Parms.LNWXAICharacter = LNWXAICharacter;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTotalResourceRequirements_ReturnValue = CallFunc_GetTotalResourceRequirements_ReturnValue;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetQuantityRemaining_ReturnValue = CallFunc_GetQuantityRemaining_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_SetStructureSchematicState_ReturnValue = CallFunc_SetStructureSchematicState_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Complete != nullptr)
		*Complete = Parms.Complete;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.SetDropAllResourcesState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DropAllResources                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DropAllResourcesTag_DropAllTag                          (NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::SetDropAllResourcesState(bool DropAllResources, const struct FGameplayTag& CallFunc_DropAllResourcesTag_DropAllTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "SetDropAllResourcesState");

	Params::ABP_Structure_Constructed_C_SetDropAllResourcesState_Params Parms{};

	Parms.DropAllResources = DropAllResources;
	Parms.CallFunc_DropAllResourcesTag_DropAllTag = CallFunc_DropAllResourcesTag_DropAllTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnInitState
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          InitMaterial                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetPlacementFeedbackMaterial_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::OnInitState(bool* Success, class UMaterialInterface* InitMaterial, class UMaterialInstance* CallFunc_GetPlacementFeedbackMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnInitState");

	Params::ABP_Structure_Constructed_C_OnInitState_Params Parms{};

	Parms.InitMaterial = InitMaterial;
	Parms.CallFunc_GetPlacementFeedbackMaterial_ReturnValue = CallFunc_GetPlacementFeedbackMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnConfirmedState
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ToggleVFX_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::OnConfirmedState(bool* IsSuccess, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ToggleVFX_Success, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnConfirmedState");

	Params::ABP_Structure_Constructed_C_OnConfirmedState_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_ToggleVFX_Success = CallFunc_ToggleVFX_Success;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.ReturnMeshToHighlight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>StaticMesh_to_Highlight                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>SkeletalMesh_to_Highlight                                        (Parm, OutParm, ContainsInstancedReference)
// bool                               Hostile_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      StaticMeshClassRef                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>SkeletalMeshes                                                   (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>StaticMeshes                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>Highlight                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMeshComponent*>CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight           (ReferenceParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_ReturnMeshToHighlight_Hostile_                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            CallFunc_ReturnMeshToHighlight_Quality                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMeshComponent*>      CallFunc_GetStructureMeshes_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// class UMeshComponent*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, class UClass* StaticMeshClassRef, const TArray<class USkeletalMeshComponent*>& SkeletalMeshes, const TArray<class UStaticMeshComponent*>& StaticMeshes, const TArray<class UStaticMeshComponent*>& Highlight, int32 Temp_int_Array_Index_Variable, TArray<class UStaticMeshComponent*>& CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>& CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight, bool CallFunc_ReturnMeshToHighlight_Hostile_, enum class EItemQuality CallFunc_ReturnMeshToHighlight_Quality, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, class UMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "ReturnMeshToHighlight");

	Params::ABP_Structure_Constructed_C_ReturnMeshToHighlight_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.StaticMeshClassRef = StaticMeshClassRef;
	Parms.SkeletalMeshes = SkeletalMeshes;
	Parms.StaticMeshes = StaticMeshes;
	Parms.Highlight = Highlight;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight = CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight;
	Parms.CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight = CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight;
	Parms.CallFunc_ReturnMeshToHighlight_Hostile_ = CallFunc_ReturnMeshToHighlight_Hostile_;
	Parms.CallFunc_ReturnMeshToHighlight_Quality = CallFunc_ReturnMeshToHighlight_Quality;
	Parms.CallFunc_GetStructureMeshes_ReturnValue = CallFunc_GetStructureMeshes_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

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


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.InitializeState
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RefreshState_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeState_bSuccess                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::InitializeState(bool* bSuccess, bool CallFunc_RefreshState_Success, bool CallFunc_InitializeState_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "InitializeState");

	Params::ABP_Structure_Constructed_C_InitializeState_Params Parms{};

	Parms.CallFunc_RefreshState_Success = CallFunc_RefreshState_Success;
	Parms.CallFunc_InitializeState_bSuccess = CallFunc_InitializeState_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.UpdateMeshesCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LIsPlacement                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCompleted                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              Mesh                                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCollisionProfileName_ProfileName                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMeshComponent*>      CallFunc_GetStructureMeshes_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCollisionProfileName_ProfileName_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCollisionProfileName_ProfileName_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::UpdateMeshesCollision(bool LIsPlacement, bool IsCompleted, class UMeshComponent* Mesh, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_GetCollisionProfileName_ProfileName, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, bool Temp_bool_Variable, class UMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_GetCollisionProfileName_ProfileName_1, class FName CallFunc_GetCollisionProfileName_ProfileName_2, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "UpdateMeshesCollision");

	Params::ABP_Structure_Constructed_C_UpdateMeshesCollision_Params Parms{};

	Parms.LIsPlacement = LIsPlacement;
	Parms.IsCompleted = IsCompleted;
	Parms.Mesh = Mesh;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_GetSchematicState_ReturnValue_1 = CallFunc_GetSchematicState_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCollisionProfileName_ProfileName = CallFunc_GetCollisionProfileName_ProfileName;
	Parms.CallFunc_GetStructureMeshes_ReturnValue = CallFunc_GetStructureMeshes_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCollisionProfileName_ProfileName_1 = CallFunc_GetCollisionProfileName_ProfileName_1;
	Parms.CallFunc_GetCollisionProfileName_ProfileName_2 = CallFunc_GetCollisionProfileName_ProfileName_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.IsSchematic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsSchematic                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::IsSchematic(bool* bIsSchematic, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "IsSchematic");

	Params::ABP_Structure_Constructed_C_IsSchematic_Params Parms{};

	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsSchematic != nullptr)
		*bIsSchematic = Parms.bIsSchematic;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnPlacementState
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructurePlacerObject*      CallFunc_GetStructurePlacerObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback CallFunc_GetValidPlacementFeedbackData_ReturnValue               (ContainsInstancedReference)
// bool                               CallFunc_ToggleVFX_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::OnPlacementState(bool* Success, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, const struct FStructurePlacementFeedback& CallFunc_GetValidPlacementFeedbackData_ReturnValue, bool CallFunc_ToggleVFX_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnPlacementState");

	Params::ABP_Structure_Constructed_C_OnPlacementState_Params Parms{};

	Parms.CallFunc_GetStructurePlacerObject_ReturnValue = CallFunc_GetStructurePlacerObject_ReturnValue;
	Parms.CallFunc_GetValidPlacementFeedbackData_ReturnValue = CallFunc_GetValidPlacementFeedbackData_ReturnValue;
	Parms.CallFunc_ToggleVFX_Success = CallFunc_ToggleVFX_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnCompletedState
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   CallFunc_GetSnapComponent_SnapObject                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetAllConnectedStructures_ConnectedStructures           (ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureStateObject*       CallFunc_GetStateObject_ReturnValue                              (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckStateTransition_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::OnCompletedState(bool* Success, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, bool CallFunc_IsValid_ReturnValue, TArray<class UObject*>& CallFunc_GetAllConnectedStructures_ConnectedStructures, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureStateObject* CallFunc_GetStateObject_ReturnValue, bool CallFunc_CheckStateTransition_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnCompletedState");

	Params::ABP_Structure_Constructed_C_OnCompletedState_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSnapComponent_SnapObject = CallFunc_GetSnapComponent_SnapObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllConnectedStructures_ConnectedStructures = CallFunc_GetAllConnectedStructures_ConnectedStructures;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStateObject_ReturnValue = CallFunc_GetStateObject_ReturnValue;
	Parms.CallFunc_CheckStateTransition_ReturnValue = CallFunc_CheckStateTransition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue = CallFunc_RemoveActiveEffectsWithTags_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ZScale                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     BaseMeshLocation                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     BaseMeshScale                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MeshBounds                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshObject*                 StaticMeshObject                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              SourceComp                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              DuplicatedMeshComp                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      DuplicatedSkeletalMeshComp                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               SkeletalMesh                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      SkeletalMeshComp                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 StaticMesh                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        DuplicateStaticMeshComp                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        StaticMeshComp                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::UserConstructionScript(double ZScale, const struct FVector& BaseMeshLocation, const struct FVector& BaseMeshScale, const struct FVector& MeshBounds, class UMeshObject* StaticMeshObject, class UMeshComponent* SourceComp, class UMeshComponent* DuplicatedMeshComp, class USkeletalMeshComponent* DuplicatedSkeletalMeshComp, class USkeletalMesh* SkeletalMesh, class USkeletalMeshComponent* SkeletalMeshComp, class UStaticMesh* StaticMesh, class UStaticMeshComponent* DuplicateStaticMeshComp, class UStaticMeshComponent* StaticMeshComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "UserConstructionScript");

	Params::ABP_Structure_Constructed_C_UserConstructionScript_Params Parms{};

	Parms.ZScale = ZScale;
	Parms.BaseMeshLocation = BaseMeshLocation;
	Parms.BaseMeshScale = BaseMeshScale;
	Parms.MeshBounds = MeshBounds;
	Parms.StaticMeshObject = StaticMeshObject;
	Parms.SourceComp = SourceComp;
	Parms.DuplicatedMeshComp = DuplicatedMeshComp;
	Parms.DuplicatedSkeletalMeshComp = DuplicatedSkeletalMeshComp;
	Parms.SkeletalMesh = SkeletalMesh;
	Parms.SkeletalMeshComp = SkeletalMeshComp;
	Parms.StaticMesh = StaticMesh;
	Parms.DuplicateStaticMeshComp = DuplicateStaticMeshComp;
	Parms.StaticMeshComp = StaticMeshComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.BindTo_SupportingObjectsChangedDelegate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 SupportingObjectsChangedDelegate                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::BindTo_SupportingObjectsChangedDelegate(FDelegateProperty_& SupportingObjectsChangedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "BindTo_SupportingObjectsChangedDelegate");

	Params::ABP_Structure_Constructed_C_BindTo_SupportingObjectsChangedDelegate_Params Parms{};

	Parms.SupportingObjectsChangedDelegate = SupportingObjectsChangedDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.InvalidateSupportingObjectsCache
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_Constructed_C::InvalidateSupportingObjectsCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "InvalidateSupportingObjectsCache");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnOwnerInitialized
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_Constructed_C::OnOwnerInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnOwnerInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnOwnerSnapped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_Constructed_C::OnOwnerSnapped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnOwnerSnapped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnPlacementBlockedBeforeSupport
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_Constructed_C::OnPlacementBlockedBeforeSupport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnPlacementBlockedBeforeSupport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.RebuildSupportingObjectsCache
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_Constructed_C::RebuildSupportingObjectsCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "RebuildSupportingObjectsCache");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.TrackSupportedObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureSupportObjectData SupportedObject                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_Structure_Constructed_C::TrackSupportedObject(struct FStructureSupportObjectData& SupportedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "TrackSupportedObject");

	Params::ABP_Structure_Constructed_C_TrackSupportedObject_Params Parms{};

	Parms.SupportedObject = SupportedObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.UnbindFrom_SupportingObjectsChangedDelegate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 SupportingObjectsChangedDelegate                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::UnbindFrom_SupportingObjectsChangedDelegate(FDelegateProperty_& SupportingObjectsChangedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "UnbindFrom_SupportingObjectsChangedDelegate");

	Params::ABP_Structure_Constructed_C_UnbindFrom_SupportingObjectsChangedDelegate_Params Parms{};

	Parms.SupportingObjectsChangedDelegate = SupportingObjectsChangedDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.UntrackSupportedObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureSupportObjectData SupportedObject                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_Structure_Constructed_C::UntrackSupportedObject(struct FStructureSupportObjectData& SupportedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "UntrackSupportedObject");

	Params::ABP_Structure_Constructed_C_UntrackSupportedObject_Params Parms{};

	Parms.SupportedObject = SupportedObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnReceiveCarriedResources
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::OnReceiveCarriedResources(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnReceiveCarriedResources");

	Params::ABP_Structure_Constructed_C_OnReceiveCarriedResources_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnReachedMinSchematicTimeout
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_Constructed_C::OnReachedMinSchematicTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnReachedMinSchematicTimeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Structure_Constructed_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_Constructed_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.CallCrossServerSendGameplayEventToActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Payload                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Structure_Constructed_C::CallCrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "CallCrossServerSendGameplayEventToActor");

	Params::ABP_Structure_Constructed_C_CallCrossServerSendGameplayEventToActor_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.CrossServer_ForwardGameplayEvent
// (Net, NetReliable, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Structure_Constructed_C::CrossServer_ForwardGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "CrossServer_ForwardGameplayEvent");

	Params::ABP_Structure_Constructed_C_CrossServer_ForwardGameplayEvent_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.OnPersistentDataRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_Constructed_C::OnPersistentDataRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "OnPersistentDataRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.SetAllMaterialsToConstructed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_Constructed_C::SetAllMaterialsToConstructed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "SetAllMaterialsToConstructed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Constructed.BP_Structure_Constructed_C.ExecuteUbergraph_BP_Structure_Constructed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_Event_SupportingObjectsChangedDelegate_1                  (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureSupportObjectData K2Node_Event_SupportedObject_1                                   (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_Event_SupportingObjectsChangedDelegate                    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureSupportObjectData K2Node_Event_SupportedObject                                     (ConstParm, NoDestructor)
// class AController*                 K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecuteDestroyStructure_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureDamageObject_C* CallFunc_GetDamageObject_DamageObject                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_EventTag                                            (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_Payload                                             (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_EventTag                                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureReferenceValid_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureReferenceValid_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureInitialized_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMeshComponent*>      CallFunc_GetStructureMeshes_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureMeshStateDefinitionCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Constructed_C::ExecuteUbergraph_BP_Structure_Constructed(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_Event_SupportingObjectsChangedDelegate_1, const struct FStructureSupportObjectData& K2Node_Event_SupportedObject_1, FDelegateProperty_ K2Node_Event_SupportingObjectsChangedDelegate, const struct FStructureSupportObjectData& K2Node_Event_SupportedObject, class AController* K2Node_Event_Controller, bool CallFunc_ExecuteDestroyStructure_Success, class UBP_StructureDamageObject_C* CallFunc_GetDamageObject_DamageObject, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, const struct FGameplayTag& K2Node_CustomEvent_EventTag, const struct FGameplayEventData& K2Node_CustomEvent_Payload, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_GetIsStructureReferenceValid_ReturnValue, bool CallFunc_GetIsStructureReferenceValid_ReturnValue_1, bool CallFunc_GetIsStructureInitialized_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FStructureMeshStateDefinition& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Constructed_C", "ExecuteUbergraph_BP_Structure_Constructed");

	Params::ABP_Structure_Constructed_C_ExecuteUbergraph_BP_Structure_Constructed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_SupportingObjectsChangedDelegate_1 = K2Node_Event_SupportingObjectsChangedDelegate_1;
	Parms.K2Node_Event_SupportedObject_1 = K2Node_Event_SupportedObject_1;
	Parms.K2Node_Event_SupportingObjectsChangedDelegate = K2Node_Event_SupportingObjectsChangedDelegate;
	Parms.K2Node_Event_SupportedObject = K2Node_Event_SupportedObject;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_ExecuteDestroyStructure_Success = CallFunc_ExecuteDestroyStructure_Success;
	Parms.CallFunc_GetDamageObject_DamageObject = CallFunc_GetDamageObject_DamageObject;
	Parms.K2Node_Event_EventTag = K2Node_Event_EventTag;
	Parms.K2Node_Event_Payload = K2Node_Event_Payload;
	Parms.K2Node_CustomEvent_EventTag = K2Node_CustomEvent_EventTag;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;
	Parms.CallFunc_GetIsStructureReferenceValid_ReturnValue = CallFunc_GetIsStructureReferenceValid_ReturnValue;
	Parms.CallFunc_GetIsStructureReferenceValid_ReturnValue_1 = CallFunc_GetIsStructureReferenceValid_ReturnValue_1;
	Parms.CallFunc_GetIsStructureInitialized_ReturnValue = CallFunc_GetIsStructureInitialized_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetStructureMeshes_ReturnValue = CallFunc_GetStructureMeshes_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


