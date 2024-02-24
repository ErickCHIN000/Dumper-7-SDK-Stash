#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SampleAIController.SampleAIController_C
// (Actor)

class UClass* ASampleAIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SampleAIController_C");

	return Clss;
}


// SampleAIController_C SampleAIController.Default__SampleAIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASampleAIController_C* ASampleAIController_C::GetDefaultObj()
{
	static class ASampleAIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASampleAIController_C*>(ASampleAIController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SampleAIController.SampleAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASampleAIController_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SampleAIController_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SampleAIController.SampleAIController_C.AIProcess
// (Event, Public, BlueprintEvent)
// Parameters:

void ASampleAIController_C::AIProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SampleAIController_C", "AIProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SampleAIController.SampleAIController_C.AIInit
// (Event, Public, BlueprintEvent)
// Parameters:

void ASampleAIController_C::AIInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SampleAIController_C", "AIInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SampleAIController.SampleAIController_C.AIReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ETTLAIReaction          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLAIReactionParam         Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASampleAIController_C::AIReaction(enum class ETTLAIReaction Type, const struct FTTLAIReactionParam& Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SampleAIController_C", "AIReaction");

	Params::ASampleAIController_C_AIReaction_Params Parms{};

	Parms.Type = Type;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SampleAIController.SampleAIController_C.RunOnServerAIProcess
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASampleAIController_C::RunOnServerAIProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SampleAIController_C", "RunOnServerAIProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SampleAIController.SampleAIController_C.ExecuteUbergraph_SampleAIController
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckHPLessThan_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckDistanceLessThan_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckMoveType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckMoveType_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionChangeMoveType_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FinishParallelAttack_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionKeepDistance_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAIFlag_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLAIReaction          K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLAIReactionParam         K2Node_Event_param                                               (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AI_________BattleDistance                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionGoAroundSide_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASampleAIController_C::ExecuteUbergraph_SampleAIController(int32 EntryPoint, bool CallFunc_CheckHPLessThan_ReturnValue, bool CallFunc_CheckDistanceLessThan_ReturnValue, bool CallFunc_CheckMoveType_ReturnValue, bool CallFunc_CheckMoveType_ReturnValue1, bool CallFunc_ActionChangeMoveType_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_FinishParallelAttack_ReturnValue, bool CallFunc_ActionKeepDistance_ReturnValue, bool CallFunc_GetAIFlag_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ETTLAIReaction K2Node_Event_Type, const struct FTTLAIReactionParam& K2Node_Event_param, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_AI_________BattleDistance, bool CallFunc_ActionGoAroundSide_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SampleAIController_C", "ExecuteUbergraph_SampleAIController");

	Params::ASampleAIController_C_ExecuteUbergraph_SampleAIController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CheckHPLessThan_ReturnValue = CallFunc_CheckHPLessThan_ReturnValue;
	Parms.CallFunc_CheckDistanceLessThan_ReturnValue = CallFunc_CheckDistanceLessThan_ReturnValue;
	Parms.CallFunc_CheckMoveType_ReturnValue = CallFunc_CheckMoveType_ReturnValue;
	Parms.CallFunc_CheckMoveType_ReturnValue1 = CallFunc_CheckMoveType_ReturnValue1;
	Parms.CallFunc_ActionChangeMoveType_ReturnValue = CallFunc_ActionChangeMoveType_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_FinishParallelAttack_ReturnValue = CallFunc_FinishParallelAttack_ReturnValue;
	Parms.CallFunc_ActionKeepDistance_ReturnValue = CallFunc_ActionKeepDistance_ReturnValue;
	Parms.CallFunc_GetAIFlag_ReturnValue = CallFunc_GetAIFlag_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Event_param = K2Node_Event_param;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AI_________BattleDistance = CallFunc_AI_________BattleDistance;
	Parms.CallFunc_ActionGoAroundSide_ReturnValue = CallFunc_ActionGoAroundSide_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


