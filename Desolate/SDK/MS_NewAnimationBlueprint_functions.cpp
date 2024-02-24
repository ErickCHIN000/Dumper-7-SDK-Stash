#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C
// (None)

class UClass* UMS_NewAnimationBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MS_NewAnimationBlueprint_C");

	return Clss;
}


// MS_NewAnimationBlueprint_C MS_NewAnimationBlueprint.Default__MS_NewAnimationBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMS_NewAnimationBlueprint_C* UMS_NewAnimationBlueprint_C::GetDefaultObj()
{
	static class UMS_NewAnimationBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMS_NewAnimationBlueprint_C*>(UMS_NewAnimationBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMS_NewAnimationBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "AnimGraph");

	Params::UMS_NewAnimationBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.AB_SyncPatrolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMS_PatrolTypes         PatrolType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAIStates               AIState                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMS_NewAnimationBlueprint_C::AB_SyncPatrolType(enum class EMS_PatrolTypes PatrolType, enum class EAIStates AIState, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "AB_SyncPatrolType");

	Params::UMS_NewAnimationBlueprint_C_AB_SyncPatrolType_Params Parms{};

	Parms.PatrolType = PatrolType;
	Parms.AIState = AIState;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.AB_SyncPatrolPoi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMS_PatrolPoiType       PatrolPoiType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMS_NewAnimationBlueprint_C::AB_SyncPatrolPoi(enum class EMS_PatrolPoiType PatrolPoiType, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "AB_SyncPatrolPoi");

	Params::UMS_NewAnimationBlueprint_C_AB_SyncPatrolPoi_Params Parms{};

	Parms.PatrolPoiType = PatrolPoiType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.AB_SyncState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMS_NewAnimationBlueprint_C::AB_SyncState(enum class EAIStates State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "AB_SyncState");

	Params::UMS_NewAnimationBlueprint_C_AB_SyncState_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_268623E14CE6D2726D880095BD9B1F22
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_268623E14CE6D2726D880095BD9B1F22()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_268623E14CE6D2726D880095BD9B1F22");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_4D40BB6F44DC3BDD6310B0BE07B3563A
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_4D40BB6F44DC3BDD6310B0BE07B3563A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_4D40BB6F44DC3BDD6310B0BE07B3563A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_5B9C7FAE46EE11058A6B4E9E794B5331
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_5B9C7FAE46EE11058A6B4E9E794B5331()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_5B9C7FAE46EE11058A6B4E9E794B5331");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_4267C7944A3C8924E57D26B9A6655BE7
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_4267C7944A3C8924E57D26B9A6655BE7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_4267C7944A3C8924E57D26B9A6655BE7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_ECECF2D34EF8C58CCB7ABDB179CC0E90
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_ECECF2D34EF8C58CCB7ABDB179CC0E90()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_ECECF2D34EF8C58CCB7ABDB179CC0E90");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_CB5283604AA13D978CE7C78B4E07C6A2
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_CB5283604AA13D978CE7C78B4E07C6A2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_CB5283604AA13D978CE7C78B4E07C6A2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_0A7E33B34C84F713FAAA2F8EB6649218
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_0A7E33B34C84F713FAAA2F8EB6649218()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_0A7E33B34C84F713FAAA2F8EB6649218");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_7A526A5747E4277D22F1B59BC5C75A4C
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_7A526A5747E4277D22F1B59BC5C75A4C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_7A526A5747E4277D22F1B59BC5C75A4C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_38E53F9D406011C4923C9C92C8737F1D
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_38E53F9D406011C4923C9C92C8737F1D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_38E53F9D406011C4923C9C92C8737F1D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_651A79A842A4FDB25D887DB079ABAC3A
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_651A79A842A4FDB25D887DB079ABAC3A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_651A79A842A4FDB25D887DB079ABAC3A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_D094E77549FE8DADC2585C9064C81674
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_D094E77549FE8DADC2585C9064C81674()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_D094E77549FE8DADC2585C9064C81674");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_3A17A5044B5F53547FBBCAB8CB3C319F
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_3A17A5044B5F53547FBBCAB8CB3C319F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_3A17A5044B5F53547FBBCAB8CB3C319F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_ModifyBone_57D569944EB2CCA55FAD159AFDAE8D9D
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_ModifyBone_57D569944EB2CCA55FAD159AFDAE8D9D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_ModifyBone_57D569944EB2CCA55FAD159AFDAE8D9D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_BlendListByBool_A284B0FB4E490DDCEB736FADB4CBA262
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_BlendListByBool_A284B0FB4E490DDCEB736FADB4CBA262()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_BlendListByBool_A284B0FB4E490DDCEB736FADB4CBA262");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_BlendListByBool_364E040442B5E59EACB86C8156F9EE28
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_BlendListByBool_364E040442B5E59EACB86C8156F9EE28()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_BlendListByBool_364E040442B5E59EACB86C8156F9EE28");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_8DDE56AE4EC9FE04358CE1ABC5C89785
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_8DDE56AE4EC9FE04358CE1ABC5C89785()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_8DDE56AE4EC9FE04358CE1ABC5C89785");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_B44659114DB1254AD5E203942CD60711
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_B44659114DB1254AD5E203942CD60711()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_B44659114DB1254AD5E203942CD60711");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_6916466F4970218A62F04598C7139EE4
// (BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_6916466F4970218A62F04598C7139EE4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_6916466F4970218A62F04598C7139EE4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMS_NewAnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "BlueprintUpdateAnimation");

	Params::UMS_NewAnimationBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "AnimNotify_Footstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.AnimNotify_Play_Fedor_pain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::AnimNotify_Play_Fedor_pain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "AnimNotify_Play_Fedor_pain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.AnimNotify_ThrowStone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::AnimNotify_ThrowStone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "AnimNotify_ThrowStone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.AnimNotify_StopDaze
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMS_NewAnimationBlueprint_C::AnimNotify_StopDaze()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "AnimNotify_StopDaze");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C.ExecuteUbergraph_MS_NewAnimationBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_10                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_11                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_12                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_13                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMS_Character_New_C*         K2Node_DynamicCast_AsMS_Character_New                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnFootStep_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHCharacter*                CallFunc_GetEnemyCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMovingBackwards_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMS_NewAnimationBlueprint_C::ExecuteUbergraph_MS_NewAnimationBlueprint(int32 EntryPoint, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_8, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_9, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10, bool CallFunc_LessEqual_FloatFloat_ReturnValue_11, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12, bool CallFunc_LessEqual_FloatFloat_ReturnValue_12, bool CallFunc_LessEqual_FloatFloat_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_4, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AMS_Character_New_C* K2Node_DynamicCast_AsMS_Character_New, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, float CallFunc_Lerp_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsMovingBackwards_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_NewAnimationBlueprint_C", "ExecuteUbergraph_MS_NewAnimationBlueprint");

	Params::UMS_NewAnimationBlueprint_C_ExecuteUbergraph_MS_NewAnimationBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_3 = CallFunc_LessEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_4 = CallFunc_LessEqual_FloatFloat_ReturnValue_4;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_5 = CallFunc_LessEqual_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_6 = CallFunc_LessEqual_FloatFloat_ReturnValue_6;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_7 = CallFunc_LessEqual_FloatFloat_ReturnValue_7;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_8 = CallFunc_LessEqual_FloatFloat_ReturnValue_8;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_9 = CallFunc_LessEqual_FloatFloat_ReturnValue_9;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_10 = CallFunc_LessEqual_FloatFloat_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_11 = CallFunc_LessEqual_FloatFloat_ReturnValue_11;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_12 = CallFunc_LessEqual_FloatFloat_ReturnValue_12;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_13 = CallFunc_LessEqual_FloatFloat_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsMS_Character_New = K2Node_DynamicCast_AsMS_Character_New;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = CallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_OnFootStep_ReturnValue = CallFunc_OnFootStep_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetEnemyCharacter_ReturnValue = CallFunc_GetEnemyCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsMovingBackwards_ReturnValue = CallFunc_IsMovingBackwards_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


