#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C
// (None)

class UClass* UBP_QuestFuncitonLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestFuncitonLibrary_C");

	return Clss;
}


// BP_QuestFuncitonLibrary_C BP_QuestFuncitonLibrary.Default__BP_QuestFuncitonLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestFuncitonLibrary_C* UBP_QuestFuncitonLibrary_C::GetDefaultObj()
{
	static class UBP_QuestFuncitonLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestFuncitonLibrary_C*>(UBP_QuestFuncitonLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.TriggerNewDynamicFactionMission
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFactionMissionsRowHandle   Mission                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      MissionProspect                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_NetworkProxyComponentSurvival_C*K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_QuestFuncitonLibrary_C::TriggerNewDynamicFactionMission(struct FFactionMissionsRowHandle& Mission, struct FProspectListRowHandle& MissionProspect, class UObject* __WorldContext, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponentSurvival_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestFuncitonLibrary_C", "TriggerNewDynamicFactionMission");

	Params::UBP_QuestFuncitonLibrary_C_TriggerNewDynamicFactionMission_Params Parms{};

	Parms.Mission = Mission;
	Parms.MissionProspect = MissionProspect;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival = K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.TriggerNewDynamicQuest
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestsRowHandle     DynamicQuest                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class EDynamicQuestDifficulty Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQuestManager*               CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GenerateNewDynamicQuestSeed_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestFuncitonLibrary_C::TriggerNewDynamicQuest(const struct FDynamicQuestsRowHandle& DynamicQuest, enum class EDynamicQuestDifficulty Difficulty, class UObject* __WorldContext, class AQuestManager* CallFunc_GetQuestManager_ReturnValue, int32 CallFunc_GenerateNewDynamicQuestSeed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestFuncitonLibrary_C", "TriggerNewDynamicQuest");

	Params::UBP_QuestFuncitonLibrary_C_TriggerNewDynamicQuest_Params Parms{};

	Parms.DynamicQuest = DynamicQuest;
	Parms.Difficulty = Difficulty;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GenerateNewDynamicQuestSeed_ReturnValue = CallFunc_GenerateNewDynamicQuestSeed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GenerateNewDynamicQuestSeed
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RollMax_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusGameStateSurvival_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSurvival*    CallFunc_GetIcarusGameStateSurvival_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_QuestFuncitonLibrary_C::GenerateNewDynamicQuestSeed(class UObject* __WorldContext, int32 CallFunc_RollMax_ReturnValue, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestFuncitonLibrary_C", "GenerateNewDynamicQuestSeed");

	Params::UBP_QuestFuncitonLibrary_C_GenerateNewDynamicQuestSeed_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_RollMax_ReturnValue = CallFunc_RollMax_ReturnValue;
	Parms.CallFunc_GetIcarusGameStateSurvival_bValid = CallFunc_GetIcarusGameStateSurvival_bValid;
	Parms.CallFunc_GetIcarusGameStateSurvival_ReturnValue = CallFunc_GetIcarusGameStateSurvival_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GetDefaultQuestModifierClass
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FQuestModifiersMultiRowHandleRowHandle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQuestModifierBase>ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// enum class EQuestModifiersTableTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuestModifiersTableTypeCallFunc_Break_OutEnum                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Break_OutName                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQuestModifierBase>Temp_softclass_Variable                                          (HasGetValueTypeHash)
// TSoftClassPtr<class UQuestModifierBase>Temp_softclass_Variable_1                                        (HasGetValueTypeHash)
// TSoftClassPtr<class UQuestModifierBase>Temp_softclass_Variable_2                                        (HasGetValueTypeHash)
// TSoftClassPtr<class UQuestModifierBase>Temp_softclass_Variable_3                                        (HasGetValueTypeHash)
// TSoftClassPtr<class UQuestModifierBase>K2Node_Select_Default                                            (HasGetValueTypeHash)

TSoftClassPtr<class UQuestModifierBase> UBP_QuestFuncitonLibrary_C::GetDefaultQuestModifierClass(const struct FQuestModifiersMultiRowHandle& RowHandle, class UObject* __WorldContext, enum class EQuestModifiersTableType Temp_byte_Variable, enum class EQuestModifiersTableType CallFunc_Break_OutEnum, class FName CallFunc_Break_OutName, TSoftClassPtr<class UQuestModifierBase> Temp_softclass_Variable, TSoftClassPtr<class UQuestModifierBase> Temp_softclass_Variable_1, TSoftClassPtr<class UQuestModifierBase> Temp_softclass_Variable_2, TSoftClassPtr<class UQuestModifierBase> Temp_softclass_Variable_3, TSoftClassPtr<class UQuestModifierBase> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestFuncitonLibrary_C", "GetDefaultQuestModifierClass");

	Params::UBP_QuestFuncitonLibrary_C_GetDefaultQuestModifierClass_Params Parms{};

	Parms.RowHandle = RowHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Break_OutEnum = CallFunc_Break_OutEnum;
	Parms.CallFunc_Break_OutName = CallFunc_Break_OutName;
	Parms.Temp_softclass_Variable = Temp_softclass_Variable;
	Parms.Temp_softclass_Variable_1 = Temp_softclass_Variable_1;
	Parms.Temp_softclass_Variable_2 = Temp_softclass_Variable_2;
	Parms.Temp_softclass_Variable_3 = Temp_softclass_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GetQuestModifierClass
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestModifiersMultiRowHandleRowHandle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQuestModifierBase>ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQuestModifierBase>CallFunc_GetDefaultQuestModifierClass_ReturnValue                (HasGetValueTypeHash)
// TSoftClassPtr<class UQuestModifierBase>CallFunc_GetQuestModifierClassFromRow_OutQuestModifierClass      (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetQuestModifierClassFromRow_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQuestModifierBase>K2Node_Select_Default                                            (HasGetValueTypeHash)

TSoftClassPtr<class UQuestModifierBase> UBP_QuestFuncitonLibrary_C::GetQuestModifierClass(const struct FQuestModifiersMultiRowHandle& RowHandle, class UObject* __WorldContext, bool Temp_bool_Variable, TSoftClassPtr<class UQuestModifierBase> CallFunc_GetDefaultQuestModifierClass_ReturnValue, TSoftClassPtr<class UQuestModifierBase> CallFunc_GetQuestModifierClassFromRow_OutQuestModifierClass, bool CallFunc_GetQuestModifierClassFromRow_ReturnValue, TSoftClassPtr<class UQuestModifierBase> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestFuncitonLibrary_C", "GetQuestModifierClass");

	Params::UBP_QuestFuncitonLibrary_C_GetQuestModifierClass_Params Parms{};

	Parms.RowHandle = RowHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDefaultQuestModifierClass_ReturnValue = CallFunc_GetDefaultQuestModifierClass_ReturnValue;
	Parms.CallFunc_GetQuestModifierClassFromRow_OutQuestModifierClass = CallFunc_GetQuestModifierClassFromRow_OutQuestModifierClass;
	Parms.CallFunc_GetQuestModifierClassFromRow_ReturnValue = CallFunc_GetQuestModifierClassFromRow_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


