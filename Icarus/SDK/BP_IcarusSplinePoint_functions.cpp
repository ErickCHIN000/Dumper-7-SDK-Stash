#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusSplinePoint.BP_IcarusSplinePoint_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UBP_IcarusSplinePoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusSplinePoint_C");

	return Clss;
}


// BP_IcarusSplinePoint_C BP_IcarusSplinePoint.Default__BP_IcarusSplinePoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusSplinePoint_C* UBP_IcarusSplinePoint_C::GetDefaultObj()
{
	static class UBP_IcarusSplinePoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusSplinePoint_C*>(UBP_IcarusSplinePoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.OnRep_Ghost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplinePoint_C::OnRep_Ghost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplinePoint_C", "OnRep_Ghost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.OnRep_GhostMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplinePoint_C::OnRep_GhostMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplinePoint_C", "OnRep_GhostMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.OnRep_RepTrans
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplinePoint_C::OnRep_RepTrans()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplinePoint_C", "OnRep_RepTrans");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.OnRep_RepMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplinePoint_C::OnRep_RepMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplinePoint_C", "OnRep_RepMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.OnRep_RepMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplinePoint_C::OnRep_RepMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplinePoint_C", "OnRep_RepMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_IcarusSplinePoint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplinePoint_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.Async ReInit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSplinePoint_C::Async_ReInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplinePoint_C", "Async ReInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.ExecuteUbergraph_BP_IcarusSplinePoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_IcarusSplinePoint_C::ExecuteUbergraph_BP_IcarusSplinePoint(int32 EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSplinePoint_C", "ExecuteUbergraph_BP_IcarusSplinePoint");

	Params::UBP_IcarusSplinePoint_C_ExecuteUbergraph_BP_IcarusSplinePoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


