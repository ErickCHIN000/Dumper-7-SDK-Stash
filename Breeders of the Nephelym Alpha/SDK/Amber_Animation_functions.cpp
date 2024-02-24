#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Amber_Animation.Amber_Animation_C
// (None)

class UClass* UAmber_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Amber_Animation_C");

	return Clss;
}


// Amber_Animation_C Amber_Animation.Default__Amber_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmber_Animation_C* UAmber_Animation_C::GetDefaultObj()
{
	static class UAmber_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmber_Animation_C*>(UAmber_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Amber_Animation.Amber_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAmber_Animation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "AnimGraph");

	Params::UAmber_Animation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_3E09368D4E9A1EF7682E77826899BB06
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_3E09368D4E9A1EF7682E77826899BB06()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_3E09368D4E9A1EF7682E77826899BB06");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_542CB5054358B8F410002A99F597A77F
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_542CB5054358B8F410002A99F597A77F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_542CB5054358B8F410002A99F597A77F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_68320E0047E9D0A75E3CBDBC1A3773BC
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_68320E0047E9D0A75E3CBDBC1A3773BC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_68320E0047E9D0A75E3CBDBC1A3773BC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_2639E0584FEED41145DB1AA623CE676E
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_2639E0584FEED41145DB1AA623CE676E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_2639E0584FEED41145DB1AA623CE676E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_EDB9EBA344DF1B8C6D174291BC5F2482
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_EDB9EBA344DF1B8C6D174291BC5F2482()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_EDB9EBA344DF1B8C6D174291BC5F2482");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_50C7EFC64C683DEA2B46D7A2D40965FF
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_50C7EFC64C683DEA2B46D7A2D40965FF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_50C7EFC64C683DEA2B46D7A2D40965FF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_FE70F373408120C1A38F4598095900CF
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_FE70F373408120C1A38F4598095900CF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_FE70F373408120C1A38F4598095900CF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_4A9FB3A1430FCB38BF22A08157DA8DCD
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_4A9FB3A1430FCB38BF22A08157DA8DCD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_4A9FB3A1430FCB38BF22A08157DA8DCD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_A8F5CBA34828909816F295A19B2998D1
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_A8F5CBA34828909816F295A19B2998D1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_A8F5CBA34828909816F295A19B2998D1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_BF583AF84B58AD3EC3BB109E493F4ED0
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_BF583AF84B58AD3EC3BB109E493F4ED0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_BF583AF84B58AD3EC3BB109E493F4ED0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_BCA5C0844031C584C8C5AB838C4DEECF
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_BCA5C0844031C584C8C5AB838C4DEECF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_BCA5C0844031C584C8C5AB838C4DEECF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_LookAt_7163C5F34E6188E5E3DA9CBDEACE5CA3
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_LookAt_7163C5F34E6188E5E3DA9CBDEACE5CA3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_LookAt_7163C5F34E6188E5E3DA9CBDEACE5CA3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_B1FA80B147CE7B9503F2FFB4E8A1F889
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_B1FA80B147CE7B9503F2FFB4E8A1F889()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_B1FA80B147CE7B9503F2FFB4E8A1F889");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_6E1F917B4BA39DE1F4576A9B65BF11C4
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_6E1F917B4BA39DE1F4576A9B65BF11C4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_6E1F917B4BA39DE1F4576A9B65BF11C4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_695702C54633FB49234B6AA9B41AE137
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_695702C54633FB49234B6AA9B41AE137()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_695702C54633FB49234B6AA9B41AE137");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_E35B760B4EE50C1458D8C68C248695A6
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_E35B760B4EE50C1458D8C68C248695A6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_E35B760B4EE50C1458D8C68C248695A6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_1AD353304688A57834A282B841F26714
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_1AD353304688A57834A282B841F26714()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_1AD353304688A57834A282B841F26714");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_ED42E7074809269E2AA6FF8449EA5F8F
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_ED42E7074809269E2AA6FF8449EA5F8F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_ED42E7074809269E2AA6FF8449EA5F8F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_DD2DE3A449055779F5374CA78F8A1E10
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_DD2DE3A449055779F5374CA78F8A1E10()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_DD2DE3A449055779F5374CA78F8A1E10");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_A105162245C033B31BC9D2BDED92318F
// (BlueprintEvent)
// Parameters:

void UAmber_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_A105162245C033B31BC9D2BDED92318F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_A105162245C033B31BC9D2BDED92318F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.AnimNotify_MilkBurstR
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAmber_Animation_C::AnimNotify_MilkBurstR()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "AnimNotify_MilkBurstR");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber_Animation.Amber_Animation_C.ExecuteUbergraph_Amber_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmber_Animation_C::ExecuteUbergraph_Amber_Animation(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_Animation_C", "ExecuteUbergraph_Amber_Animation");

	Params::UAmber_Animation_C_ExecuteUbergraph_Amber_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


