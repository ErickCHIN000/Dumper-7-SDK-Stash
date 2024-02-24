#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MainCharacter_Rigging_AnimBP.MainCharacter_Rigging_AnimBP_C
// (None)

class UClass* UMainCharacter_Rigging_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainCharacter_Rigging_AnimBP_C");

	return Clss;
}


// MainCharacter_Rigging_AnimBP_C MainCharacter_Rigging_AnimBP.Default__MainCharacter_Rigging_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainCharacter_Rigging_AnimBP_C* UMainCharacter_Rigging_AnimBP_C::GetDefaultObj()
{
	static class UMainCharacter_Rigging_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainCharacter_Rigging_AnimBP_C*>(UMainCharacter_Rigging_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainCharacter_Rigging_AnimBP.MainCharacter_Rigging_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMainCharacter_Rigging_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainCharacter_Rigging_AnimBP_C", "AnimGraph");

	Params::UMainCharacter_Rigging_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function MainCharacter_Rigging_AnimBP.MainCharacter_Rigging_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainCharacter_Rigging_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainCharacter_Rigging_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UMainCharacter_Rigging_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainCharacter_Rigging_AnimBP.MainCharacter_Rigging_AnimBP_C.ExecuteUbergraph_MainCharacter_Rigging_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainCharacter_Rigging_AnimBP_C::ExecuteUbergraph_MainCharacter_Rigging_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_VSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainCharacter_Rigging_AnimBP_C", "ExecuteUbergraph_MainCharacter_Rigging_AnimBP");

	Params::UMainCharacter_Rigging_AnimBP_C_ExecuteUbergraph_MainCharacter_Rigging_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


