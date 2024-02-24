#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Gragu_Skeleton_AnimBlueprint.Gragu_Skeleton_AnimBlueprint_C
// (None)

class UClass* UGragu_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gragu_Skeleton_AnimBlueprint_C");

	return Clss;
}


// Gragu_Skeleton_AnimBlueprint_C Gragu_Skeleton_AnimBlueprint.Default__Gragu_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGragu_Skeleton_AnimBlueprint_C* UGragu_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UGragu_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGragu_Skeleton_AnimBlueprint_C*>(UGragu_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Gragu_Skeleton_AnimBlueprint.Gragu_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGragu_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gragu_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UGragu_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Gragu_Skeleton_AnimBlueprint.Gragu_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGragu_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gragu_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UGragu_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Gragu_Skeleton_AnimBlueprint.Gragu_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Gragu_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGragu_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Gragu_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gragu_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Gragu_Skeleton_AnimBlueprint");

	Params::UGragu_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Gragu_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


