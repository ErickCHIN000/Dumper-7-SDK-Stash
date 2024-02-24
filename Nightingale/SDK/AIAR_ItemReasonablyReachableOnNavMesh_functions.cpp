#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAR_ItemReasonablyReachableOnNavMesh.AIAR_ItemReasonablyReachableOnNavMesh_C
// (None)

class UClass* UAIAR_ItemReasonablyReachableOnNavMesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAR_ItemReasonablyReachableOnNavMesh_C");

	return Clss;
}


// AIAR_ItemReasonablyReachableOnNavMesh_C AIAR_ItemReasonablyReachableOnNavMesh.Default__AIAR_ItemReasonablyReachableOnNavMesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAR_ItemReasonablyReachableOnNavMesh_C* UAIAR_ItemReasonablyReachableOnNavMesh_C::GetDefaultObj()
{
	static class UAIAR_ItemReasonablyReachableOnNavMesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAR_ItemReasonablyReachableOnNavMesh_C*>(UAIAR_ItemReasonablyReachableOnNavMesh_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAR_ItemReasonablyReachableOnNavMesh.AIAR_ItemReasonablyReachableOnNavMesh_C.CheckTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwnerPawn_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_MakeBox_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_PolyLocation(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAR_ItemReasonablyReachableOnNavMesh_C::CheckTargetRequirements(class AActor* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_GetOwnerPawn_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, const struct FBox& CallFunc_MakeBox_ReturnValue, const struct FVector& CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_PolyLocation, bool CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAR_ItemReasonablyReachableOnNavMesh_C", "CheckTargetRequirements");

	Params::UAIAR_ItemReasonablyReachableOnNavMesh_C_CheckTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwnerPawn_ReturnValue = CallFunc_GetOwnerPawn_ReturnValue;
	Parms.CallFunc_Add_VectorFloat_ReturnValue = CallFunc_Add_VectorFloat_ReturnValue;
	Parms.CallFunc_Subtract_VectorFloat_ReturnValue = CallFunc_Subtract_VectorFloat_ReturnValue;
	Parms.CallFunc_MakeBox_ReturnValue = CallFunc_MakeBox_ReturnValue;
	Parms.CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_PolyLocation = CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_PolyLocation;
	Parms.CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_ReturnValue = CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


