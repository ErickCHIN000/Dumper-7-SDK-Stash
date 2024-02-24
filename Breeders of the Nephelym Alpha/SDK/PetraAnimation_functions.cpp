#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass PetraAnimation.PetraAnimation_C
// (None)

class UClass* UPetraAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetraAnimation_C");

	return Clss;
}


// PetraAnimation_C PetraAnimation.Default__PetraAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPetraAnimation_C* UPetraAnimation_C::GetDefaultObj()
{
	static class UPetraAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPetraAnimation_C*>(UPetraAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PetraAnimation.PetraAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPetraAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "AnimGraph");

	Params::UPetraAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_4891A832401D61B1566284901E73A7DA
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_4891A832401D61B1566284901E73A7DA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_4891A832401D61B1566284901E73A7DA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_0696BBA541E2C6F1352C11972D0475C9
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_0696BBA541E2C6F1352C11972D0475C9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_0696BBA541E2C6F1352C11972D0475C9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_16634B294DE4043E1C11D2BB4C18471A
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_16634B294DE4043E1C11D2BB4C18471A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_16634B294DE4043E1C11D2BB4C18471A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_491456FA4F2C4FDBB505C3A29C909E4E
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_491456FA4F2C4FDBB505C3A29C909E4E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_491456FA4F2C4FDBB505C3A29C909E4E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_657B07FE4642581CF9930989D821706B
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_657B07FE4642581CF9930989D821706B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_657B07FE4642581CF9930989D821706B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_D0BFF344456945AF64FC279FB8C5137F
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_D0BFF344456945AF64FC279FB8C5137F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_D0BFF344456945AF64FC279FB8C5137F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_D735921B48ECB751392CA99D93B54361
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_D735921B48ECB751392CA99D93B54361()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_D735921B48ECB751392CA99D93B54361");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_E3E3F07D4F5949D42B27B5BB7F925809
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_E3E3F07D4F5949D42B27B5BB7F925809()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_E3E3F07D4F5949D42B27B5BB7F925809");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_5659DA884CA31D0317792D99D116C6B3
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_5659DA884CA31D0317792D99D116C6B3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_5659DA884CA31D0317792D99D116C6B3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_LookAt_15BB7AE1499E87B77D7C2AAC185C2D6D
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_LookAt_15BB7AE1499E87B77D7C2AAC185C2D6D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_LookAt_15BB7AE1499E87B77D7C2AAC185C2D6D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_C236562A47531A2E36DDB88E7B2C6B1D
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_C236562A47531A2E36DDB88E7B2C6B1D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_C236562A47531A2E36DDB88E7B2C6B1D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_7F03BB8A4C164E1C269577A04751DF19
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_7F03BB8A4C164E1C269577A04751DF19()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_7F03BB8A4C164E1C269577A04751DF19");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_245D6A7F420A0B4F85FE7D9469EC6F58
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_245D6A7F420A0B4F85FE7D9469EC6F58()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_245D6A7F420A0B4F85FE7D9469EC6F58");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_95E04FB84D3D63C1626466B4F5975AB8
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_95E04FB84D3D63C1626466B4F5975AB8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_95E04FB84D3D63C1626466B4F5975AB8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_2F1C261C49B1B2BDC122E8B9A5F81270
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_2F1C261C49B1B2BDC122E8B9A5F81270()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_2F1C261C49B1B2BDC122E8B9A5F81270");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_48AC891742C8626F0AAA31AF26C9EC4D
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_48AC891742C8626F0AAA31AF26C9EC4D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_48AC891742C8626F0AAA31AF26C9EC4D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_CEBDCA854D74F1918864BDA91D7F53F6
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_CEBDCA854D74F1918864BDA91D7F53F6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_CEBDCA854D74F1918864BDA91D7F53F6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_963E7E4F42D4A25E78AFFF8EA42671FF
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_963E7E4F42D4A25E78AFFF8EA42671FF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_963E7E4F42D4A25E78AFFF8EA42671FF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_203936884357D65143E205A08EA47ED5
// (BlueprintEvent)
// Parameters:

void UPetraAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_203936884357D65143E205A08EA47ED5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_203936884357D65143E205A08EA47ED5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PetraAnimation.PetraAnimation_C.ExecuteUbergraph_PetraAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPetraAnimation_C::ExecuteUbergraph_PetraAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetraAnimation_C", "ExecuteUbergraph_PetraAnimation");

	Params::UPetraAnimation_C_ExecuteUbergraph_PetraAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


