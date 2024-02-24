#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_FireExtinguisher.AnimBP_FireExtinguisher_C
// (None)

class UClass* UAnimBP_FireExtinguisher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_FireExtinguisher_C");

	return Clss;
}


// AnimBP_FireExtinguisher_C AnimBP_FireExtinguisher.Default__AnimBP_FireExtinguisher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_FireExtinguisher_C* UAnimBP_FireExtinguisher_C::GetDefaultObj()
{
	static class UAnimBP_FireExtinguisher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_FireExtinguisher_C*>(UAnimBP_FireExtinguisher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_FireExtinguisher.AnimBP_FireExtinguisher_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_FireExtinguisher_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_FireExtinguisher_C", "AnimGraph");

	Params::UAnimBP_FireExtinguisher_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_FireExtinguisher.AnimBP_FireExtinguisher_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_FireExtinguisher_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_FireExtinguisher_C", "BlueprintUpdateAnimation");

	Params::UAnimBP_FireExtinguisher_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimBP_FireExtinguisher.AnimBP_FireExtinguisher_C.ExecuteUbergraph_AnimBP_FireExtinguisher
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkeletalItem_FireExtinguisher_C*K2Node_DynamicCast_AsBP_Skeletal_Item_Fire_Extinguisher          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionableComponent*        CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTraitBehaviour*             CallFunc_GetFirstBehaviourOfType_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Actionable_FireExtinguisher_C*K2Node_DynamicCast_AsBP_Actionable_Fire_Extinguisher             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFiring_Firing                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnimBP_FireExtinguisher_C::ExecuteUbergraph_AnimBP_FireExtinguisher(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_SkeletalItem_FireExtinguisher_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Fire_Extinguisher, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UTraitBehaviour* CallFunc_GetFirstBehaviourOfType_ReturnValue, class UBP_Actionable_FireExtinguisher_C* K2Node_DynamicCast_AsBP_Actionable_Fire_Extinguisher, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsFiring_Firing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_FireExtinguisher_C", "ExecuteUbergraph_AnimBP_FireExtinguisher");

	Params::UAnimBP_FireExtinguisher_C_ExecuteUbergraph_AnimBP_FireExtinguisher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Skeletal_Item_Fire_Extinguisher = K2Node_DynamicCast_AsBP_Skeletal_Item_Fire_Extinguisher;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetFirstBehaviourOfType_ReturnValue = CallFunc_GetFirstBehaviourOfType_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Actionable_Fire_Extinguisher = K2Node_DynamicCast_AsBP_Actionable_Fire_Extinguisher;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsFiring_Firing = CallFunc_IsFiring_Firing;

	UObject::ProcessEvent(Func, &Parms);

}

}


