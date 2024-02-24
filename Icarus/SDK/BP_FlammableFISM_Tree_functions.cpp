#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C
// (None)

class UClass* UBP_FlammableFISM_Tree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlammableFISM_Tree_C");

	return Clss;
}


// BP_FlammableFISM_Tree_C BP_FlammableFISM_Tree.Default__BP_FlammableFISM_Tree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FlammableFISM_Tree_C* UBP_FlammableFISM_Tree_C::GetDefaultObj()
{
	static class UBP_FlammableFISM_Tree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FlammableFISM_Tree_C*>(UBP_FlammableFISM_Tree_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.UpdateInstanceVisualData_Combusted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFlammableFISMVisualData    TargetVisualData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_FlammableFISM_Tree_C::UpdateInstanceVisualData_Combusted(class UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData& TargetVisualData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "UpdateInstanceVisualData_Combusted");

	Params::UBP_FlammableFISM_Tree_C_UpdateInstanceVisualData_Combusted_Params Parms{};

	Parms.Instance = Instance;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.TargetVisualData = TargetVisualData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.UpdateInstanceVisualData_Combustion
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFlammableFISMVisualData    TargetVisualData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_FlammableFISM_Tree_C::UpdateInstanceVisualData_Combustion(class UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData& TargetVisualData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "UpdateInstanceVisualData_Combustion");

	Params::UBP_FlammableFISM_Tree_C_UpdateInstanceVisualData_Combustion_Params Parms{};

	Parms.Instance = Instance;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.TargetVisualData = TargetVisualData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.UpdateInstanceVisualData_Pyrolysis
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFlammableFISMVisualData    TargetVisualData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// float                              CallFunc_GetCombustionTemperature_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_Tree_C::UpdateInstanceVisualData_Pyrolysis(class UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData& TargetVisualData, float CallFunc_GetCombustionTemperature_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "UpdateInstanceVisualData_Pyrolysis");

	Params::UBP_FlammableFISM_Tree_C_UpdateInstanceVisualData_Pyrolysis_Params Parms{};

	Parms.Instance = Instance;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.TargetVisualData = TargetVisualData;
	Parms.CallFunc_GetCombustionTemperature_ReturnValue = CallFunc_GetCombustionTemperature_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.UpdateQueuedInstanceEffects
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InstanceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFlammableFISMVisualData    VisualData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<int32, class UFlammableInstanceFLOD*>CallFunc_GetFlammableInstances_ReturnValue                       (ConstParm)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableInstanceFLOD*      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_GetOrCreateEffectsStaticMesh_StaticMeshComponent        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_FlammableFISM_Tree_C::UpdateQueuedInstanceEffects(int32 InstanceIndex, struct FFlammableFISMVisualData& VisualData, TMap<int32, class UFlammableInstanceFLOD*> CallFunc_GetFlammableInstances_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class UFlammableInstanceFLOD* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UStaticMeshComponent* CallFunc_GetOrCreateEffectsStaticMesh_StaticMeshComponent, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "UpdateQueuedInstanceEffects");

	Params::UBP_FlammableFISM_Tree_C_UpdateQueuedInstanceEffects_Params Parms{};

	Parms.InstanceIndex = InstanceIndex;
	Parms.VisualData = VisualData;
	Parms.CallFunc_GetFlammableInstances_ReturnValue = CallFunc_GetFlammableInstances_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOrCreateEffectsStaticMesh_StaticMeshComponent = CallFunc_GetOrCreateEffectsStaticMesh_StaticMeshComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.CleanupEffectsStaticMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FlammableFISM_Tree_C::CleanupEffectsStaticMesh(class UFlammableInstanceFLOD* Instance, bool CallFunc_Map_Remove_ReturnValue, class UStaticMeshComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "CleanupEffectsStaticMesh");

	Params::UBP_FlammableFISM_Tree_C_CleanupEffectsStaticMesh_Params Parms{};

	Parms.Instance = Instance;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.GetOrCreateEffectsStaticMesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        StaticMeshComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBoxSphereBounds            CallFunc_GetFlammableLocalBounds_ReturnValue                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetFlammableWorldTransform_ReturnValue                  (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeRelativeTransform_ReturnValue                       (IsPlainOldData, NoDestructor)
// class UFLODRecord*                 CallFunc_GetRegisteredRecord_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODDescriptionsEnum       CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// TSoftObjectPtr<class UStaticMesh>  CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FlammableFISM_Tree_C::GetOrCreateEffectsStaticMesh(class UFlammableInstanceFLOD* Instance, class UStaticMeshComponent** StaticMeshComponent, class UStaticMeshComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetFlammableLocalBounds_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetFlammableWorldTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_MakeRelativeTransform_ReturnValue, class UFLODRecord* CallFunc_GetRegisteredRecord_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue, const struct FFLODDescriptionsEnum& CallFunc_IntToStruct_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "GetOrCreateEffectsStaticMesh");

	Params::UBP_FlammableFISM_Tree_C_GetOrCreateEffectsStaticMesh_Params Parms{};

	Parms.Instance = Instance;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetFlammableLocalBounds_ReturnValue = CallFunc_GetFlammableLocalBounds_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetFlammableWorldTransform_ReturnValue = CallFunc_GetFlammableWorldTransform_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_MakeRelativeTransform_ReturnValue = CallFunc_MakeRelativeTransform_ReturnValue;
	Parms.CallFunc_GetRegisteredRecord_ReturnValue = CallFunc_GetRegisteredRecord_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StaticMeshComponent != nullptr)
		*StaticMeshComponent = Parms.StaticMeshComponent;

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.OnReplacedInstanceCombusted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFLODInstanceID             NewInstance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADisasterController*         CallFunc_GetDisasterController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DisasterController_C*    K2Node_DynamicCast_AsBP_Disaster_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FlammableFISM_Tree_C::OnReplacedInstanceCombusted(const struct FFLODInstanceID& NewInstance, class UFlammableInstanceFLOD* Instance, class ADisasterController* CallFunc_GetDisasterController_ReturnValue, class ABP_DisasterController_C* K2Node_DynamicCast_AsBP_Disaster_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "OnReplacedInstanceCombusted");

	Params::UBP_FlammableFISM_Tree_C_OnReplacedInstanceCombusted_Params Parms{};

	Parms.NewInstance = NewInstance;
	Parms.Instance = Instance;
	Parms.CallFunc_GetDisasterController_ReturnValue = CallFunc_GetDisasterController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Disaster_Controller = K2Node_DynamicCast_AsBP_Disaster_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.CombustingExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FlammableFISM_Tree_C::CombustingExit(class UFlammableInstanceFLOD* Instance, bool CallFunc_Map_Remove_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "CombustingExit");

	Params::UBP_FlammableFISM_Tree_C_CombustingExit_Params Parms{};

	Parms.Instance = Instance;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.GetInstanceLocalBounds
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              InstanceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetInstanceLocalBounds_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            K2Node_MakeStruct_BoxSphereBounds                                (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FBoxSphereBounds UBP_FlammableFISM_Tree_C::GetInstanceLocalBounds(int32 InstanceIndex, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetInstanceLocalBounds_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "GetInstanceLocalBounds");

	Params::UBP_FlammableFISM_Tree_C_GetInstanceLocalBounds_Params Parms{};

	Parms.InstanceIndex = InstanceIndex;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_GetInstanceLocalBounds_ReturnValue = CallFunc_GetInstanceLocalBounds_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_MakeStruct_BoxSphereBounds = K2Node_MakeStruct_BoxSphereBounds;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.CombustingEnter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetOrCreateEffectsStaticMesh_StaticMeshComponent        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetFlammableWorldTransform_ReturnValue                  (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeRelativeTransform_ReturnValue                       (IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_Tree_C::CombustingEnter(class UFlammableInstanceFLOD* Instance, class UStaticMeshComponent* CallFunc_GetOrCreateEffectsStaticMesh_StaticMeshComponent, const struct FTransform& CallFunc_GetFlammableWorldTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_MakeRelativeTransform_ReturnValue, class UNiagaraComponent* CallFunc_AddComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "CombustingEnter");

	Params::UBP_FlammableFISM_Tree_C_CombustingEnter_Params Parms{};

	Parms.Instance = Instance;
	Parms.CallFunc_GetOrCreateEffectsStaticMesh_StaticMeshComponent = CallFunc_GetOrCreateEffectsStaticMesh_StaticMeshComponent;
	Parms.CallFunc_GetFlammableWorldTransform_ReturnValue = CallFunc_GetFlammableWorldTransform_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_MakeRelativeTransform_ReturnValue = CallFunc_MakeRelativeTransform_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.OnLoaded_3E3354A942260BE9BFE6BDAAECC7E52C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_Tree_C::OnLoaded_3E3354A942260BE9BFE6BDAAECC7E52C(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "OnLoaded_3E3354A942260BE9BFE6BDAAECC7E52C");

	Params::UBP_FlammableFISM_Tree_C_OnLoaded_3E3354A942260BE9BFE6BDAAECC7E52C_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_FlammableFISM_Tree_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.OnFlammableInstanceDetached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_Tree_C::OnFlammableInstanceDetached(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "OnFlammableInstanceDetached");

	Params::UBP_FlammableFISM_Tree_C_OnFlammableInstanceDetached_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.OnFlammableInstanceAttached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_Tree_C::OnFlammableInstanceAttached(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "OnFlammableInstanceAttached");

	Params::UBP_FlammableFISM_Tree_C_OnFlammableInstanceAttached_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.OnFlammableInstanceState_Detached_Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_Tree_C::OnFlammableInstanceState_Detached_Exit(class UFlammableInstance* Instance, class UFlammableState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "OnFlammableInstanceState_Detached_Exit");

	Params::UBP_FlammableFISM_Tree_C_OnFlammableInstanceState_Detached_Exit_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.ExecuteUbergraph_BP_FlammableFISM_Tree
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_CustomEvent_Instance                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             K2Node_CustomEvent_State                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstanceFLOD*      K2Node_DynamicCast_AsFlammable_Instance_FLOD                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UStaticMesh>>CallFunc_Map_Values_Values                                       (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TSoftObjectPtr<class UStaticMesh>  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_Event_Instance_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             CallFunc_GetFlammableState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_Event_Instance                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             CallFunc_GetFlammableState_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_Tree_C::ExecuteUbergraph_BP_FlammableFISM_Tree(int32 EntryPoint, class UFlammableInstance* K2Node_CustomEvent_Instance, class UFlammableState* K2Node_CustomEvent_State, class UObject* K2Node_CustomEvent_Loaded, class UFlammableInstanceFLOD* K2Node_DynamicCast_AsFlammable_Instance_FLOD, bool K2Node_DynamicCast_bSuccess, class UObject* Temp_object_Variable, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable, TArray<TSoftObjectPtr<class UStaticMesh>>& CallFunc_Map_Values_Values, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class UStaticMesh> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFlammableInstance* K2Node_Event_Instance_1, int32 CallFunc_Array_Add_ReturnValue, class UFlammableState* CallFunc_GetFlammableState_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFlammableInstance* K2Node_Event_Instance, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Tree_C", "ExecuteUbergraph_BP_FlammableFISM_Tree");

	Params::UBP_FlammableFISM_Tree_C_ExecuteUbergraph_BP_FlammableFISM_Tree_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Instance = K2Node_CustomEvent_Instance;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_DynamicCast_AsFlammable_Instance_FLOD = K2Node_DynamicCast_AsFlammable_Instance_FLOD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_Instance_1 = K2Node_Event_Instance_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetFlammableState_ReturnValue = CallFunc_GetFlammableState_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Instance = K2Node_Event_Instance;
	Parms.CallFunc_GetFlammableState_ReturnValue_1 = CallFunc_GetFlammableState_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


