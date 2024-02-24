#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_NPC_Barrett_009.AI_NPC_Barrett_009_C
// (Actor)

class UClass* AAI_NPC_Barrett_009_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_NPC_Barrett_009_C");

	return Clss;
}


// AI_NPC_Barrett_009_C AI_NPC_Barrett_009.Default__AI_NPC_Barrett_009_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAI_NPC_Barrett_009_C* AAI_NPC_Barrett_009_C::GetDefaultObj()
{
	static class AAI_NPC_Barrett_009_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAI_NPC_Barrett_009_C*>(AAI_NPC_Barrett_009_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AI ÒÃÈ¢óÉ¢¦§¤LÕâŒ‹
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InputBoolFlag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               L__K__                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValueFlag                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT____________________2_______                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT____________________2_ReturnValueFlag       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAI_NPC_Barrett_009_C::AI___________L____(bool InputBoolFlag, bool* L__K__, bool* ReturnValueFlag, bool CallFunc_PresetAI_ACT____________________2_______, bool CallFunc_PresetAI_ACT____________________2_ReturnValueFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_NPC_Barrett_009_C", "AI ÒÃÈ¢óÉ¢¦§¤LÕâŒ‹");

	Params::AAI_NPC_Barrett_009_C_AI___________L_____Params Parms{};

	Parms.InputBoolFlag = InputBoolFlag;
	Parms.CallFunc_PresetAI_ACT____________________2_______ = CallFunc_PresetAI_ACT____________________2_______;
	Parms.CallFunc_PresetAI_ACT____________________2_ReturnValueFlag = CallFunc_PresetAI_ACT____________________2_ReturnValueFlag;

	UObject::ProcessEvent(Func, &Parms);

	if (L__K__ != nullptr)
		*L__K__ = Parms.L__K__;

	if (ReturnValueFlag != nullptr)
		*ReturnValueFlag = Parms.ReturnValueFlag;

}


// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AI ÒÃÈ¢óÉ¢¦§¤LÕ¥Ñ
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InputBoolFlag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               L__K__                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnBoolFlag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT___________________2_______                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAI_NPC_Barrett_009_C::AI___________L___(bool InputBoolFlag, bool* L__K__, bool* ReturnBoolFlag, bool CallFunc_PresetAI_ACT___________________2_______, bool CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_NPC_Barrett_009_C", "AI ÒÃÈ¢óÉ¢¦§¤LÕ¥Ñ");

	Params::AAI_NPC_Barrett_009_C_AI___________L____Params Parms{};

	Parms.InputBoolFlag = InputBoolFlag;
	Parms.CallFunc_PresetAI_ACT___________________2_______ = CallFunc_PresetAI_ACT___________________2_______;
	Parms.CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag = CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag;

	UObject::ProcessEvent(Func, &Parms);

	if (L__K__ != nullptr)
		*L__K__ = Parms.L__K__;

	if (ReturnBoolFlag != nullptr)
		*ReturnBoolFlag = Parms.ReturnBoolFlag;

}


// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AI ÒÃÈ¢óÉ¢¦§¤LÕ…_
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InputBoolFlag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               L__K__                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnBoolFlag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT___________________2_______                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAI_NPC_Barrett_009_C::AI___________L___(bool InputBoolFlag, bool* L__K__, bool* ReturnBoolFlag, bool CallFunc_PresetAI_ACT___________________2_______, bool CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_NPC_Barrett_009_C", "AI ÒÃÈ¢óÉ¢¦§¤LÕ…_");

	Params::AAI_NPC_Barrett_009_C_AI___________L____Params Parms{};

	Parms.InputBoolFlag = InputBoolFlag;
	Parms.CallFunc_PresetAI_ACT___________________2_______ = CallFunc_PresetAI_ACT___________________2_______;
	Parms.CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag = CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag;

	UObject::ProcessEvent(Func, &Parms);

	if (L__K__ != nullptr)
		*L__K__ = Parms.L__K__;

	if (ReturnBoolFlag != nullptr)
		*ReturnBoolFlag = Parms.ReturnBoolFlag;

}


// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAI_NPC_Barrett_009_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_NPC_Barrett_009_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AIInit
// (Event, Public, BlueprintEvent)
// Parameters:

void AAI_NPC_Barrett_009_C::AIInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_NPC_Barrett_009_C", "AIInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AIHateTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAI_NPC_Barrett_009_C::AIHateTargetChanged(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_NPC_Barrett_009_C", "AIHateTargetChanged");

	Params::AAI_NPC_Barrett_009_C_AIHateTargetChanged_Params Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AIAttackFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void AAI_NPC_Barrett_009_C::AIAttackFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_NPC_Barrett_009_C", "AIAttackFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AIReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ETTLAIReaction          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLAIReactionParam         Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AAI_NPC_Barrett_009_C::AIReaction(enum class ETTLAIReaction Type, const struct FTTLAIReactionParam& Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_NPC_Barrett_009_C", "AIReaction");

	Params::AAI_NPC_Barrett_009_C_AIReaction_Params Parms{};

	Parms.Type = Type;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AIProcess
// (Event, Public, BlueprintEvent)
// Parameters:

void AAI_NPC_Barrett_009_C::AIProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_NPC_Barrett_009_C", "AIProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.ExecuteUbergraph_AI_NPC_Barrett_009
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionNone_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_targetActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLAIReaction          K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLAIReactionParam         K2Node_Event_param                                               (None)
// bool                               CallFunc_PresetAI_ACT___________ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT_____________________                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT______________________                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT_____________________1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT_______________________                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT______________________1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PresetAI_ACT_______________________1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FinishParallelAttack_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionExchangeWeapon_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLAIActionType        CallFunc_IsContinuedSameAIAction_CurrentAction                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsContinuedSameAIAction_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionChangeWeapon_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWeaponRange_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC________Do_Routine                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionGoAroundSide_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLAITrueFalseEnum     CallFunc_BranchOnSwitch_OutputTrueFalse                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_PresetAI_ACT________NewTargetContainer                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActionNonParallelAttack_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAI_NPC_Barrett_009_C::ExecuteUbergraph_AI_NPC_Barrett_009(int32 EntryPoint, bool CallFunc_ActionNone_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_targetActor, enum class ETTLAIReaction K2Node_Event_Type, const struct FTTLAIReactionParam& K2Node_Event_param, bool CallFunc_PresetAI_ACT___________ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_PresetAI_ACT_____________________, bool CallFunc_PresetAI_ACT______________________, bool CallFunc_PresetAI_ACT_____________________1, bool CallFunc_PresetAI_ACT_______________________, bool CallFunc_PresetAI_ACT______________________1, bool CallFunc_PresetAI_ACT_______________________1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_FinishParallelAttack_ReturnValue, bool CallFunc_ActionExchangeWeapon_ReturnValue, enum class ETTLAIActionType CallFunc_IsContinuedSameAIAction_CurrentAction, bool CallFunc_IsContinuedSameAIAction_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_ActionChangeWeapon_ReturnValue, float CallFunc_GetWeaponRange_ReturnValue, bool CallFunc_NPC________Do_Routine, bool CallFunc_ActionGoAroundSide_ReturnValue, enum class ETTLAITrueFalseEnum CallFunc_BranchOnSwitch_OutputTrueFalse, bool K2Node_SwitchEnum2_CmpSuccess, class AActor* CallFunc_PresetAI_ACT________NewTargetContainer, bool CallFunc_IsActionNonParallelAttack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_NPC_Barrett_009_C", "ExecuteUbergraph_AI_NPC_Barrett_009");

	Params::AAI_NPC_Barrett_009_C_ExecuteUbergraph_AI_NPC_Barrett_009_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ActionNone_ReturnValue = CallFunc_ActionNone_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_targetActor = K2Node_Event_targetActor;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Event_param = K2Node_Event_param;
	Parms.CallFunc_PresetAI_ACT___________ReturnValue = CallFunc_PresetAI_ACT___________ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PresetAI_ACT_____________________ = CallFunc_PresetAI_ACT_____________________;
	Parms.CallFunc_PresetAI_ACT______________________ = CallFunc_PresetAI_ACT______________________;
	Parms.CallFunc_PresetAI_ACT_____________________1 = CallFunc_PresetAI_ACT_____________________1;
	Parms.CallFunc_PresetAI_ACT_______________________ = CallFunc_PresetAI_ACT_______________________;
	Parms.CallFunc_PresetAI_ACT______________________1 = CallFunc_PresetAI_ACT______________________1;
	Parms.CallFunc_PresetAI_ACT_______________________1 = CallFunc_PresetAI_ACT_______________________1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_FinishParallelAttack_ReturnValue = CallFunc_FinishParallelAttack_ReturnValue;
	Parms.CallFunc_ActionExchangeWeapon_ReturnValue = CallFunc_ActionExchangeWeapon_ReturnValue;
	Parms.CallFunc_IsContinuedSameAIAction_CurrentAction = CallFunc_IsContinuedSameAIAction_CurrentAction;
	Parms.CallFunc_IsContinuedSameAIAction_ReturnValue = CallFunc_IsContinuedSameAIAction_ReturnValue;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_ActionChangeWeapon_ReturnValue = CallFunc_ActionChangeWeapon_ReturnValue;
	Parms.CallFunc_GetWeaponRange_ReturnValue = CallFunc_GetWeaponRange_ReturnValue;
	Parms.CallFunc_NPC________Do_Routine = CallFunc_NPC________Do_Routine;
	Parms.CallFunc_ActionGoAroundSide_ReturnValue = CallFunc_ActionGoAroundSide_ReturnValue;
	Parms.CallFunc_BranchOnSwitch_OutputTrueFalse = CallFunc_BranchOnSwitch_OutputTrueFalse;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_PresetAI_ACT________NewTargetContainer = CallFunc_PresetAI_ACT________NewTargetContainer;
	Parms.CallFunc_IsActionNonParallelAttack_ReturnValue = CallFunc_IsActionNonParallelAttack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


