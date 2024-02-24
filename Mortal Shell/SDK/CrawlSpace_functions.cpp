#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CrawlSpace.CrawlSpace_C
// (Actor)

class UClass* ACrawlSpace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrawlSpace_C");

	return Clss;
}


// CrawlSpace_C CrawlSpace.Default__CrawlSpace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACrawlSpace_C* ACrawlSpace_C::GetDefaultObj()
{
	static class ACrawlSpace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrawlSpace_C*>(ACrawlSpace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CrawlSpace.CrawlSpace_C.SetCapTexts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUsable_Crawlspace_C*        K2Node_DynamicCast_AsUsable_Crawlspace                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUsable_Crawlspace_C*        K2Node_DynamicCast_AsUsable_Crawlspace_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACrawlSpace_C::SetCapTexts(class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace, bool K2Node_DynamicCast_bSuccess, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrawlSpace_C", "SetCapTexts");

	Params::ACrawlSpace_C_SetCapTexts_Params Parms{};

	Parms.K2Node_DynamicCast_AsUsable_Crawlspace = K2Node_DynamicCast_AsUsable_Crawlspace;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUsable_Crawlspace_1 = K2Node_DynamicCast_AsUsable_Crawlspace_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrawlSpace.CrawlSpace_C.SetExitCameraReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUsable_Crawlspace_C*        K2Node_DynamicCast_AsUsable_Crawlspace                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUsable_Crawlspace_C*        K2Node_DynamicCast_AsUsable_Crawlspace_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACrawlSpace_C::SetExitCameraReferences(class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace, bool K2Node_DynamicCast_bSuccess, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrawlSpace_C", "SetExitCameraReferences");

	Params::ACrawlSpace_C_SetExitCameraReferences_Params Parms{};

	Parms.K2Node_DynamicCast_AsUsable_Crawlspace = K2Node_DynamicCast_AsUsable_Crawlspace;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUsable_Crawlspace_1 = K2Node_DynamicCast_AsUsable_Crawlspace_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrawlSpace.CrawlSpace_C.PlaceEndUsableActorAtRightLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_GetRotationAtSplinePoint_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Crawlspace_C*        K2Node_DynamicCast_AsUsable_Crawlspace                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_GetRotationAtSplinePoint_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Crawlspace_C*        K2Node_DynamicCast_AsUsable_Crawlspace_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1         (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACrawlSpace_C::PlaceEndUsableActorAtRightLocation(const struct FRotator& CallFunc_GetRotationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, const struct FRotator& CallFunc_GetRotationAtSplinePoint_ReturnValue_1, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue_1, const struct FVector& CallFunc_GetUpVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace_1, bool K2Node_DynamicCast_bSuccess_1, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrawlSpace_C", "PlaceEndUsableActorAtRightLocation");

	Params::ACrawlSpace_C_PlaceEndUsableActorAtRightLocation_Params Parms{};

	Parms.CallFunc_GetRotationAtSplinePoint_ReturnValue = CallFunc_GetRotationAtSplinePoint_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsUsable_Crawlspace = K2Node_DynamicCast_AsUsable_Crawlspace;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue = CallFunc_GetLocationAtSplinePoint_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult = CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;
	Parms.CallFunc_GetRotationAtSplinePoint_ReturnValue_1 = CallFunc_GetRotationAtSplinePoint_ReturnValue_1;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue_1 = CallFunc_GetLocationAtSplinePoint_ReturnValue_1;
	Parms.CallFunc_GetUpVector_ReturnValue_1 = CallFunc_GetUpVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUsable_Crawlspace_1 = K2Node_DynamicCast_AsUsable_Crawlspace_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1 = CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrawlSpace.CrawlSpace_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class USplineMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Crawlspace_C*        K2Node_DynamicCast_AsUsable_Crawlspace                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAndTangentAtSplinePoint_Location             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAndTangentAtSplinePoint_Tangent              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Crawlspace_C*        K2Node_DynamicCast_AsUsable_Crawlspace_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLocationAndTangentAtSplinePoint_Location_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACrawlSpace_C::UserConstructionScript(const struct FTransform& Temp_struct_Variable, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrawlSpace_C", "UserConstructionScript");

	Params::ACrawlSpace_C_UserConstructionScript_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUsable_Crawlspace = K2Node_DynamicCast_AsUsable_Crawlspace;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetLocationAndTangentAtSplinePoint_Location = CallFunc_GetLocationAndTangentAtSplinePoint_Location;
	Parms.CallFunc_GetLocationAndTangentAtSplinePoint_Tangent = CallFunc_GetLocationAndTangentAtSplinePoint_Tangent;
	Parms.K2Node_DynamicCast_AsUsable_Crawlspace_1 = K2Node_DynamicCast_AsUsable_Crawlspace_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLocationAndTangentAtSplinePoint_Location_1 = CallFunc_GetLocationAndTangentAtSplinePoint_Location_1;
	Parms.CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1 = CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrawlSpace.CrawlSpace_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACrawlSpace_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrawlSpace_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CrawlSpace.CrawlSpace_C.ExecuteUbergraph_CrawlSpace
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACrawlSpace_C::ExecuteUbergraph_CrawlSpace(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrawlSpace_C", "ExecuteUbergraph_CrawlSpace");

	Params::ACrawlSpace_C_ExecuteUbergraph_CrawlSpace_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


