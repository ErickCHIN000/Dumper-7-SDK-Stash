#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FesssiAnimation.FesssiAnimation_C
// (None)

class UClass* UFesssiAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiAnimation_C");

	return Clss;
}


// FesssiAnimation_C FesssiAnimation.Default__FesssiAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiAnimation_C* UFesssiAnimation_C::GetDefaultObj()
{
	static class UFesssiAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiAnimation_C*>(UFesssiAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FesssiAnimation.FesssiAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFesssiAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "AnimGraph");

	Params::UFesssiAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_7833307743CE382C63EB7A989C5BB263
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_7833307743CE382C63EB7A989C5BB263()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_7833307743CE382C63EB7A989C5BB263");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_2639ABE14ECB256CD473C68CD43CFE39
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_2639ABE14ECB256CD473C68CD43CFE39()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_2639ABE14ECB256CD473C68CD43CFE39");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_4B3C98F9487BA5C3DCCCB388D0B6615E
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_4B3C98F9487BA5C3DCCCB388D0B6615E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_4B3C98F9487BA5C3DCCCB388D0B6615E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_E042EF07409062E84E748BBE93C22E2E
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_E042EF07409062E84E748BBE93C22E2E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_E042EF07409062E84E748BBE93C22E2E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_10B4C73F4CE825B76F01549285292F07
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_10B4C73F4CE825B76F01549285292F07()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_10B4C73F4CE825B76F01549285292F07");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_E03D67DF48CD14E8A0F64782F3EC494F
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_E03D67DF48CD14E8A0F64782F3EC494F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_E03D67DF48CD14E8A0F64782F3EC494F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_0F1F31DB40A69E31DBCD91B9A7E1ADF7
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_0F1F31DB40A69E31DBCD91B9A7E1ADF7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_0F1F31DB40A69E31DBCD91B9A7E1ADF7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_195B05A04D0ABDE10D7CD99CD0669642
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_195B05A04D0ABDE10D7CD99CD0669642()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_195B05A04D0ABDE10D7CD99CD0669642");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_174FF5D044EE15204BC879A8E0525898
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_174FF5D044EE15204BC879A8E0525898()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_174FF5D044EE15204BC879A8E0525898");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_LookAt_772A109B4D0466C9F53A6F94CDBDA60C
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_LookAt_772A109B4D0466C9F53A6F94CDBDA60C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_LookAt_772A109B4D0466C9F53A6F94CDBDA60C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_E80473F744709DF79D81FA840FBAEF60
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_E80473F744709DF79D81FA840FBAEF60()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_E80473F744709DF79D81FA840FBAEF60");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_C98CE0FD473E7E06344DD79CAC1F081D
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_C98CE0FD473E7E06344DD79CAC1F081D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_C98CE0FD473E7E06344DD79CAC1F081D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_07775ADD413A7C7511E1B48348F75A15
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_07775ADD413A7C7511E1B48348F75A15()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_07775ADD413A7C7511E1B48348F75A15");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_2BABA0A44ACCA35E209C9984D8FBAAFC
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_2BABA0A44ACCA35E209C9984D8FBAAFC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_2BABA0A44ACCA35E209C9984D8FBAAFC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_B8FB7E7A434183C38D47F3A6FFCD278F
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_B8FB7E7A434183C38D47F3A6FFCD278F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_B8FB7E7A434183C38D47F3A6FFCD278F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_53DBCBF64AFF00558DF61B83F76BC74E
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_53DBCBF64AFF00558DF61B83F76BC74E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_53DBCBF64AFF00558DF61B83F76BC74E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_FC46E0FE46FA904E9914A5B0668BBEEB
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_FC46E0FE46FA904E9914A5B0668BBEEB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_FC46E0FE46FA904E9914A5B0668BBEEB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_919851D24CBD2BE9BB910DA2F91DE033
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_919851D24CBD2BE9BB910DA2F91DE033()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_919851D24CBD2BE9BB910DA2F91DE033");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_5E2F50D54877DE973185B1AF934CB68A
// (BlueprintEvent)
// Parameters:

void UFesssiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_5E2F50D54877DE973185B1AF934CB68A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_5E2F50D54877DE973185B1AF934CB68A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FesssiAnimation.FesssiAnimation_C.ExecuteUbergraph_FesssiAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFesssiAnimation_C::ExecuteUbergraph_FesssiAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FesssiAnimation_C", "ExecuteUbergraph_FesssiAnimation");

	Params::UFesssiAnimation_C_ExecuteUbergraph_FesssiAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


