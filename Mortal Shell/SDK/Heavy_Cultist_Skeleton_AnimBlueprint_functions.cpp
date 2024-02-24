#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Heavy_Cultist_Skeleton_AnimBlueprint.Heavy_Cultist_Skeleton_AnimBlueprint_C
// (None)

class UClass* UHeavy_Cultist_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Heavy_Cultist_Skeleton_AnimBlueprint_C");

	return Clss;
}


// Heavy_Cultist_Skeleton_AnimBlueprint_C Heavy_Cultist_Skeleton_AnimBlueprint.Default__Heavy_Cultist_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeavy_Cultist_Skeleton_AnimBlueprint_C* UHeavy_Cultist_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UHeavy_Cultist_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeavy_Cultist_Skeleton_AnimBlueprint_C*>(UHeavy_Cultist_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Heavy_Cultist_Skeleton_AnimBlueprint.Heavy_Cultist_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHeavy_Cultist_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Heavy_Cultist_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UHeavy_Cultist_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Heavy_Cultist_Skeleton_AnimBlueprint.Heavy_Cultist_Skeleton_AnimBlueprint_C.GetSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HeavyCultistBase_C*      HeavyCultist                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Speed                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeavy_Cultist_Skeleton_AnimBlueprint_C::GetSpeed(class APawn* Pawn, class ABP_HeavyCultistBase_C* HeavyCultist, float* Speed, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Heavy_Cultist_Skeleton_AnimBlueprint_C", "GetSpeed");

	Params::UHeavy_Cultist_Skeleton_AnimBlueprint_C_GetSpeed_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.HeavyCultist = HeavyCultist;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Speed != nullptr)
		*Speed = Parms.Speed;

}


// Function Heavy_Cultist_Skeleton_AnimBlueprint.Heavy_Cultist_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeavy_Cultist_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Heavy_Cultist_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UHeavy_Cultist_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Heavy_Cultist_Skeleton_AnimBlueprint.Heavy_Cultist_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Heavy_Cultist_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HeavyCultistBase_C*      K2Node_DynamicCast_AsBP_Heavy_Cultist_Base                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSpeed_Speed                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeavy_Cultist_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Heavy_Cultist_Skeleton_AnimBlueprint(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float K2Node_Event_DeltaTimeX, class ABP_HeavyCultistBase_C* K2Node_DynamicCast_AsBP_Heavy_Cultist_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetSpeed_Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Heavy_Cultist_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Heavy_Cultist_Skeleton_AnimBlueprint");

	Params::UHeavy_Cultist_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Heavy_Cultist_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_DynamicCast_AsBP_Heavy_Cultist_Base = K2Node_DynamicCast_AsBP_Heavy_Cultist_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSpeed_Speed = CallFunc_GetSpeed_Speed;

	UObject::ProcessEvent(Func, &Parms);

}

}


