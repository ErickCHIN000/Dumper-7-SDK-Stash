#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FernP3_Animation.FernP3_Animation_C
// (None)

class UClass* UFernP3_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernP3_Animation_C");

	return Clss;
}


// FernP3_Animation_C FernP3_Animation.Default__FernP3_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernP3_Animation_C* UFernP3_Animation_C::GetDefaultObj()
{
	static class UFernP3_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernP3_Animation_C*>(UFernP3_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FernP3_Animation.FernP3_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFernP3_Animation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "AnimGraph");

	Params::UFernP3_Animation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_3F2BB35F48061EAE6E1F0E8CFE6ECA4F
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_3F2BB35F48061EAE6E1F0E8CFE6ECA4F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_3F2BB35F48061EAE6E1F0E8CFE6ECA4F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_9C3F95BA44E85B03CD90AA82305176AB
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_9C3F95BA44E85B03CD90AA82305176AB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_9C3F95BA44E85B03CD90AA82305176AB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_9229D2F049EF1EA273E534950B77F4A6
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_9229D2F049EF1EA273E534950B77F4A6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_9229D2F049EF1EA273E534950B77F4A6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_EE33CCDC4FECCCC1E91D69A2F492B6CD
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_EE33CCDC4FECCCC1E91D69A2F492B6CD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_EE33CCDC4FECCCC1E91D69A2F492B6CD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_7FDC46DE42AD3F14C4A59E9BF46564B8
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_7FDC46DE42AD3F14C4A59E9BF46564B8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_7FDC46DE42AD3F14C4A59E9BF46564B8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_DBAFCA614F813A9CE16BCB8FEDDA30E7
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_DBAFCA614F813A9CE16BCB8FEDDA30E7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_DBAFCA614F813A9CE16BCB8FEDDA30E7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_C21264A646D0B0BED34853A5F4F9BD93
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_C21264A646D0B0BED34853A5F4F9BD93()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_C21264A646D0B0BED34853A5F4F9BD93");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_767D780B4DA42027B988B8AC3E85C143
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_767D780B4DA42027B988B8AC3E85C143()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_767D780B4DA42027B988B8AC3E85C143");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_B3EC516148A9A7E0FC5ED1BB24413E3C
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_B3EC516148A9A7E0FC5ED1BB24413E3C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_B3EC516148A9A7E0FC5ED1BB24413E3C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_LookAt_6FB622214DDC950833608F9A9BBD43CE
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_LookAt_6FB622214DDC950833608F9A9BBD43CE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_LookAt_6FB622214DDC950833608F9A9BBD43CE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_149D53204A9ADA754A896F82049B4DD6
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_149D53204A9ADA754A896F82049B4DD6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_149D53204A9ADA754A896F82049B4DD6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_7BC00779408CA4F2FE6E0E8DE88F9007
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_7BC00779408CA4F2FE6E0E8DE88F9007()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_7BC00779408CA4F2FE6E0E8DE88F9007");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_7D07C6784F7E4AC98DD6A6A83EA9ABBC
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_7D07C6784F7E4AC98DD6A6A83EA9ABBC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_7D07C6784F7E4AC98DD6A6A83EA9ABBC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_5388638149296BE220A1D7BAC5FFA219
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_5388638149296BE220A1D7BAC5FFA219()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_5388638149296BE220A1D7BAC5FFA219");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_CB0ED4B44449DD0192AE00BC1F25BC21
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_CB0ED4B44449DD0192AE00BC1F25BC21()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_CB0ED4B44449DD0192AE00BC1F25BC21");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_5B9161A44B4D8163E51B0D88C593DE79
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_5B9161A44B4D8163E51B0D88C593DE79()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_5B9161A44B4D8163E51B0D88C593DE79");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_086C1D734BED289757CFDE90787DA522
// (BlueprintEvent)
// Parameters:

void UFernP3_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_086C1D734BED289757CFDE90787DA522()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_086C1D734BED289757CFDE90787DA522");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FernP3_Animation.FernP3_Animation_C.ExecuteUbergraph_FernP3_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFernP3_Animation_C::ExecuteUbergraph_FernP3_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FernP3_Animation_C", "ExecuteUbergraph_FernP3_Animation");

	Params::UFernP3_Animation_C_ExecuteUbergraph_FernP3_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


