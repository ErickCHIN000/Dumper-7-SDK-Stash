#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ShadowKnightAnimBP_New.ShadowKnightAnimBP_New_C
// (None)

class UClass* UShadowKnightAnimBP_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShadowKnightAnimBP_New_C");

	return Clss;
}


// ShadowKnightAnimBP_New_C ShadowKnightAnimBP_New.Default__ShadowKnightAnimBP_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShadowKnightAnimBP_New_C* UShadowKnightAnimBP_New_C::GetDefaultObj()
{
	static class UShadowKnightAnimBP_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShadowKnightAnimBP_New_C*>(UShadowKnightAnimBP_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShadowKnightAnimBP_New.ShadowKnightAnimBP_New_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UShadowKnightAnimBP_New_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShadowKnightAnimBP_New_C", "AnimGraph");

	Params::UShadowKnightAnimBP_New_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ShadowKnightAnimBP_New.ShadowKnightAnimBP_New_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShadowKnightAnimBP_New_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShadowKnightAnimBP_New_C", "BlueprintUpdateAnimation");

	Params::UShadowKnightAnimBP_New_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShadowKnightAnimBP_New.ShadowKnightAnimBP_New_C.ExecuteUbergraph_ShadowKnightAnimBP_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShadowKnightAnimBP_New_C::ExecuteUbergraph_ShadowKnightAnimBP_New(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_VSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShadowKnightAnimBP_New_C", "ExecuteUbergraph_ShadowKnightAnimBP_New");

	Params::UShadowKnightAnimBP_New_C_ExecuteUbergraph_ShadowKnightAnimBP_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


