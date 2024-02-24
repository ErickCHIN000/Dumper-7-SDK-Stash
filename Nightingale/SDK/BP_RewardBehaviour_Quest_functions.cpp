#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RewardBehaviour_Quest.BP_RewardBehaviour_Quest_C
// (None)

class UClass* UBP_RewardBehaviour_Quest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RewardBehaviour_Quest_C");

	return Clss;
}


// BP_RewardBehaviour_Quest_C BP_RewardBehaviour_Quest.Default__BP_RewardBehaviour_Quest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RewardBehaviour_Quest_C* UBP_RewardBehaviour_Quest_C::GetDefaultObj()
{
	static class UBP_RewardBehaviour_Quest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RewardBehaviour_Quest_C*>(UBP_RewardBehaviour_Quest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RewardBehaviour_Quest.BP_RewardBehaviour_Quest_C.GrantQuestReward
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SenderContextObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        AssetReference                                                   (Edit, BlueprintVisible)
// TScriptInterface<class IQuestTrackerInterface>QuestTrackerInterface                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FName                        CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIDFromQuestAssetReference_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FQuestAssetReference>CallFunc_GetOngoingQuests_OutOngoingQuests                       (ReferenceParm)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue        (None)
// struct FQuestAssetReference        CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue_1      (None)
// bool                               CallFunc_IsQuestCompleted_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue_2      (None)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Quest_C::GrantQuestReward(class APlayerState* PlayerState, class UObject* SenderContextObject, const struct FQuestAssetReference& AssetReference, TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue, const struct FGuid& CallFunc_GetUniqueIDFromQuestAssetReference_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, TArray<struct FQuestAssetReference>& CallFunc_GetOngoingQuests_OutOngoingQuests, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuestAssetReference& CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue, const struct FQuestAssetReference& CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue_1, bool CallFunc_IsQuestCompleted_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FQuestAssetReference& CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Quest_C", "GrantQuestReward");

	Params::UBP_RewardBehaviour_Quest_C_GrantQuestReward_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.SenderContextObject = SenderContextObject;
	Parms.AssetReference = AssetReference;
	Parms.QuestTrackerInterface = QuestTrackerInterface;
	Parms.CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue = CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue;
	Parms.CallFunc_GetUniqueIDFromQuestAssetReference_ReturnValue = CallFunc_GetUniqueIDFromQuestAssetReference_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_GetOngoingQuests_OutOngoingQuests = CallFunc_GetOngoingQuests_OutOngoingQuests;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue = CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue;
	Parms.CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue_1 = CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue_1;
	Parms.CallFunc_IsQuestCompleted_ReturnValue = CallFunc_IsQuestCompleted_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue_2 = CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_Quest.BP_RewardBehaviour_Quest_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        DebugText                                                        (Parm, OutParm)
// class FText                        QuestText                                                        (Edit, BlueprintVisible)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UQuestDataAsset*             K2Node_DynamicCast_AsQuest_Data_Asset                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectNameOrNone_Name                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UBP_RewardBehaviour_Quest_C::GetDebugText(class FText* DebugText, class FText QuestText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class FText CallFunc_Format_ReturnValue, class UQuestDataAsset* K2Node_DynamicCast_AsQuest_Data_Asset, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetObjectNameOrNone_Name, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Quest_C", "GetDebugText");

	Params::UBP_RewardBehaviour_Quest_C_GetDebugText_Params Parms{};

	Parms.QuestText = QuestText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Data_Asset = K2Node_DynamicCast_AsQuest_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectNameOrNone_Name = CallFunc_GetObjectNameOrNone_Name;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DebugText != nullptr)
		*DebugText = Parms.DebugText;

}


// Function BP_RewardBehaviour_Quest.BP_RewardBehaviour_Quest_C.ApplyReward
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SenderContextObject                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Quest_C::ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Quest_C", "ApplyReward");

	Params::UBP_RewardBehaviour_Quest_C_ApplyReward_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.SenderContextObject = SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_Quest.BP_RewardBehaviour_Quest_C.ExecuteUbergraph_BP_RewardBehaviour_Quest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_Event_PlayerState                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_SenderContextObject                                 (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Quest_C::ExecuteUbergraph_BP_RewardBehaviour_Quest(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Quest_C", "ExecuteUbergraph_BP_RewardBehaviour_Quest");

	Params::UBP_RewardBehaviour_Quest_C_ExecuteUbergraph_BP_RewardBehaviour_Quest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerState = K2Node_Event_PlayerState;
	Parms.K2Node_Event_SenderContextObject = K2Node_Event_SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


