#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Monarch_Animation.Monarch_Animation_C
// (None)

class UClass* UMonarch_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Monarch_Animation_C");

	return Clss;
}


// Monarch_Animation_C Monarch_Animation.Default__Monarch_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarch_Animation_C* UMonarch_Animation_C::GetDefaultObj()
{
	static class UMonarch_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarch_Animation_C*>(UMonarch_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Monarch_Animation.Monarch_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMonarch_Animation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "AnimGraph");

	Params::UMonarch_Animation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_2EC2F57B4899835016BFBB917438BBE2
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_2EC2F57B4899835016BFBB917438BBE2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_2EC2F57B4899835016BFBB917438BBE2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_611C41514322DC99CB3E31B0C58BECED
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_611C41514322DC99CB3E31B0C58BECED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_611C41514322DC99CB3E31B0C58BECED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_321304704504685E560A1A99DE57C3F9
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_321304704504685E560A1A99DE57C3F9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_321304704504685E560A1A99DE57C3F9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_05EAE11E4FA9AFAA1C2B1BACC6A43692
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_05EAE11E4FA9AFAA1C2B1BACC6A43692()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_05EAE11E4FA9AFAA1C2B1BACC6A43692");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_2ACCF3ED4456F00F1EC1E8A434312049
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_2ACCF3ED4456F00F1EC1E8A434312049()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_2ACCF3ED4456F00F1EC1E8A434312049");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_068914E1435577A2AA03F1A91166E6C8
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_068914E1435577A2AA03F1A91166E6C8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_068914E1435577A2AA03F1A91166E6C8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_A5324F654D71F8BFDA30308E35AB570B
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_A5324F654D71F8BFDA30308E35AB570B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_A5324F654D71F8BFDA30308E35AB570B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_2D85273E4899ECD1675255A82295CF48
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_2D85273E4899ECD1675255A82295CF48()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_2D85273E4899ECD1675255A82295CF48");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_62F3EB2B4D9C4662CF5C7AB55A265637
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_62F3EB2B4D9C4662CF5C7AB55A265637()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_62F3EB2B4D9C4662CF5C7AB55A265637");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_LookAt_5FD52EA44D678C120AA10CB02C981474
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_LookAt_5FD52EA44D678C120AA10CB02C981474()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_LookAt_5FD52EA44D678C120AA10CB02C981474");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_96A0DAE6465CAE110DAA78ABCDB9744F
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_96A0DAE6465CAE110DAA78ABCDB9744F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_96A0DAE6465CAE110DAA78ABCDB9744F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_1D87425042C5916E1A6073BAF9185073
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_1D87425042C5916E1A6073BAF9185073()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_1D87425042C5916E1A6073BAF9185073");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_AA41262E446723CFCCA49D91C9E3CA64
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_AA41262E446723CFCCA49D91C9E3CA64()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_AA41262E446723CFCCA49D91C9E3CA64");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_C45B759846E10E1622F7BA863A762044
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_C45B759846E10E1622F7BA863A762044()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_C45B759846E10E1622F7BA863A762044");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_2852BC3142D2F562C41F7C8A61D1A670
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_2852BC3142D2F562C41F7C8A61D1A670()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_2852BC3142D2F562C41F7C8A61D1A670");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_6B246B894EFE8B96A9986680E49250A6
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_6B246B894EFE8B96A9986680E49250A6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_6B246B894EFE8B96A9986680E49250A6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_9DC631574EA003584086C6AD2BD4DF9A
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_9DC631574EA003584086C6AD2BD4DF9A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_9DC631574EA003584086C6AD2BD4DF9A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_E489691C49B9182E2017B3989EF397E5
// (BlueprintEvent)
// Parameters:

void UMonarch_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_E489691C49B9182E2017B3989EF397E5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_E489691C49B9182E2017B3989EF397E5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Monarch_Animation.Monarch_Animation_C.ExecuteUbergraph_Monarch_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonarch_Animation_C::ExecuteUbergraph_Monarch_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Monarch_Animation_C", "ExecuteUbergraph_Monarch_Animation");

	Params::UMonarch_Animation_C_ExecuteUbergraph_Monarch_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


