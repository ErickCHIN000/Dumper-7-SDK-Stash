#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass DemoArsenal_AnimBP.DemoArsenal_AnimBP_C
// (None)

class UClass* UDemoArsenal_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DemoArsenal_AnimBP_C");

	return Clss;
}


// DemoArsenal_AnimBP_C DemoArsenal_AnimBP.Default__DemoArsenal_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDemoArsenal_AnimBP_C* UDemoArsenal_AnimBP_C::GetDefaultObj()
{
	static class UDemoArsenal_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDemoArsenal_AnimBP_C*>(UDemoArsenal_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.SetWaitAnimationID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDemoArsenal_AnimBP_C::SetWaitAnimationID(class FName Selection, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "SetWaitAnimationID");

	Params::UDemoArsenal_AnimBP_C_SetWaitAnimationID_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_BlendListByEnum_2F2CB80E4C79D3B1BF97148ECDB2CDED
// (BlueprintEvent)
// Parameters:

void UDemoArsenal_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_BlendListByEnum_2F2CB80E4C79D3B1BF97148ECDB2CDED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_BlendListByEnum_2F2CB80E4C79D3B1BF97148ECDB2CDED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_3827C6C94045E79A3CE8B9A1908DA1EB
// (BlueprintEvent)
// Parameters:

void UDemoArsenal_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_3827C6C94045E79A3CE8B9A1908DA1EB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_3827C6C94045E79A3CE8B9A1908DA1EB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_7661B47942247156E3B620AB9DB8F954
// (BlueprintEvent)
// Parameters:

void UDemoArsenal_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_7661B47942247156E3B620AB9DB8F954()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_7661B47942247156E3B620AB9DB8F954");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_07E631994BF5E8B8F7895DA2C97873C4
// (BlueprintEvent)
// Parameters:

void UDemoArsenal_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_07E631994BF5E8B8F7895DA2C97873C4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_07E631994BF5E8B8F7895DA2C97873C4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_4C3277994E41525A87FB81BD1EAE4083
// (BlueprintEvent)
// Parameters:

void UDemoArsenal_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_4C3277994E41525A87FB81BD1EAE4083()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_4C3277994E41525A87FB81BD1EAE4083");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_TransitionResult_DDBD843347A08D113839CD8E539B241D
// (BlueprintEvent)
// Parameters:

void UDemoArsenal_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_TransitionResult_DDBD843347A08D113839CD8E539B241D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_TransitionResult_DDBD843347A08D113839CD8E539B241D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_TransitionResult_093241D447E7BE515CB32E8552ADE744
// (BlueprintEvent)
// Parameters:

void UDemoArsenal_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_TransitionResult_093241D447E7BE515CB32E8552ADE744()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_TransitionResult_093241D447E7BE515CB32E8552ADE744");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDemoArsenal_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UDemoArsenal_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.StartMessageWaitBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AnimationName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDemoArsenal_AnimBP_C::StartMessageWaitBP(class FName AnimationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "StartMessageWaitBP");

	Params::UDemoArsenal_AnimBP_C_StartMessageWaitBP_Params Parms{};

	Parms.AnimationName = AnimationName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.EndMessageWaitBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDemoArsenal_AnimBP_C::EndMessageWaitBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "EndMessageWaitBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DemoArsenal_AnimBP.DemoArsenal_AnimBP_C.ExecuteUbergraph_DemoArsenal_AnimBP
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateParaameters_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_NegateVector_ReturnValue1                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_AnimationName                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDemoArsenal_AnimBP_C::ExecuteUbergraph_DemoArsenal_AnimBP(int32 EntryPoint, bool CallFunc_UpdateParaameters_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue1, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class FName K2Node_Event_AnimationName, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoArsenal_AnimBP_C", "ExecuteUbergraph_DemoArsenal_AnimBP");

	Params::UDemoArsenal_AnimBP_C_ExecuteUbergraph_DemoArsenal_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_UpdateParaameters_ReturnValue = CallFunc_UpdateParaameters_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NegateVector_ReturnValue = CallFunc_NegateVector_ReturnValue;
	Parms.CallFunc_NegateVector_ReturnValue1 = CallFunc_NegateVector_ReturnValue1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_Event_AnimationName = K2Node_Event_AnimationName;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


