#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HabFunctionLibrary.HabFunctionLibrary_C
// (None)

class UClass* UHabFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HabFunctionLibrary_C");

	return Clss;
}


// HabFunctionLibrary_C HabFunctionLibrary.Default__HabFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHabFunctionLibrary_C* UHabFunctionLibrary_C::GetDefaultObj()
{
	static class UHabFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHabFunctionLibrary_C*>(UHabFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HabFunctionLibrary.HabFunctionLibrary_C.HandStateToString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHabHandStateStruct         HandState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)

class FString UHabFunctionLibrary_C::HandStateToString(const struct FHabHandStateStruct& HandState, class UObject* __WorldContext, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_JoinStringArray_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "HandStateToString");

	Params::UHabFunctionLibrary_C_HandStateToString_Params Parms{};

	Parms.HandState = HandState;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue_1 = CallFunc_Conv_VectorToString_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.ConditionallyFilterUpDirection
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     Vector                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     UpAxis                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IgnoreUp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_ProjectVectorOnToVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UHabFunctionLibrary_C::ConditionallyFilterUpDirection(const struct FVector& Vector, const struct FVector& UpAxis, bool IgnoreUp, class UObject* __WorldContext, const struct FVector& CallFunc_ProjectVectorOnToVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "ConditionallyFilterUpDirection");

	Params::UHabFunctionLibrary_C_ConditionallyFilterUpDirection_Params Parms{};

	Parms.Vector = Vector;
	Parms.UpAxis = UpAxis;
	Parms.IgnoreUp = IgnoreUp;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_ProjectVectorOnToVector_ReturnValue = CallFunc_ProjectVectorOnToVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.HasEnoughMassToBeRelevant
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMass_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSimulatingPhysics_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UHabFunctionLibrary_C::HasEnoughMassToBeRelevant(class UPrimitiveComponent* Component, class UObject* __WorldContext, float CallFunc_GetMass_ReturnValue, bool CallFunc_IsSimulatingPhysics_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "HasEnoughMassToBeRelevant");

	Params::UHabFunctionLibrary_C_HasEnoughMassToBeRelevant_Params Parms{};

	Parms.Component = Component;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetMass_ReturnValue = CallFunc_GetMass_ReturnValue;
	Parms.CallFunc_IsSimulatingPhysics_ReturnValue = CallFunc_IsSimulatingPhysics_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.HitToHandState
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESpaceHandGripMode      HandMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reaching                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHabHandStateStruct         HandState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_InverseTransformDirection_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHabHandStateStruct         K2Node_MakeStruct_HabHandStateStruct                             (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UHabFunctionLibrary_C::HitToHandState(enum class ESpaceHandGripMode HandMode, bool Reaching, const struct FHitResult& Hit, float Distance, class UObject* __WorldContext, struct FHabHandStateStruct* HandState, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_InverseTransformDirection_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FHabHandStateStruct& K2Node_MakeStruct_HabHandStateStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "HitToHandState");

	Params::UHabFunctionLibrary_C_HitToHandState_Params Parms{};

	Parms.HandMode = HandMode;
	Parms.Reaching = Reaching;
	Parms.Hit = Hit;
	Parms.Distance = Distance;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_InverseTransformDirection_ReturnValue = CallFunc_InverseTransformDirection_ReturnValue;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.K2Node_MakeStruct_HabHandStateStruct = K2Node_MakeStruct_HabHandStateStruct;

	UObject::ProcessEvent(Func, &Parms);

	if (HandState != nullptr)
		*HandState = std::move(Parms.HandState);

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.GetHandStateWorldNormal
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHabHandStateStruct         State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_TransformDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UHabFunctionLibrary_C::GetHandStateWorldNormal(const struct FHabHandStateStruct& State, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_TransformDirection_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "GetHandStateWorldNormal");

	Params::UHabFunctionLibrary_C_GetHandStateWorldNormal_Params Parms{};

	Parms.State = State;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_TransformDirection_ReturnValue = CallFunc_TransformDirection_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.GetHandStateWorldLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHabHandStateStruct         State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UHabFunctionLibrary_C::GetHandStateWorldLocation(const struct FHabHandStateStruct& State, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "GetHandStateWorldLocation");

	Params::UHabFunctionLibrary_C_GetHandStateWorldLocation_Params Parms{};

	Parms.State = State;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.GetHabCharacterShoulderName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ForLeftHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UHabFunctionLibrary_C::GetHabCharacterShoulderName(bool ForLeftHand, class UObject* __WorldContext, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "GetHabCharacterShoulderName");

	Params::UHabFunctionLibrary_C_GetHabCharacterShoulderName_Params Parms{};

	Parms.ForLeftHand = ForLeftHand;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.GetHabCharacterWristName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ForLeftHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UHabFunctionLibrary_C::GetHabCharacterWristName(bool ForLeftHand, class UObject* __WorldContext, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "GetHabCharacterWristName");

	Params::UHabFunctionLibrary_C_GetHabCharacterWristName_Params Parms{};

	Parms.ForLeftHand = ForLeftHand;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.IsTouchOrStableGrip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHabHandStateStruct         HandState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UHabFunctionLibrary_C::IsTouchOrStableGrip(const struct FHabHandStateStruct& HandState, class UObject* __WorldContext, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "IsTouchOrStableGrip");

	Params::UHabFunctionLibrary_C_IsTouchOrStableGrip_Params Parms{};

	Parms.HandState = HandState;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.GetAutoOrientUpAxis
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHabHandStateStruct         HandState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               ForLeftHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     UpAxis                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetHandStateWorldLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetHandStateWorldNormal_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTouchOrStableGrip_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStableGrip_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIGripTargetInterface_C>K2Node_DynamicCast_AsIGrip_Target_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindBestCharacterUpAxisDirection_Success                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_FindBestCharacterUpAxisDirection_UpAxisDirection        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHabFunctionLibrary_C::GetAutoOrientUpAxis(class AIcarusPlayerCharacter* Character, const struct FHabHandStateStruct& HandState, bool ForLeftHand, struct FVector& UpAxis, class UObject* __WorldContext, bool* Success, const struct FVector& CallFunc_GetHandStateWorldLocation_ReturnValue, const struct FVector& CallFunc_GetHandStateWorldNormal_ReturnValue, bool CallFunc_IsTouchOrStableGrip_ReturnValue, bool CallFunc_IsStableGrip_ReturnValue, TScriptInterface<class IIGripTargetInterface_C> K2Node_DynamicCast_AsIGrip_Target_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_FindBestCharacterUpAxisDirection_Success, const struct FVector& CallFunc_FindBestCharacterUpAxisDirection_UpAxisDirection, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "GetAutoOrientUpAxis");

	Params::UHabFunctionLibrary_C_GetAutoOrientUpAxis_Params Parms{};

	Parms.Character = Character;
	Parms.HandState = HandState;
	Parms.ForLeftHand = ForLeftHand;
	Parms.UpAxis = UpAxis;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetHandStateWorldLocation_ReturnValue = CallFunc_GetHandStateWorldLocation_ReturnValue;
	Parms.CallFunc_GetHandStateWorldNormal_ReturnValue = CallFunc_GetHandStateWorldNormal_ReturnValue;
	Parms.CallFunc_IsTouchOrStableGrip_ReturnValue = CallFunc_IsTouchOrStableGrip_ReturnValue;
	Parms.CallFunc_IsStableGrip_ReturnValue = CallFunc_IsStableGrip_ReturnValue;
	Parms.K2Node_DynamicCast_AsIGrip_Target_Interface = K2Node_DynamicCast_AsIGrip_Target_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_FindBestCharacterUpAxisDirection_Success = CallFunc_FindBestCharacterUpAxisDirection_Success;
	Parms.CallFunc_FindBestCharacterUpAxisDirection_UpAxisDirection = CallFunc_FindBestCharacterUpAxisDirection_UpAxisDirection;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.GetAutoOrientLocationAndDirection
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHabHandStateStruct         HandState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               ForLeftHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     DesiredHeadLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DesiredFacingDirection                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FoundLocationSuccessfully                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetHandStateWorldLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStableGrip_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIGripTargetInterface_C>K2Node_DynamicCast_AsIGrip_Target_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindBestCharacterDirection_Success                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_FindBestCharacterDirection_BestDirection                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindBestCharacterLocation_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_FindBestCharacterLocation_BestLocation                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHabFunctionLibrary_C::GetAutoOrientLocationAndDirection(class AIcarusPlayerCharacter* Character, const struct FHabHandStateStruct& HandState, bool ForLeftHand, struct FVector& DesiredHeadLocation, struct FVector& DesiredFacingDirection, class UObject* __WorldContext, bool* FoundLocationSuccessfully, const struct FVector& CallFunc_GetHandStateWorldLocation_ReturnValue, bool CallFunc_IsStableGrip_ReturnValue, TScriptInterface<class IIGripTargetInterface_C> K2Node_DynamicCast_AsIGrip_Target_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FindBestCharacterDirection_Success, const struct FVector& CallFunc_FindBestCharacterDirection_BestDirection, bool CallFunc_FindBestCharacterLocation_Success, const struct FVector& CallFunc_FindBestCharacterLocation_BestLocation, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "GetAutoOrientLocationAndDirection");

	Params::UHabFunctionLibrary_C_GetAutoOrientLocationAndDirection_Params Parms{};

	Parms.Character = Character;
	Parms.HandState = HandState;
	Parms.ForLeftHand = ForLeftHand;
	Parms.DesiredHeadLocation = DesiredHeadLocation;
	Parms.DesiredFacingDirection = DesiredFacingDirection;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetHandStateWorldLocation_ReturnValue = CallFunc_GetHandStateWorldLocation_ReturnValue;
	Parms.CallFunc_IsStableGrip_ReturnValue = CallFunc_IsStableGrip_ReturnValue;
	Parms.K2Node_DynamicCast_AsIGrip_Target_Interface = K2Node_DynamicCast_AsIGrip_Target_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindBestCharacterDirection_Success = CallFunc_FindBestCharacterDirection_Success;
	Parms.CallFunc_FindBestCharacterDirection_BestDirection = CallFunc_FindBestCharacterDirection_BestDirection;
	Parms.CallFunc_FindBestCharacterLocation_Success = CallFunc_FindBestCharacterLocation_Success;
	Parms.CallFunc_FindBestCharacterLocation_BestLocation = CallFunc_FindBestCharacterLocation_BestLocation;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundLocationSuccessfully != nullptr)
		*FoundLocationSuccessfully = Parms.FoundLocationSuccessfully;

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.IsStableGrip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHabHandStateStruct         HandState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UHabFunctionLibrary_C::IsStableGrip(const struct FHabHandStateStruct& HandState, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "IsStableGrip");

	Params::UHabFunctionLibrary_C_IsStableGrip_Params Parms{};

	Parms.HandState = HandState;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.FindBestGripTransform
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         GripTargetComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForLeftHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    TargetRotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  BestTransform                                                    (Parm, OutParm, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIGripTargetInterface_C>K2Node_DynamicCast_AsIGrip_Target_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplineComponent*            K2Node_DynamicCast_AsSpline_Component                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_FindBestGripTransform_BestTransform                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_FindTransformClosestToWorldLocation_ReturnValue         (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)

void UHabFunctionLibrary_C::FindBestGripTransform(class UPrimitiveComponent* GripTargetComponent, bool ForLeftHand, const struct FVector& TargetLocation, const struct FRotator& TargetRotation, class UObject* __WorldContext, struct FTransform* BestTransform, TScriptInterface<class IIGripTargetInterface_C> K2Node_DynamicCast_AsIGrip_Target_Interface, bool K2Node_DynamicCast_bSuccess, class USplineComponent* K2Node_DynamicCast_AsSpline_Component, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_FindBestGripTransform_BestTransform, const struct FTransform& CallFunc_FindTransformClosestToWorldLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "FindBestGripTransform");

	Params::UHabFunctionLibrary_C_FindBestGripTransform_Params Parms{};

	Parms.GripTargetComponent = GripTargetComponent;
	Parms.ForLeftHand = ForLeftHand;
	Parms.TargetLocation = TargetLocation;
	Parms.TargetRotation = TargetRotation;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsIGrip_Target_Interface = K2Node_DynamicCast_AsIGrip_Target_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSpline_Component = K2Node_DynamicCast_AsSpline_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_FindBestGripTransform_BestTransform = CallFunc_FindBestGripTransform_BestTransform;
	Parms.CallFunc_FindTransformClosestToWorldLocation_ReturnValue = CallFunc_FindTransformClosestToWorldLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BestTransform != nullptr)
		*BestTransform = std::move(Parms.BestTransform);

}


// Function HabFunctionLibrary.HabFunctionLibrary_C.MakeHandStateFromGripTarget
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         GripTarget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    TargetRotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Reaching                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              HandDistance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Created                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHabHandStateStruct         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FTransform                  CallFunc_FindBestGripTransform_BestTransform                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_InverseTransformDirection_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHabHandStateStruct         K2Node_MakeStruct_HabHandStateStruct                             (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

struct FHabHandStateStruct UHabFunctionLibrary_C::MakeHandStateFromGripTarget(class UPrimitiveComponent* GripTarget, const struct FVector& TargetLocation, const struct FRotator& TargetRotation, bool Reaching, float HandDistance, float Created, class UObject* __WorldContext, const struct FTransform& CallFunc_FindBestGripTransform_BestTransform, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_InverseTransformDirection_ReturnValue, const struct FHabHandStateStruct& K2Node_MakeStruct_HabHandStateStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HabFunctionLibrary_C", "MakeHandStateFromGripTarget");

	Params::UHabFunctionLibrary_C_MakeHandStateFromGripTarget_Params Parms{};

	Parms.GripTarget = GripTarget;
	Parms.TargetLocation = TargetLocation;
	Parms.TargetRotation = TargetRotation;
	Parms.Reaching = Reaching;
	Parms.HandDistance = HandDistance;
	Parms.Created = Created;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FindBestGripTransform_BestTransform = CallFunc_FindBestGripTransform_BestTransform;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_InverseTransformDirection_ReturnValue = CallFunc_InverseTransformDirection_ReturnValue;
	Parms.K2Node_MakeStruct_HabHandStateStruct = K2Node_MakeStruct_HabHandStateStruct;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


