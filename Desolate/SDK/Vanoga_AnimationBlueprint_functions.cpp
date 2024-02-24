#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C
// (None)

class UClass* UVanoga_AnimationBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vanoga_AnimationBlueprint_C");

	return Clss;
}


// Vanoga_AnimationBlueprint_C Vanoga_AnimationBlueprint.Default__Vanoga_AnimationBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVanoga_AnimationBlueprint_C* UVanoga_AnimationBlueprint_C::GetDefaultObj()
{
	static class UVanoga_AnimationBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVanoga_AnimationBlueprint_C*>(UVanoga_AnimationBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UVanoga_AnimationBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "AnimGraph");

	Params::UVanoga_AnimationBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.AB_SyncPatrolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVanoga_PatrolTypes     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVanoga_AnimationBlueprint_C::AB_SyncPatrolType(enum class EVanoga_PatrolTypes Type, enum class EAIStates State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "AB_SyncPatrolType");

	Params::UVanoga_AnimationBlueprint_C_AB_SyncPatrolType_Params Parms{};

	Parms.Type = Type;
	Parms.State = State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.AB_SyncPatrolPoi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVanoga_PatrolPoiType   PatrolPoiType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVanoga_AnimationBlueprint_C::AB_SyncPatrolPoi(enum class EVanoga_PatrolPoiType PatrolPoiType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "AB_SyncPatrolPoi");

	Params::UVanoga_AnimationBlueprint_C_AB_SyncPatrolPoi_Params Parms{};

	Parms.PatrolPoiType = PatrolPoiType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.AB_SyncState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVanoga_AnimationBlueprint_C::AB_SyncState(enum class EAIStates State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "AB_SyncState");

	Params::UVanoga_AnimationBlueprint_C_AB_SyncState_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_7D8699874FE83077F532FFA665E1EBE9
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_7D8699874FE83077F532FFA665E1EBE9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_7D8699874FE83077F532FFA665E1EBE9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_510E4E764989AE0ED577A9B6E0A4CAAD
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_510E4E764989AE0ED577A9B6E0A4CAAD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_510E4E764989AE0ED577A9B6E0A4CAAD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_859B7BF54B86436AE646E7B8A06B005F
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_859B7BF54B86436AE646E7B8A06B005F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_859B7BF54B86436AE646E7B8A06B005F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E17F122440EA96FCA4273C9521696526
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E17F122440EA96FCA4273C9521696526()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E17F122440EA96FCA4273C9521696526");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_850346AA4BFAC37F2C8F3C84837573B6
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_850346AA4BFAC37F2C8F3C84837573B6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_850346AA4BFAC37F2C8F3C84837573B6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_2A0C25074C4CCF01D31708AEE84A321F
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_2A0C25074C4CCF01D31708AEE84A321F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_2A0C25074C4CCF01D31708AEE84A321F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_60763C2D440B9D4E6EF20AAD9849BB6C
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_60763C2D440B9D4E6EF20AAD9849BB6C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_60763C2D440B9D4E6EF20AAD9849BB6C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_D40F4A39472CF5A6384E31B4E606C014
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_D40F4A39472CF5A6384E31B4E606C014()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_D40F4A39472CF5A6384E31B4E606C014");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E4AD527C4401366EB138148AB42B6119
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E4AD527C4401366EB138148AB42B6119()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E4AD527C4401366EB138148AB42B6119");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_C5FF2EBD47D64FCA34B7AA90A285A3FE
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_C5FF2EBD47D64FCA34B7AA90A285A3FE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_C5FF2EBD47D64FCA34B7AA90A285A3FE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_8641ED6A41DB8E41364201A92AC55333
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_8641ED6A41DB8E41364201A92AC55333()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_8641ED6A41DB8E41364201A92AC55333");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_C9F230C343F2499E72EF3C95283CC5BD
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_C9F230C343F2499E72EF3C95283CC5BD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_C9F230C343F2499E72EF3C95283CC5BD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_ModifyBone_81940B4E4F13988333C68BACA519118E
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_ModifyBone_81940B4E4F13988333C68BACA519118E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_ModifyBone_81940B4E4F13988333C68BACA519118E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E32E297649B186F662017F89B67C0874
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E32E297649B186F662017F89B67C0874()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E32E297649B186F662017F89B67C0874");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_859283B64607572B9F49BE961AC62EDA
// (BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_859283B64607572B9F49BE961AC62EDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_859283B64607572B9F49BE961AC62EDA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVanoga_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "BlueprintUpdateAnimation");

	Params::UVanoga_AnimationBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "AnimNotify_Footstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.AnimNotify_RangedAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::AnimNotify_RangedAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "AnimNotify_RangedAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.AnimNotify_Vanoga_SpawnFirstMine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::AnimNotify_Vanoga_SpawnFirstMine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "AnimNotify_Vanoga_SpawnFirstMine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.AnimNotify_Vanoga_SpawnSecondMine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::AnimNotify_Vanoga_SpawnSecondMine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "AnimNotify_Vanoga_SpawnSecondMine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.AnimNotify_Vanoga_SpawnThirdMine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::AnimNotify_Vanoga_SpawnThirdMine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "AnimNotify_Vanoga_SpawnThirdMine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.AnimNotify_VanogaCircularAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVanoga_AnimationBlueprint_C::AnimNotify_VanogaCircularAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "AnimNotify_VanogaCircularAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C.ExecuteUbergraph_Vanoga_AnimationBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_10                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVanoga_Character_C*         K2Node_DynamicCast_AsVanoga_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnFootStep_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHCharacter*                CallFunc_GetEnemyCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_11                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetAimOffsets_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_12                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVanoga_AnimationBlueprint_C::ExecuteUbergraph_Vanoga_AnimationBlueprint(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_8, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9, bool CallFunc_LessEqual_FloatFloat_ReturnValue_9, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10, bool CallFunc_LessEqual_FloatFloat_ReturnValue_10, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AVanoga_Character_C* K2Node_DynamicCast_AsVanoga_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_11, const struct FRotator& CallFunc_GetAimOffsets_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_12, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_AnimationBlueprint_C", "ExecuteUbergraph_Vanoga_AnimationBlueprint");

	Params::UVanoga_AnimationBlueprint_C_ExecuteUbergraph_Vanoga_AnimationBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_3 = CallFunc_LessEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_4 = CallFunc_LessEqual_FloatFloat_ReturnValue_4;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_5 = CallFunc_LessEqual_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_6 = CallFunc_LessEqual_FloatFloat_ReturnValue_6;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_7 = CallFunc_LessEqual_FloatFloat_ReturnValue_7;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_8 = CallFunc_LessEqual_FloatFloat_ReturnValue_8;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_9 = CallFunc_LessEqual_FloatFloat_ReturnValue_9;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_10 = CallFunc_LessEqual_FloatFloat_ReturnValue_10;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsVanoga_Character = K2Node_DynamicCast_AsVanoga_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_OnFootStep_ReturnValue = CallFunc_OnFootStep_ReturnValue;
	Parms.CallFunc_GetEnemyCharacter_ReturnValue = CallFunc_GetEnemyCharacter_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_11 = CallFunc_LessEqual_FloatFloat_ReturnValue_11;
	Parms.CallFunc_GetAimOffsets_ReturnValue = CallFunc_GetAimOffsets_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_12 = CallFunc_LessEqual_FloatFloat_ReturnValue_12;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


