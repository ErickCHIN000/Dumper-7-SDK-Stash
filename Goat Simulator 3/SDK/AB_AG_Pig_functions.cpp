#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_AG_Pig.AB_AG_Pig_C
// (None)

class UClass* UAB_AG_Pig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_AG_Pig_C");

	return Clss;
}


// AB_AG_Pig_C AB_AG_Pig.Default__AB_AG_Pig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_AG_Pig_C* UAB_AG_Pig_C::GetDefaultObj()
{
	static class UAB_AG_Pig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_AG_Pig_C*>(UAB_AG_Pig_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_AG_Pig.AB_AG_Pig_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_AG_Pig_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_AG_Pig_C", "AnimGraph");

	Params::UAB_AG_Pig_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_AG_Pig.AB_AG_Pig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_0826DC3C4AEAEF1760C7EE81273B065C
// (BlueprintEvent)
// Parameters:

void UAB_AG_Pig_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_0826DC3C4AEAEF1760C7EE81273B065C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_AG_Pig_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_0826DC3C4AEAEF1760C7EE81273B065C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_AG_Pig.AB_AG_Pig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_145616904D242FD67DFC68B8DFB9D6AA
// (BlueprintEvent)
// Parameters:

void UAB_AG_Pig_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_145616904D242FD67DFC68B8DFB9D6AA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_AG_Pig_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_145616904D242FD67DFC68B8DFB9D6AA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_AG_Pig.AB_AG_Pig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_59B077CA45537A212F9B91946C50B9C8
// (BlueprintEvent)
// Parameters:

void UAB_AG_Pig_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_59B077CA45537A212F9B91946C50B9C8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_AG_Pig_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_59B077CA45537A212F9B91946C50B9C8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_AG_Pig.AB_AG_Pig_C.AnimNotify_Footstep_B_L
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAB_AG_Pig_C::AnimNotify_Footstep_B_L()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_AG_Pig_C", "AnimNotify_Footstep_B_L");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_AG_Pig.AB_AG_Pig_C.AnimNotify_Footstep_B_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAB_AG_Pig_C::AnimNotify_Footstep_B_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_AG_Pig_C", "AnimNotify_Footstep_B_R");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_AG_Pig.AB_AG_Pig_C.AnimNotify_Footstep_F_L
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAB_AG_Pig_C::AnimNotify_Footstep_F_L()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_AG_Pig_C", "AnimNotify_Footstep_F_L");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_AG_Pig.AB_AG_Pig_C.AnimNotify_Footstep_F_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAB_AG_Pig_C::AnimNotify_Footstep_F_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_AG_Pig_C", "AnimNotify_Footstep_F_R");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_AG_Pig.AB_AG_Pig_C.ExecuteUbergraph_AB_AG_Pig
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_AG_Pig_C::ExecuteUbergraph_AB_AG_Pig(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_AG_Pig_C", "ExecuteUbergraph_AB_AG_Pig");

	Params::UAB_AG_Pig_C_ExecuteUbergraph_AB_AG_Pig_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


