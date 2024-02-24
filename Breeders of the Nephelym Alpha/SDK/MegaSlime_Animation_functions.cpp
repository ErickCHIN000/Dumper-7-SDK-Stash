#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MegaSlime_Animation.MegaSlime_Animation_C
// (None)

class UClass* UMegaSlime_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlime_Animation_C");

	return Clss;
}


// MegaSlime_Animation_C MegaSlime_Animation.Default__MegaSlime_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlime_Animation_C* UMegaSlime_Animation_C::GetDefaultObj()
{
	static class UMegaSlime_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlime_Animation_C*>(UMegaSlime_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MegaSlime_Animation.MegaSlime_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMegaSlime_Animation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "AnimGraph");

	Params::UMegaSlime_Animation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_9ED302F647C72BD3723D7786BA1E8FCA
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_9ED302F647C72BD3723D7786BA1E8FCA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_9ED302F647C72BD3723D7786BA1E8FCA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_FFA5F1A343244629D10F0BB0C6A469A0
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_FFA5F1A343244629D10F0BB0C6A469A0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_FFA5F1A343244629D10F0BB0C6A469A0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_1FF997944BC767C4C0E71696DC970B24
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_1FF997944BC767C4C0E71696DC970B24()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_1FF997944BC767C4C0E71696DC970B24");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_C756DBC741B8346942CC749FBBD81C1B
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_C756DBC741B8346942CC749FBBD81C1B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_C756DBC741B8346942CC749FBBD81C1B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_679FB56D4FD2C3EC82B61EB633CDF1D4
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_679FB56D4FD2C3EC82B61EB633CDF1D4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_679FB56D4FD2C3EC82B61EB633CDF1D4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_D992DA744A0BB320F3D27DA127156001
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_D992DA744A0BB320F3D27DA127156001()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_D992DA744A0BB320F3D27DA127156001");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_D473C6AD40A48A2B064329ABE257EED6
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_D473C6AD40A48A2B064329ABE257EED6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_D473C6AD40A48A2B064329ABE257EED6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_6355EF204A1E5D5BC5A84AB122C0BD2C
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_6355EF204A1E5D5BC5A84AB122C0BD2C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_6355EF204A1E5D5BC5A84AB122C0BD2C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_B8C3DF7E44C2B0D3E56704AE174A8CE5
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_B8C3DF7E44C2B0D3E56704AE174A8CE5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_B8C3DF7E44C2B0D3E56704AE174A8CE5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_LookAt_D69B076749B3786FB720E59A940A9D8D
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_LookAt_D69B076749B3786FB720E59A940A9D8D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_LookAt_D69B076749B3786FB720E59A940A9D8D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_560380B9440691CB3A543BA91D712CA7
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_560380B9440691CB3A543BA91D712CA7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_560380B9440691CB3A543BA91D712CA7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_CD50A681452AAA6D2920CB8B4E47F376
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_CD50A681452AAA6D2920CB8B4E47F376()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_CD50A681452AAA6D2920CB8B4E47F376");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_F555497F4D74EA2CB89D4FB9FAF655EE
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_F555497F4D74EA2CB89D4FB9FAF655EE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_F555497F4D74EA2CB89D4FB9FAF655EE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_E331E5804C9AE891368B74A1605FB9BA
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_E331E5804C9AE891368B74A1605FB9BA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_E331E5804C9AE891368B74A1605FB9BA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_ADFC057F49AD546FDB8FDF90EBB82D93
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_ADFC057F49AD546FDB8FDF90EBB82D93()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_ADFC057F49AD546FDB8FDF90EBB82D93");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_6818459F4DF06134A8435885433B0020
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_6818459F4DF06134A8435885433B0020()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_6818459F4DF06134A8435885433B0020");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_867002B843A16904829086ADAC6B700E
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_867002B843A16904829086ADAC6B700E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_867002B843A16904829086ADAC6B700E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_934F9549468B14469782DB89BDD83096
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_934F9549468B14469782DB89BDD83096()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_934F9549468B14469782DB89BDD83096");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_00F0972C4730F6187CBFC092678AEE39
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_00F0972C4730F6187CBFC092678AEE39()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_00F0972C4730F6187CBFC092678AEE39");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_C01612654D629CA38CA10FA2D9FB147D
// (BlueprintEvent)
// Parameters:

void UMegaSlime_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_C01612654D629CA38CA10FA2D9FB147D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_C01612654D629CA38CA10FA2D9FB147D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime_Animation.MegaSlime_Animation_C.ExecuteUbergraph_MegaSlime_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMegaSlime_Animation_C::ExecuteUbergraph_MegaSlime_Animation(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_Animation_C", "ExecuteUbergraph_MegaSlime_Animation");

	Params::UMegaSlime_Animation_C_ExecuteUbergraph_MegaSlime_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


