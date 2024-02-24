#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuDataEntry_Quests.BP_MenuDataEntry_Quests_C
// (None)

class UClass* UBP_MenuDataEntry_Quests_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuDataEntry_Quests_C");

	return Clss;
}


// BP_MenuDataEntry_Quests_C BP_MenuDataEntry_Quests.Default__BP_MenuDataEntry_Quests_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuDataEntry_Quests_C* UBP_MenuDataEntry_Quests_C::GetDefaultObj()
{
	static class UBP_MenuDataEntry_Quests_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuDataEntry_Quests_C*>(UBP_MenuDataEntry_Quests_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuDataEntry_Quests.BP_MenuDataEntry_Quests_C.GetTaskState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class E_Contract_StateType    TaskState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>LQuestTracker                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Contract_StateType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Contract_StateType    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_GetTaskProgress_ReturnValue                             (ConstParm)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestOngoing_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class E_Contract_StateType    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuDataEntry_Quests_C::GetTaskState(enum class E_Contract_StateType* TaskState, TScriptInterface<class IQuestTrackerInterface> LQuestTracker, bool Temp_bool_Variable, enum class E_Contract_StateType Temp_byte_Variable, enum class E_Contract_StateType Temp_byte_Variable_1, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsQuestOngoing_ReturnValue, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, enum class E_Contract_StateType K2Node_Select_Default, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Quests_C", "GetTaskState");

	Params::UBP_MenuDataEntry_Quests_C_GetTaskState_Params Parms{};

	Parms.LQuestTracker = LQuestTracker;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetTaskProgress_ReturnValue = CallFunc_GetTaskProgress_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsQuestOngoing_ReturnValue = CallFunc_IsQuestOngoing_ReturnValue;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TaskState != nullptr)
		*TaskState = Parms.TaskState;

}

}


