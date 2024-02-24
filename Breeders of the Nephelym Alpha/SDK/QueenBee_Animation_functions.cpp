#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass QueenBee_Animation.QueenBee_Animation_C
// (None)

class UClass* UQueenBee_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QueenBee_Animation_C");

	return Clss;
}


// QueenBee_Animation_C QueenBee_Animation.Default__QueenBee_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQueenBee_Animation_C* UQueenBee_Animation_C::GetDefaultObj()
{
	static class UQueenBee_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQueenBee_Animation_C*>(UQueenBee_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QueenBee_Animation.QueenBee_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UQueenBee_Animation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "AnimGraph");

	Params::UQueenBee_Animation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_76D9106C4A65B8FF3919E9AC626A822C
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_76D9106C4A65B8FF3919E9AC626A822C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_76D9106C4A65B8FF3919E9AC626A822C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_B4142EC344BF4B49FB0122AA2F870EB5
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_B4142EC344BF4B49FB0122AA2F870EB5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_B4142EC344BF4B49FB0122AA2F870EB5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_CA2D658442E60974C83246BC75F93994
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_CA2D658442E60974C83246BC75F93994()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_CA2D658442E60974C83246BC75F93994");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_14411E224F4479261D820EAC33428691
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_14411E224F4479261D820EAC33428691()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_14411E224F4479261D820EAC33428691");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_F3AD0592425C98C1F909D885BD3B3C3E
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_F3AD0592425C98C1F909D885BD3B3C3E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_F3AD0592425C98C1F909D885BD3B3C3E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_828C2AA145A5FA7E63B943AF78F27953
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_828C2AA145A5FA7E63B943AF78F27953()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_828C2AA145A5FA7E63B943AF78F27953");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_AB184F99451F04690D92CAAC042A244E
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_AB184F99451F04690D92CAAC042A244E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_AB184F99451F04690D92CAAC042A244E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_39F487F04B5E9FF80C60398C84E6A44F
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_39F487F04B5E9FF80C60398C84E6A44F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_39F487F04B5E9FF80C60398C84E6A44F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_AFAA88284AECC4B01F9461AF852561D1
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_AFAA88284AECC4B01F9461AF852561D1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_AFAA88284AECC4B01F9461AF852561D1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_LookAt_00F9F13D46DB8D13CB82A587C8E5FCC8
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_LookAt_00F9F13D46DB8D13CB82A587C8E5FCC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_LookAt_00F9F13D46DB8D13CB82A587C8E5FCC8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_689A34604DBF5D89FC44A8A90C9CAA74
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_689A34604DBF5D89FC44A8A90C9CAA74()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_689A34604DBF5D89FC44A8A90C9CAA74");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_6FCAE49D4914481A54E1A0AA3168D9C8
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_6FCAE49D4914481A54E1A0AA3168D9C8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_6FCAE49D4914481A54E1A0AA3168D9C8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_1D48488C470FFB7D192F6AB6DB931928
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_1D48488C470FFB7D192F6AB6DB931928()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_1D48488C470FFB7D192F6AB6DB931928");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_BD6E5DD24B7BC518B802FD82C3FE7C45
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_BD6E5DD24B7BC518B802FD82C3FE7C45()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_BD6E5DD24B7BC518B802FD82C3FE7C45");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_4CF73A8C425DF8AC48A279908DD3C2F0
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_4CF73A8C425DF8AC48A279908DD3C2F0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_4CF73A8C425DF8AC48A279908DD3C2F0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_368D64BC432F23B2899D9E9E4954D095
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_368D64BC432F23B2899D9E9E4954D095()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_368D64BC432F23B2899D9E9E4954D095");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_FB0BAF3E48F6DBA2DEDF6AADE3EEB8C2
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_FB0BAF3E48F6DBA2DEDF6AADE3EEB8C2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_FB0BAF3E48F6DBA2DEDF6AADE3EEB8C2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_4D7A0E01421A5ADFF58A47AC3D312E80
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_4D7A0E01421A5ADFF58A47AC3D312E80()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_4D7A0E01421A5ADFF58A47AC3D312E80");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_819E9CE242FF6A9CFE396E972AE8FE6F
// (BlueprintEvent)
// Parameters:

void UQueenBee_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_819E9CE242FF6A9CFE396E972AE8FE6F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_819E9CE242FF6A9CFE396E972AE8FE6F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QueenBee_Animation.QueenBee_Animation_C.ExecuteUbergraph_QueenBee_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQueenBee_Animation_C::ExecuteUbergraph_QueenBee_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QueenBee_Animation_C", "ExecuteUbergraph_QueenBee_Animation");

	Params::UQueenBee_Animation_C_ExecuteUbergraph_QueenBee_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


