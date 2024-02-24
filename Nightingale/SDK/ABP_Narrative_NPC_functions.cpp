#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Narrative_NPC.ABP_Narrative_NPC_C
// (None)

class UClass* UABP_Narrative_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Narrative_NPC_C");

	return Clss;
}


// ABP_Narrative_NPC_C ABP_Narrative_NPC.Default__ABP_Narrative_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Narrative_NPC_C* UABP_Narrative_NPC_C::GetDefaultObj()
{
	static class UABP_Narrative_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Narrative_NPC_C*>(UABP_Narrative_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Narrative_NPC.ABP_Narrative_NPC_C.BodyType
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class EBodyType               InBodyType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   BodyType                                                         (Parm, OutParm, NoDestructor)

void UABP_Narrative_NPC_C::BodyType(const struct FPoseLink& InPose, enum class EBodyType InBodyType, struct FPoseLink* BodyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Narrative_NPC_C", "BodyType");

	Params::UABP_Narrative_NPC_C_BodyType_Params Parms{};

	Parms.InPose = InPose;
	Parms.InBodyType = InBodyType;

	UObject::ProcessEvent(Func, &Parms);

	if (BodyType != nullptr)
		*BodyType = std::move(Parms.BodyType);

}


// Function ABP_Narrative_NPC.ABP_Narrative_NPC_C.EyeOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   EyeOffset                                                        (Parm, OutParm, NoDestructor)

void UABP_Narrative_NPC_C::EyeOffset(const struct FPoseLink& InPose_0, const struct FVector& Offset, struct FPoseLink* EyeOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Narrative_NPC_C", "EyeOffset");

	Params::UABP_Narrative_NPC_C_EyeOffset_Params Parms{};

	Parms.InPose_0 = InPose_0;
	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

	if (EyeOffset != nullptr)
		*EyeOffset = std::move(Parms.EyeOffset);

}


// Function ABP_Narrative_NPC.ABP_Narrative_NPC_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Narrative_NPC_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Narrative_NPC_C", "AnimGraph");

	Params::UABP_Narrative_NPC_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Narrative_NPC.ABP_Narrative_NPC_C.SetCharacterEyeScale
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Narrative_NPC_C::SetCharacterEyeScale(float& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Narrative_NPC_C", "SetCharacterEyeScale");

	Params::UABP_Narrative_NPC_C_SetCharacterEyeScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Narrative_NPC.ABP_Narrative_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Narrative_NPC_AnimGraphNode_TransitionResult_5BF0A7414B8EEBF1AA0F5D92C0AB90F7
// (BlueprintEvent)
// Parameters:

void UABP_Narrative_NPC_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Narrative_NPC_AnimGraphNode_TransitionResult_5BF0A7414B8EEBF1AA0F5D92C0AB90F7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Narrative_NPC_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Narrative_NPC_AnimGraphNode_TransitionResult_5BF0A7414B8EEBF1AA0F5D92C0AB90F7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Narrative_NPC.ABP_Narrative_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Narrative_NPC_AnimGraphNode_TransitionResult_300190B04F6DA12E6EF5079421608DD6
// (BlueprintEvent)
// Parameters:

void UABP_Narrative_NPC_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Narrative_NPC_AnimGraphNode_TransitionResult_300190B04F6DA12E6EF5079421608DD6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Narrative_NPC_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Narrative_NPC_AnimGraphNode_TransitionResult_300190B04F6DA12E6EF5079421608DD6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Narrative_NPC.ABP_Narrative_NPC_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Narrative_NPC_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Narrative_NPC_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Narrative_NPC.ABP_Narrative_NPC_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Narrative_NPC_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Narrative_NPC_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Narrative_NPC.ABP_Narrative_NPC_C.SetCharacterEyeOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Offset                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Narrative_NPC_C::SetCharacterEyeOffset(struct FVector& Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Narrative_NPC_C", "SetCharacterEyeOffset");

	Params::UABP_Narrative_NPC_C_SetCharacterEyeOffset_Params Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Narrative_NPC.ABP_Narrative_NPC_C.SetCharacterBodyType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBodyType               Type                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Narrative_NPC_C::SetCharacterBodyType(enum class EBodyType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Narrative_NPC_C", "SetCharacterBodyType");

	Params::UABP_Narrative_NPC_C_SetCharacterBodyType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Narrative_NPC.ABP_Narrative_NPC_C.ExecuteUbergraph_ABP_Narrative_NPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBodyType               K2Node_Event_Type                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Scale                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Offset                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Narrative_NPC_C::ExecuteUbergraph_ABP_Narrative_NPC(int32 EntryPoint, enum class EBodyType K2Node_Event_Type, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float K2Node_Event_Scale, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct FVector& K2Node_Event_Offset, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Narrative_NPC_C", "ExecuteUbergraph_ABP_Narrative_NPC");

	Params::UABP_Narrative_NPC_C_ExecuteUbergraph_ABP_Narrative_NPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_Scale = K2Node_Event_Scale;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1 = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Event_Offset = K2Node_Event_Offset;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast_1 = CallFunc_Less_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


