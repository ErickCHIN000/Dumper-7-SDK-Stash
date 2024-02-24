#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Cassie_Animation.Cassie_Animation_C
// (None)

class UClass* UCassie_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cassie_Animation_C");

	return Clss;
}


// Cassie_Animation_C Cassie_Animation.Default__Cassie_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassie_Animation_C* UCassie_Animation_C::GetDefaultObj()
{
	static class UCassie_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassie_Animation_C*>(UCassie_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cassie_Animation.Cassie_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCassie_Animation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "AnimGraph");

	Params::UCassie_Animation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_031DF4614B013895C34A11AC23E1D985
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_031DF4614B013895C34A11AC23E1D985()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_031DF4614B013895C34A11AC23E1D985");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_843DF06647821DF5B32DF6B218C0C92C
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_843DF06647821DF5B32DF6B218C0C92C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_843DF06647821DF5B32DF6B218C0C92C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_79EFD12D46F1B41F8CDB7DB31973B9E4
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_79EFD12D46F1B41F8CDB7DB31973B9E4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_79EFD12D46F1B41F8CDB7DB31973B9E4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_39FCA85C4557E7CEF03E8493981431E7
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_39FCA85C4557E7CEF03E8493981431E7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_39FCA85C4557E7CEF03E8493981431E7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_A13F1D8647492C5D005A2D9A9E5AB668
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_A13F1D8647492C5D005A2D9A9E5AB668()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_A13F1D8647492C5D005A2D9A9E5AB668");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_1771C3FD48EBC55AC187F18EC66FF97B
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_1771C3FD48EBC55AC187F18EC66FF97B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_1771C3FD48EBC55AC187F18EC66FF97B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_CA2433FA456E44C29BD2869127476E0C
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_CA2433FA456E44C29BD2869127476E0C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_CA2433FA456E44C29BD2869127476E0C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_DC0F9E7F4E5D77ACF1DBAA94EB2B48AC
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_DC0F9E7F4E5D77ACF1DBAA94EB2B48AC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_DC0F9E7F4E5D77ACF1DBAA94EB2B48AC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_31D298C44582E246178317820FFA1424
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_31D298C44582E246178317820FFA1424()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_31D298C44582E246178317820FFA1424");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_09C68CE04660A23E74E89986045596BA
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_09C68CE04660A23E74E89986045596BA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_09C68CE04660A23E74E89986045596BA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_3D9193204DD3F2F5274C39B9D3A995A1
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_3D9193204DD3F2F5274C39B9D3A995A1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_3D9193204DD3F2F5274C39B9D3A995A1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_LookAt_34B930B34C695B33494A2C936E68955B
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_LookAt_34B930B34C695B33494A2C936E68955B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_LookAt_34B930B34C695B33494A2C936E68955B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_25D9AEDD464103E6A7B7DBBBBE1BAD86
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_25D9AEDD464103E6A7B7DBBBBE1BAD86()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_25D9AEDD464103E6A7B7DBBBBE1BAD86");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_A67BF9FC4D76F6A0C1630EAD7EF3FFC5
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_A67BF9FC4D76F6A0C1630EAD7EF3FFC5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_A67BF9FC4D76F6A0C1630EAD7EF3FFC5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_396B147E4678CCDE267A7CA07D821641
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_396B147E4678CCDE267A7CA07D821641()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_396B147E4678CCDE267A7CA07D821641");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_3CCBB23540E0CF14B63A7587F847CEA9
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_3CCBB23540E0CF14B63A7587F847CEA9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_3CCBB23540E0CF14B63A7587F847CEA9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_B94E5C0D45AF5A825F4FEBA250FBAE42
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_B94E5C0D45AF5A825F4FEBA250FBAE42()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_B94E5C0D45AF5A825F4FEBA250FBAE42");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_0872C5814C61E81BFA84B9900BA7A83C
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_0872C5814C61E81BFA84B9900BA7A83C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_0872C5814C61E81BFA84B9900BA7A83C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_BAAB09404B345285E736A39F5DE6160E
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_BAAB09404B345285E736A39F5DE6160E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_BAAB09404B345285E736A39F5DE6160E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_C89FCD2F40B722E52C4606BFCDBD6421
// (BlueprintEvent)
// Parameters:

void UCassie_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_C89FCD2F40B722E52C4606BFCDBD6421()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_C89FCD2F40B722E52C4606BFCDBD6421");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cassie_Animation.Cassie_Animation_C.ExecuteUbergraph_Cassie_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCassie_Animation_C::ExecuteUbergraph_Cassie_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cassie_Animation_C", "ExecuteUbergraph_Cassie_Animation");

	Params::UCassie_Animation_C_ExecuteUbergraph_Cassie_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


