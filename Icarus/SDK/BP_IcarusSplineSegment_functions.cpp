#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusSplineSegment.BP_IcarusSplineSegment_C
// (SceneComponent)

class UClass* UBP_IcarusSplineSegment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusSplineSegment_C");

	return Clss;
}


// BP_IcarusSplineSegment_C BP_IcarusSplineSegment.Default__BP_IcarusSplineSegment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusSplineSegment_C* UBP_IcarusSplineSegment_C::GetDefaultObj()
{
	static class UBP_IcarusSplineSegment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusSplineSegment_C*>(UBP_IcarusSplineSegment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.IsPointCloserToStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     WorldLocationPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CloserToStart                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusSplineSegment_C::IsPointCloserToStart(const struct FVector& WorldLocationPoint, bool* CloserToStart, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "IsPointCloserToStart");

	Params::UBP_IcarusSplineSegment_C_IsPointCloserToStart_Params Parms{};

	Parms.WorldLocationPoint = WorldLocationPoint;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue_1 = CallFunc_Vector_Distance_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CloserToStart != nullptr)
		*CloserToStart = Parms.CloserToStart;

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepresentitiveComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplineSegment_C::OnRep_RepresentitiveComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "OnRep_RepresentitiveComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepFinalMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplineSegment_C::OnRep_RepFinalMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "OnRep_RepFinalMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepGhostMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplineSegment_C::OnRep_RepGhostMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "OnRep_RepGhostMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplineSegment_C::OnRep_RepOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "OnRep_RepOffset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.ServerSetStartAndEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Start_Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Start_Tan                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     End_Pos                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     End_Tan                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusSplineMeshStruct     K2Node_MakeStruct_IcarusSplineMeshStruct                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IcarusSplineSegment_C::ServerSetStartAndEnd(const struct FVector& Start_Pos, const struct FVector& Start_Tan, const struct FVector& End_Pos, const struct FVector& End_Tan, const struct FIcarusSplineMeshStruct& K2Node_MakeStruct_IcarusSplineMeshStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "ServerSetStartAndEnd");

	Params::UBP_IcarusSplineSegment_C_ServerSetStartAndEnd_Params Parms{};

	Parms.Start_Pos = Start_Pos;
	Parms.Start_Tan = Start_Tan;
	Parms.End_Pos = End_Pos;
	Parms.End_Tan = End_Tan;
	Parms.K2Node_MakeStruct_IcarusSplineMeshStruct = K2Node_MakeStruct_IcarusSplineMeshStruct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_Ghost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplineSegment_C::OnRep_Ghost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "OnRep_Ghost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplineSegment_C::OnRep_RepMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "OnRep_RepMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepSplineData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplineSegment_C::OnRep_RepSplineData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "OnRep_RepSplineData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplineSegment_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.Async ReInit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplineSegment_C::Async_ReInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "Async ReInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_IcarusSplineSegment_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.ExecuteUbergraph_BP_IcarusSplineSegment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCableComponent*             K2Node_DynamicCast_AsCable_Component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplineMeshComponent*        K2Node_DynamicCast_AsSpline_Mesh_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplineMeshComponent*        K2Node_DynamicCast_AsSpline_Mesh_Component_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusSplineActor_C*     K2Node_DynamicCast_AsBP_Icarus_Spline_Actor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusSplineActor_C*     K2Node_DynamicCast_AsBP_Icarus_Spline_Actor_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         CallFunc_AddActorComponent_OutComponent                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_DynamicCast_AsScene_Component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IcarusSplineSegment_C::ExecuteUbergraph_BP_IcarusSplineSegment(int32 EntryPoint, class UCableComponent* K2Node_DynamicCast_AsCable_Component, bool K2Node_DynamicCast_bSuccess, class USplineMeshComponent* K2Node_DynamicCast_AsSpline_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, class USplineMeshComponent* K2Node_DynamicCast_AsSpline_Mesh_Component_1, bool K2Node_DynamicCast_bSuccess_2, float Temp_float_Variable, bool CallFunc_SetStaticMesh_ReturnValue, float Temp_float_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusSplineActor_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Actor, bool K2Node_DynamicCast_bSuccess_3, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_IcarusSplineActor_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Actor_1, bool K2Node_DynamicCast_bSuccess_5, class UPrimitiveComponent* CallFunc_AddActorComponent_OutComponent, class USceneComponent* K2Node_DynamicCast_AsScene_Component, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_K2_AttachToComponent_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplineSegment_C", "ExecuteUbergraph_BP_IcarusSplineSegment");

	Params::UBP_IcarusSplineSegment_C_ExecuteUbergraph_BP_IcarusSplineSegment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsCable_Component = K2Node_DynamicCast_AsCable_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSpline_Mesh_Component = K2Node_DynamicCast_AsSpline_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsSpline_Mesh_Component_1 = K2Node_DynamicCast_AsSpline_Mesh_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Spline_Actor = K2Node_DynamicCast_AsBP_Icarus_Spline_Actor;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Spline_Actor_1 = K2Node_DynamicCast_AsBP_Icarus_Spline_Actor_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_AddActorComponent_OutComponent = CallFunc_AddActorComponent_OutComponent;
	Parms.K2Node_DynamicCast_AsScene_Component = K2Node_DynamicCast_AsScene_Component;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


