#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Dog_AnimBlueprint.Dog_AnimBlueprint_C
// (None)

class UClass* UDog_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dog_AnimBlueprint_C");

	return Clss;
}


// Dog_AnimBlueprint_C Dog_AnimBlueprint.Default__Dog_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDog_AnimBlueprint_C* UDog_AnimBlueprint_C::GetDefaultObj()
{
	static class UDog_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDog_AnimBlueprint_C*>(UDog_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UDog_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "AnimGraph");

	Params::UDog_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.AB_SyncState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDog_AnimBlueprint_C::AB_SyncState(enum class EAIStates State, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "AB_SyncState");

	Params::UDog_AnimBlueprint_C_AB_SyncState_Params Parms{};

	Parms.State = State;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.AB_SyncPoiType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDog_PatrolPoiType      Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDog_AnimBlueprint_C::AB_SyncPoiType(enum class EDog_PatrolPoiType Type, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "AB_SyncPoiType");

	Params::UDog_AnimBlueprint_C_AB_SyncPoiType_Params Parms{};

	Parms.Type = Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_165CE083435996CD939E72A842D2CC25
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_165CE083435996CD939E72A842D2CC25()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_165CE083435996CD939E72A842D2CC25");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_EC0C0E254FDCE0C107EB90B63C38A274
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_EC0C0E254FDCE0C107EB90B63C38A274()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_EC0C0E254FDCE0C107EB90B63C38A274");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_4FA7164A4FC0B2DC10E2E79AA6650EBB
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_4FA7164A4FC0B2DC10E2E79AA6650EBB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_4FA7164A4FC0B2DC10E2E79AA6650EBB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_71392C2440ED3C9210E2D384E9095B90
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_71392C2440ED3C9210E2D384E9095B90()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_71392C2440ED3C9210E2D384E9095B90");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_8F2DEBE2416EC03508AAEE93410C28E7
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_8F2DEBE2416EC03508AAEE93410C28E7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_8F2DEBE2416EC03508AAEE93410C28E7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_F0302B964BBA278F307771BED5A4B4D5
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_F0302B964BBA278F307771BED5A4B4D5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_F0302B964BBA278F307771BED5A4B4D5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_BEA2A6C94C2BF856F935B7A58622B2A3
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_BEA2A6C94C2BF856F935B7A58622B2A3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_BEA2A6C94C2BF856F935B7A58622B2A3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_3998CB81485B91A06C15178D916A1351
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_3998CB81485B91A06C15178D916A1351()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_3998CB81485B91A06C15178D916A1351");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_8AFC78A441A916656C16088B806A479A
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_8AFC78A441A916656C16088B806A479A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_8AFC78A441A916656C16088B806A479A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_D0B6DDFD46FA5F9F290E108490EF7378
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_D0B6DDFD46FA5F9F290E108490EF7378()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_D0B6DDFD46FA5F9F290E108490EF7378");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_14002A424BB23689E76899954F8F962D
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_14002A424BB23689E76899954F8F962D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_14002A424BB23689E76899954F8F962D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_5F2A17124A160A434F0BE7AF9EF747B3
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_5F2A17124A160A434F0BE7AF9EF747B3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_5F2A17124A160A434F0BE7AF9EF747B3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_2DB83CA6402C75C3C9546EA9312AD83B
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_2DB83CA6402C75C3C9546EA9312AD83B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_2DB83CA6402C75C3C9546EA9312AD83B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_ModifyBone_3D1DA2EA46E713EC0F0BCC8626C70E32
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_ModifyBone_3D1DA2EA46E713EC0F0BCC8626C70E32()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_ModifyBone_3D1DA2EA46E713EC0F0BCC8626C70E32");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_CD6F9C6447AAD386C1FC1282B34BC20D
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_CD6F9C6447AAD386C1FC1282B34BC20D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_CD6F9C6447AAD386C1FC1282B34BC20D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_D2DA71E34B0B75E129716AA16FF7B574
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_D2DA71E34B0B75E129716AA16FF7B574()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_D2DA71E34B0B75E129716AA16FF7B574");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_FD5F1EB74F65360AD036CDAC3E771172
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_FD5F1EB74F65360AD036CDAC3E771172()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_FD5F1EB74F65360AD036CDAC3E771172");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_A97C0DBB402FA4228F52D899E85EDF76
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_A97C0DBB402FA4228F52D899E85EDF76()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_A97C0DBB402FA4228F52D899E85EDF76");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_CD53501042147FE2EA7979BBDEC8C65B
// (BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_CD53501042147FE2EA7979BBDEC8C65B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_CD53501042147FE2EA7979BBDEC8C65B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDog_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UDog_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDog_AnimBlueprint_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "AnimNotify_Footstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_AnimBlueprint.Dog_AnimBlueprint_C.ExecuteUbergraph_Dog_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_10                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_11                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_12                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_13                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADog_Character_C*            K2Node_DynamicCast_AsDog_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnFootStep_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHCharacter*                CallFunc_GetEnemyCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_14                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDog_AnimBlueprint_C::ExecuteUbergraph_Dog_AnimBlueprint(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_8, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_9, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_10, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_11, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11, bool CallFunc_LessEqual_FloatFloat_ReturnValue_12, bool CallFunc_LessEqual_FloatFloat_ReturnValue_13, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ADog_Character_C* K2Node_DynamicCast_AsDog_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12, bool CallFunc_LessEqual_FloatFloat_ReturnValue_14, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_AnimBlueprint_C", "ExecuteUbergraph_Dog_AnimBlueprint");

	Params::UDog_AnimBlueprint_C_ExecuteUbergraph_Dog_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue = CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1 = CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_3 = CallFunc_LessEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_4 = CallFunc_LessEqual_FloatFloat_ReturnValue_4;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_5 = CallFunc_LessEqual_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_6 = CallFunc_LessEqual_FloatFloat_ReturnValue_6;
	Parms.CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_2 = CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_7 = CallFunc_LessEqual_FloatFloat_ReturnValue_7;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_8 = CallFunc_LessEqual_FloatFloat_ReturnValue_8;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_9 = CallFunc_LessEqual_FloatFloat_ReturnValue_9;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_10 = CallFunc_LessEqual_FloatFloat_ReturnValue_10;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_11 = CallFunc_LessEqual_FloatFloat_ReturnValue_11;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_12 = CallFunc_LessEqual_FloatFloat_ReturnValue_12;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_13 = CallFunc_LessEqual_FloatFloat_ReturnValue_13;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsDog_Character = K2Node_DynamicCast_AsDog_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_OnFootStep_ReturnValue = CallFunc_OnFootStep_ReturnValue;
	Parms.CallFunc_GetEnemyCharacter_ReturnValue = CallFunc_GetEnemyCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_14 = CallFunc_LessEqual_FloatFloat_ReturnValue_14;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


