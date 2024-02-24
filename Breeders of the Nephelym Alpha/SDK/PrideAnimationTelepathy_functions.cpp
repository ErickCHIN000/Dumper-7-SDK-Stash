#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass PrideAnimationTelepathy.PrideAnimationTelepathy_C
// (None)

class UClass* UPrideAnimationTelepathy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideAnimationTelepathy_C");

	return Clss;
}


// PrideAnimationTelepathy_C PrideAnimationTelepathy.Default__PrideAnimationTelepathy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideAnimationTelepathy_C* UPrideAnimationTelepathy_C::GetDefaultObj()
{
	static class UPrideAnimationTelepathy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideAnimationTelepathy_C*>(UPrideAnimationTelepathy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPrideAnimationTelepathy_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "AnimGraph");

	Params::UPrideAnimationTelepathy_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_91E205884436F734797D6E9BEB05AF86
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_91E205884436F734797D6E9BEB05AF86()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_91E205884436F734797D6E9BEB05AF86");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_6A23430F440679A3E29246A2E59DB3CF
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_6A23430F440679A3E29246A2E59DB3CF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_6A23430F440679A3E29246A2E59DB3CF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_FFBEB45C46875FD836811FBAD0897D81
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_FFBEB45C46875FD836811FBAD0897D81()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_FFBEB45C46875FD836811FBAD0897D81");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_18F533B0484FDD3D778C01B69123D94E
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_18F533B0484FDD3D778C01B69123D94E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_18F533B0484FDD3D778C01B69123D94E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_2843B6C542BE673F27F54AADD927DF59
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_2843B6C542BE673F27F54AADD927DF59()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_2843B6C542BE673F27F54AADD927DF59");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_DE327F8249D7970F2A21028D0384474D
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_DE327F8249D7970F2A21028D0384474D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_DE327F8249D7970F2A21028D0384474D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_72F4CA2B4E46B666FEA63292B1A0A635
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_72F4CA2B4E46B666FEA63292B1A0A635()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_72F4CA2B4E46B666FEA63292B1A0A635");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_DF3823E04B35FA85181155BD9701D0A7
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_DF3823E04B35FA85181155BD9701D0A7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_DF3823E04B35FA85181155BD9701D0A7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_02C5B0194C8B705A708C2CB62DACCC83
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_02C5B0194C8B705A708C2CB62DACCC83()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_02C5B0194C8B705A708C2CB62DACCC83");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_LookAt_8A6F28D7417617FAA4900DB80EBB30C7
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_LookAt_8A6F28D7417617FAA4900DB80EBB30C7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_LookAt_8A6F28D7417617FAA4900DB80EBB30C7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_9BC8A9DB4CB761E6EF230C829603F08A
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_9BC8A9DB4CB761E6EF230C829603F08A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_9BC8A9DB4CB761E6EF230C829603F08A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_B6CD4C1A4AF3F44C937F5CAB1C177151
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_B6CD4C1A4AF3F44C937F5CAB1C177151()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_B6CD4C1A4AF3F44C937F5CAB1C177151");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_7C0D6E3141CD3220BC588C9F8F7AA813
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_7C0D6E3141CD3220BC588C9F8F7AA813()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_7C0D6E3141CD3220BC588C9F8F7AA813");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_41D90C5B4E624F4193DAA99856FBE58D
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_41D90C5B4E624F4193DAA99856FBE58D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_41D90C5B4E624F4193DAA99856FBE58D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_6DA9DD8C47567F17D03DBBB0B61B4C31
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_6DA9DD8C47567F17D03DBBB0B61B4C31()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_6DA9DD8C47567F17D03DBBB0B61B4C31");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_7CDA01DC49AE275C915FE48A47F69F8B
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_7CDA01DC49AE275C915FE48A47F69F8B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_7CDA01DC49AE275C915FE48A47F69F8B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_5B6E10534285BF824A923AA91187709C
// (BlueprintEvent)
// Parameters:

void UPrideAnimationTelepathy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_5B6E10534285BF824A923AA91187709C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_5B6E10534285BF824A923AA91187709C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimationTelepathy.PrideAnimationTelepathy_C.ExecuteUbergraph_PrideAnimationTelepathy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPrideAnimationTelepathy_C::ExecuteUbergraph_PrideAnimationTelepathy(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimationTelepathy_C", "ExecuteUbergraph_PrideAnimationTelepathy");

	Params::UPrideAnimationTelepathy_C_ExecuteUbergraph_PrideAnimationTelepathy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


