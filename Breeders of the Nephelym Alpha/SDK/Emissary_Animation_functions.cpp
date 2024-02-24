#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Emissary_Animation.Emissary_Animation_C
// (None)

class UClass* UEmissary_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Emissary_Animation_C");

	return Clss;
}


// Emissary_Animation_C Emissary_Animation.Default__Emissary_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissary_Animation_C* UEmissary_Animation_C::GetDefaultObj()
{
	static class UEmissary_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissary_Animation_C*>(UEmissary_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Emissary_Animation.Emissary_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UEmissary_Animation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "AnimGraph");

	Params::UEmissary_Animation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Emissary_Animation.Emissary_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_8984F2C54BF40E57EBA3038C821886AE
// (BlueprintEvent)
// Parameters:

void UEmissary_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_8984F2C54BF40E57EBA3038C821886AE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_8984F2C54BF40E57EBA3038C821886AE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Emissary_Animation.Emissary_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_F10B47204FECFF9D12CBA5B79D429777
// (BlueprintEvent)
// Parameters:

void UEmissary_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_F10B47204FECFF9D12CBA5B79D429777()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_F10B47204FECFF9D12CBA5B79D429777");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Emissary_Animation.Emissary_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_518830B44EA96861B54B65BE1FA1EAE1
// (BlueprintEvent)
// Parameters:

void UEmissary_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_518830B44EA96861B54B65BE1FA1EAE1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_518830B44EA96861B54B65BE1FA1EAE1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Emissary_Animation.Emissary_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_LookAt_2B6DA5F149FA3EB3CE5C4190863739FF
// (BlueprintEvent)
// Parameters:

void UEmissary_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_LookAt_2B6DA5F149FA3EB3CE5C4190863739FF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_LookAt_2B6DA5F149FA3EB3CE5C4190863739FF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Emissary_Animation.Emissary_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_C3ACDF0340E0B0247200619787500FEC
// (BlueprintEvent)
// Parameters:

void UEmissary_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_C3ACDF0340E0B0247200619787500FEC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_C3ACDF0340E0B0247200619787500FEC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Emissary_Animation.Emissary_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_30C71A6A4CEEE20025C882B74FD9C276
// (BlueprintEvent)
// Parameters:

void UEmissary_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_30C71A6A4CEEE20025C882B74FD9C276()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_30C71A6A4CEEE20025C882B74FD9C276");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Emissary_Animation.Emissary_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_E401A119492290F301D63DA7AA36FDB1
// (BlueprintEvent)
// Parameters:

void UEmissary_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_E401A119492290F301D63DA7AA36FDB1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_E401A119492290F301D63DA7AA36FDB1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Emissary_Animation.Emissary_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_CE20943B4044B08B581D2389E92BCB2D
// (BlueprintEvent)
// Parameters:

void UEmissary_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_CE20943B4044B08B581D2389E92BCB2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_CE20943B4044B08B581D2389E92BCB2D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Emissary_Animation.Emissary_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_9B53BF7940CC89DC003AD2BB1AF8E4F8
// (BlueprintEvent)
// Parameters:

void UEmissary_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_9B53BF7940CC89DC003AD2BB1AF8E4F8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_9B53BF7940CC89DC003AD2BB1AF8E4F8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Emissary_Animation.Emissary_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_BED88CD14BD0D72048651AB919BE6170
// (BlueprintEvent)
// Parameters:

void UEmissary_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_BED88CD14BD0D72048651AB919BE6170()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_BED88CD14BD0D72048651AB919BE6170");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Emissary_Animation.Emissary_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_F8879C5F4C2F4BBB032194B45D970AF0
// (BlueprintEvent)
// Parameters:

void UEmissary_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_F8879C5F4C2F4BBB032194B45D970AF0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_F8879C5F4C2F4BBB032194B45D970AF0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Emissary_Animation.Emissary_Animation_C.ExecuteUbergraph_Emissary_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmissary_Animation_C::ExecuteUbergraph_Emissary_Animation(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Emissary_Animation_C", "ExecuteUbergraph_Emissary_Animation");

	Params::UEmissary_Animation_C_ExecuteUbergraph_Emissary_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


