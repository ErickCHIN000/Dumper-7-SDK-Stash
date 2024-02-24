#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass WidowAnimation.WidowAnimation_C
// (None)

class UClass* UWidowAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowAnimation_C");

	return Clss;
}


// WidowAnimation_C WidowAnimation.Default__WidowAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowAnimation_C* UWidowAnimation_C::GetDefaultObj()
{
	static class UWidowAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowAnimation_C*>(UWidowAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WidowAnimation.WidowAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UWidowAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "AnimGraph");

	Params::UWidowAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_48408D0E4D17C4055C470794B2F70409
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_48408D0E4D17C4055C470794B2F70409()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_48408D0E4D17C4055C470794B2F70409");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_79DCCBC24D01FD58A38D1AA63A1C607E
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_79DCCBC24D01FD58A38D1AA63A1C607E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_79DCCBC24D01FD58A38D1AA63A1C607E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_4FEC88154D05E54C2BADA283FBFD8240
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_4FEC88154D05E54C2BADA283FBFD8240()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_4FEC88154D05E54C2BADA283FBFD8240");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_2A550BE642CDD64922E358862A8E10FA
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_2A550BE642CDD64922E358862A8E10FA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_2A550BE642CDD64922E358862A8E10FA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_5CBCE9CD4D945CE58B39F897A8A1644F
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_5CBCE9CD4D945CE58B39F897A8A1644F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_5CBCE9CD4D945CE58B39F897A8A1644F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_7DC6103D47B72D891082E1A8DF24F746
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_7DC6103D47B72D891082E1A8DF24F746()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_7DC6103D47B72D891082E1A8DF24F746");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_7A6C124644B071C893046C9D77DCF322
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_7A6C124644B071C893046C9D77DCF322()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_7A6C124644B071C893046C9D77DCF322");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_B5A46EDC4D08AB2D020AE89B781CEECD
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_B5A46EDC4D08AB2D020AE89B781CEECD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_B5A46EDC4D08AB2D020AE89B781CEECD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_DC52A0884B7C23258EBA4BBEC81EC626
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_DC52A0884B7C23258EBA4BBEC81EC626()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_DC52A0884B7C23258EBA4BBEC81EC626");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_LookAt_55BEF28E47212CFE05A9C2B0056A8337
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_LookAt_55BEF28E47212CFE05A9C2B0056A8337()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_LookAt_55BEF28E47212CFE05A9C2B0056A8337");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_C1CE5FB9458950E19173069CFB855E72
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_C1CE5FB9458950E19173069CFB855E72()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_C1CE5FB9458950E19173069CFB855E72");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_D012361B4974AFFEB22858A55A91EA45
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_D012361B4974AFFEB22858A55A91EA45()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_D012361B4974AFFEB22858A55A91EA45");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_EBCD22984008DDE66BF3278BA6623233
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_EBCD22984008DDE66BF3278BA6623233()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_EBCD22984008DDE66BF3278BA6623233");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_EFEA2BF6437C8D0C18C58FA65F041921
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_EFEA2BF6437C8D0C18C58FA65F041921()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_EFEA2BF6437C8D0C18C58FA65F041921");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_6EDA390243C44F8B22B4DEBE00D46D15
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_6EDA390243C44F8B22B4DEBE00D46D15()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_6EDA390243C44F8B22B4DEBE00D46D15");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_E8B41D234707F03196C09CAB2078452D
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_E8B41D234707F03196C09CAB2078452D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_E8B41D234707F03196C09CAB2078452D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_83EE6E744753540C949F85967CFAFEA8
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_83EE6E744753540C949F85967CFAFEA8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_83EE6E744753540C949F85967CFAFEA8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_737045F34735686ADF6108BCB8B8252F
// (BlueprintEvent)
// Parameters:

void UWidowAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_737045F34735686ADF6108BCB8B8252F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_737045F34735686ADF6108BCB8B8252F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WidowAnimation.WidowAnimation_C.ExecuteUbergraph_WidowAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidowAnimation_C::ExecuteUbergraph_WidowAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidowAnimation_C", "ExecuteUbergraph_WidowAnimation");

	Params::UWidowAnimation_C_ExecuteUbergraph_WidowAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


