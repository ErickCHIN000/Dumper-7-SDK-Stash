#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C
// (None)

class UClass* UGenericNPC_AnimationBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericNPC_AnimationBlueprint_C");

	return Clss;
}


// GenericNPC_AnimationBlueprint_C GenericNPC_AnimationBlueprint.Default__GenericNPC_AnimationBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGenericNPC_AnimationBlueprint_C* UGenericNPC_AnimationBlueprint_C::GetDefaultObj()
{
	static class UGenericNPC_AnimationBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenericNPC_AnimationBlueprint_C*>(UGenericNPC_AnimationBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGenericNPC_AnimationBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimGraph");

	Params::UGenericNPC_AnimationBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AB SyncPatrolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGenericNPC_PatrolTypes PatrolType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGenericNPC_AnimationBlueprint_C::AB_SyncPatrolType(enum class EGenericNPC_PatrolTypes PatrolType, enum class EAIStates State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AB SyncPatrolType");

	Params::UGenericNPC_AnimationBlueprint_C_AB_SyncPatrolType_Params Parms{};

	Parms.PatrolType = PatrolType;
	Parms.State = State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               AIState                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGenericNPC_AnimationBlueprint_C::UpdateState(enum class EAIStates AIState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "UpdateState");

	Params::UGenericNPC_AnimationBlueprint_C_UpdateState_Params Parms{};

	Parms.AIState = AIState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_6245C9E64B99C0099381EAA32A6D0932
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_6245C9E64B99C0099381EAA32A6D0932()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_6245C9E64B99C0099381EAA32A6D0932");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_7CAF1FAE48C9A60A530D4F8FE1423692
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_7CAF1FAE48C9A60A530D4F8FE1423692()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_7CAF1FAE48C9A60A530D4F8FE1423692");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_B2FEBFA341E5B2E143A0709CA098B435
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_B2FEBFA341E5B2E143A0709CA098B435()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_B2FEBFA341E5B2E143A0709CA098B435");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_B504D1D64E16B8B6F3A7FFAEE759C054
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_B504D1D64E16B8B6F3A7FFAEE759C054()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_B504D1D64E16B8B6F3A7FFAEE759C054");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_A5CD404649F2CACB0A3A7293D84858C9
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_A5CD404649F2CACB0A3A7293D84858C9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_A5CD404649F2CACB0A3A7293D84858C9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_38808DEE49084A3D42E4F1886BF6BECC
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_38808DEE49084A3D42E4F1886BF6BECC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_38808DEE49084A3D42E4F1886BF6BECC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_F731B6D1487AC7CB6790C0A6644D8F23
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_F731B6D1487AC7CB6790C0A6644D8F23()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_F731B6D1487AC7CB6790C0A6644D8F23");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_F12F4A90425F8FC077E51BAE14089BAF
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_F12F4A90425F8FC077E51BAE14089BAF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_F12F4A90425F8FC077E51BAE14089BAF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_C251144D46D744A4C80CBB8512B0555F
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_C251144D46D744A4C80CBB8512B0555F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_C251144D46D744A4C80CBB8512B0555F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_C28F0C3945430FC5D6D36FA4C3ECC24E
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_C28F0C3945430FC5D6D36FA4C3ECC24E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_C28F0C3945430FC5D6D36FA4C3ECC24E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_1F08B42140EC239642BAB5851A2E546E
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_1F08B42140EC239642BAB5851A2E546E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_1F08B42140EC239642BAB5851A2E546E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_BEBB365541BF083F2B68C5AB41FF9DEE
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_BEBB365541BF083F2B68C5AB41FF9DEE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_BEBB365541BF083F2B68C5AB41FF9DEE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_7C1521CF41BB9559105674B205065F67
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_7C1521CF41BB9559105674B205065F67()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_7C1521CF41BB9559105674B205065F67");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_8EBAC33D4DC6D38018858FB52A78728B
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_8EBAC33D4DC6D38018858FB52A78728B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_8EBAC33D4DC6D38018858FB52A78728B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_868EA94C4736A5C0C6C62CB1130D56A7
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_868EA94C4736A5C0C6C62CB1130D56A7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_868EA94C4736A5C0C6C62CB1130D56A7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_ModifyBone_3A76559C417D417B5E90BA935BFF5A5C
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_ModifyBone_3A76559C417D417B5E90BA935BFF5A5C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_ModifyBone_3A76559C417D417B5E90BA935BFF5A5C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_4627E8644550C8BAF6F55188568DF9AD
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_4627E8644550C8BAF6F55188568DF9AD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_4627E8644550C8BAF6F55188568DF9AD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_88599F5849732C48960785B48EE73560
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_88599F5849732C48960785B48EE73560()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_88599F5849732C48960785B48EE73560");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_4C1329C449299C5601919DB2E6B24F7F
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_4C1329C449299C5601919DB2E6B24F7F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_4C1329C449299C5601919DB2E6B24F7F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_A3DD4E0B45D671F8963AE6BF39565E6C
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_A3DD4E0B45D671F8963AE6BF39565E6C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_A3DD4E0B45D671F8963AE6BF39565E6C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_CAE48E9D4A8A3652FE2E6E80902E4F76
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_CAE48E9D4A8A3652FE2E6E80902E4F76()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_CAE48E9D4A8A3652FE2E6E80902E4F76");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_D1D995DA40486FAB39FAD9A0BD85966D
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_D1D995DA40486FAB39FAD9A0BD85966D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_D1D995DA40486FAB39FAD9A0BD85966D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_DCA26F184E72EE2F37CC7B98665C547E
// (BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_DCA26F184E72EE2F37CC7B98665C547E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_DCA26F184E72EE2F37CC7B98665C547E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericNPC_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "BlueprintUpdateAnimation");

	Params::UGenericNPC_AnimationBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_StartHeal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_StartHeal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_StartHeal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_AiThrowStone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_AiThrowStone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_AiThrowStone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_Footstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_StopDaze
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_StopDaze()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_StopDaze");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_AggroEmotionPlayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_AggroEmotionPlayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_AggroEmotionPlayed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_FlamerStartIdleAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_FlamerStartIdleAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_FlamerStartIdleAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_FlamerStopIdleAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_FlamerStopIdleAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_FlamerStopIdleAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_BeheadedDisableBomb
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_BeheadedDisableBomb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_BeheadedDisableBomb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_BeheadedEnableBomb
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_BeheadedEnableBomb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_BeheadedEnableBomb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_GNPC_TaranAttackStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_GNPC_TaranAttackStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_GNPC_TaranAttackStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_GNPC_TaranAttackUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_GNPC_TaranAttackUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_GNPC_TaranAttackUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_GNPC_TaranAttackStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_GNPC_TaranAttackStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_GNPC_TaranAttackStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.AnimNotify_GNPC_MeleeAoeJumpDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGenericNPC_AnimationBlueprint_C::AnimNotify_GNPC_MeleeAoeJumpDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "AnimNotify_GNPC_MeleeAoeJumpDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C.ExecuteUbergraph_GenericNPC_AnimationBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_10                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_11                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_12                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_13(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_13                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericNPC_Character_C*     K2Node_DynamicCast_AsGeneric_NPC_Character                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHCharacter*                CallFunc_GetEnemyCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetAimOffsets_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_14                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_15                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnFootStep_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_14(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_16                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_17                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANewLight_Flamethrower_Character_C*K2Node_DynamicCast_AsNew_Light_Flamethrower_Character            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ANewLight_Flamethrower_Character_C*K2Node_DynamicCast_AsNew_Light_Flamethrower_Character_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABandit_Beheaded_Character_C*K2Node_DynamicCast_AsBandit_Beheaded_Character                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABandit_Beheaded_Character_C*K2Node_DynamicCast_AsBandit_Beheaded_Character_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGenericNPC_AnimationBlueprint_C::ExecuteUbergraph_GenericNPC_AnimationBlueprint(int32 EntryPoint, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, int32 CallFunc_Round_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Round_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_8, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9, bool CallFunc_LessEqual_FloatFloat_ReturnValue_9, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10, bool CallFunc_LessEqual_FloatFloat_ReturnValue_10, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11, bool CallFunc_LessEqual_FloatFloat_ReturnValue_11, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_12, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_13, bool CallFunc_LessEqual_FloatFloat_ReturnValue_13, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AGenericNPC_Character_C* K2Node_DynamicCast_AsGeneric_NPC_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, const struct FRotator& CallFunc_GetAimOffsets_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_14, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_OnFootStep_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_7, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_14, bool CallFunc_LessEqual_FloatFloat_ReturnValue_16, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, class ANewLight_Flamethrower_Character_C* K2Node_DynamicCast_AsNew_Light_Flamethrower_Character, bool K2Node_DynamicCast_bSuccess_1, class ANewLight_Flamethrower_Character_C* K2Node_DynamicCast_AsNew_Light_Flamethrower_Character_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_4, class ABandit_Beheaded_Character_C* K2Node_DynamicCast_AsBandit_Beheaded_Character, bool K2Node_DynamicCast_bSuccess_3, class ABandit_Beheaded_Character_C* K2Node_DynamicCast_AsBandit_Beheaded_Character_1, bool K2Node_DynamicCast_bSuccess_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_AnimationBlueprint_C", "ExecuteUbergraph_GenericNPC_AnimationBlueprint");

	Params::UGenericNPC_AnimationBlueprint_C_ExecuteUbergraph_GenericNPC_AnimationBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_3 = CallFunc_LessEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_4 = CallFunc_LessEqual_FloatFloat_ReturnValue_4;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_5 = CallFunc_LessEqual_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_6 = CallFunc_LessEqual_FloatFloat_ReturnValue_6;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_7 = CallFunc_LessEqual_FloatFloat_ReturnValue_7;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_8 = CallFunc_LessEqual_FloatFloat_ReturnValue_8;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_9 = CallFunc_LessEqual_FloatFloat_ReturnValue_9;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_10 = CallFunc_LessEqual_FloatFloat_ReturnValue_10;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_11 = CallFunc_LessEqual_FloatFloat_ReturnValue_11;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_12 = CallFunc_LessEqual_FloatFloat_ReturnValue_12;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_13 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_13;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_13 = CallFunc_LessEqual_FloatFloat_ReturnValue_13;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGeneric_NPC_Character = K2Node_DynamicCast_AsGeneric_NPC_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_GetEnemyCharacter_ReturnValue = CallFunc_GetEnemyCharacter_ReturnValue;
	Parms.CallFunc_GetAimOffsets_ReturnValue = CallFunc_GetAimOffsets_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_14 = CallFunc_LessEqual_FloatFloat_ReturnValue_14;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = CallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_15 = CallFunc_LessEqual_FloatFloat_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_OnFootStep_ReturnValue = CallFunc_OnFootStep_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_5 = CallFunc_Divide_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_6 = CallFunc_Divide_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_7 = CallFunc_Divide_FloatFloat_ReturnValue_7;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_14 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_14;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_16 = CallFunc_LessEqual_FloatFloat_ReturnValue_16;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_17 = CallFunc_LessEqual_FloatFloat_ReturnValue_17;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_2 = CallFunc_TryGetPawnOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsNew_Light_Flamethrower_Character = K2Node_DynamicCast_AsNew_Light_Flamethrower_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsNew_Light_Flamethrower_Character_1 = K2Node_DynamicCast_AsNew_Light_Flamethrower_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_3 = CallFunc_TryGetPawnOwner_ReturnValue_3;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_4 = CallFunc_TryGetPawnOwner_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBandit_Beheaded_Character = K2Node_DynamicCast_AsBandit_Beheaded_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBandit_Beheaded_Character_1 = K2Node_DynamicCast_AsBandit_Beheaded_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;

	UObject::ProcessEvent(Func, &Parms);

}

}


