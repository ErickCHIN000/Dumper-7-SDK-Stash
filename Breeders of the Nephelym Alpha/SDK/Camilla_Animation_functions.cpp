#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Camilla_Animation.Camilla_Animation_C
// (None)

class UClass* UCamilla_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Camilla_Animation_C");

	return Clss;
}


// Camilla_Animation_C Camilla_Animation.Default__Camilla_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamilla_Animation_C* UCamilla_Animation_C::GetDefaultObj()
{
	static class UCamilla_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamilla_Animation_C*>(UCamilla_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Camilla_Animation.Camilla_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCamilla_Animation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "AnimGraph");

	Params::UCamilla_Animation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_857C80F94A3E9528AE2F67BA93B757D2
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_857C80F94A3E9528AE2F67BA93B757D2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_857C80F94A3E9528AE2F67BA93B757D2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_4DFBE04C44DE6F3AC5F997AA206C7159
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_4DFBE04C44DE6F3AC5F997AA206C7159()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_4DFBE04C44DE6F3AC5F997AA206C7159");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_356364F144A312CFAC7142B9478E70D3
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_356364F144A312CFAC7142B9478E70D3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_356364F144A312CFAC7142B9478E70D3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_3ADD61E640CB8C6DD9A4DD8A4D841E88
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_3ADD61E640CB8C6DD9A4DD8A4D841E88()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_3ADD61E640CB8C6DD9A4DD8A4D841E88");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_06A32C234C507B1FDA718DBC5ECCD0C4
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_06A32C234C507B1FDA718DBC5ECCD0C4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_06A32C234C507B1FDA718DBC5ECCD0C4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_EBDA026C443FEB2484FC6591080048E7
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_EBDA026C443FEB2484FC6591080048E7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_EBDA026C443FEB2484FC6591080048E7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_0C9D0C6145A71D65ABC6A3A1117EBAB8
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_0C9D0C6145A71D65ABC6A3A1117EBAB8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_0C9D0C6145A71D65ABC6A3A1117EBAB8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_48EDB1954755CB526D0F14B701EEC3E9
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_48EDB1954755CB526D0F14B701EEC3E9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_48EDB1954755CB526D0F14B701EEC3E9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_750AF5594AD623309D531EA68AEA67B6
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_750AF5594AD623309D531EA68AEA67B6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_750AF5594AD623309D531EA68AEA67B6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_LookAt_98EF67674044716C0DCF9CB500D7FC6E
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_LookAt_98EF67674044716C0DCF9CB500D7FC6E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_LookAt_98EF67674044716C0DCF9CB500D7FC6E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_B2FBAB8E493FDE27272F33A2D3426A98
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_B2FBAB8E493FDE27272F33A2D3426A98()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_B2FBAB8E493FDE27272F33A2D3426A98");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_DEF5702F48212A50D9873E9B257D5539
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_DEF5702F48212A50D9873E9B257D5539()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_DEF5702F48212A50D9873E9B257D5539");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_05197EBD4F7E6BDF38832882B7FDBBF7
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_05197EBD4F7E6BDF38832882B7FDBBF7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_05197EBD4F7E6BDF38832882B7FDBBF7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_45921F2646E3783DB16C65BA40F0D80F
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_45921F2646E3783DB16C65BA40F0D80F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_45921F2646E3783DB16C65BA40F0D80F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_34DCBA754CBB73F865ADD895FFE3F6F5
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_34DCBA754CBB73F865ADD895FFE3F6F5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_34DCBA754CBB73F865ADD895FFE3F6F5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_87E845F947B631DA4E7D32BB2570E9B2
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_87E845F947B631DA4E7D32BB2570E9B2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_87E845F947B631DA4E7D32BB2570E9B2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_77FACE2840A48A6AEC5860A7C8CAB014
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_77FACE2840A48A6AEC5860A7C8CAB014()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_77FACE2840A48A6AEC5860A7C8CAB014");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_F7FB18A94EDC01C7D5CD43BAC759238D
// (BlueprintEvent)
// Parameters:

void UCamilla_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_F7FB18A94EDC01C7D5CD43BAC759238D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_F7FB18A94EDC01C7D5CD43BAC759238D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla_Animation.Camilla_Animation_C.ExecuteUbergraph_Camilla_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCamilla_Animation_C::ExecuteUbergraph_Camilla_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_Animation_C", "ExecuteUbergraph_Camilla_Animation");

	Params::UCamilla_Animation_C_ExecuteUbergraph_Camilla_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


