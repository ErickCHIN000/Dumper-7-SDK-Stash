#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C
// (None)

class UClass* UBPFL_RealmHistoryLog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_RealmHistoryLog_C");

	return Clss;
}


// BPFL_RealmHistoryLog_C BPFL_RealmHistoryLog.Default__BPFL_RealmHistoryLog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_RealmHistoryLog_C* UBPFL_RealmHistoryLog_C::GetDefaultObj()
{
	static class UBPFL_RealmHistoryLog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_RealmHistoryLog_C*>(UBPFL_RealmHistoryLog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.IsCurrentRealmInfo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_Persisted_RealmVisitedInfoRealmInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsCurrentRealm                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentRealmID_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_RealmHistoryLog_C::IsCurrentRealmInfo(struct FS_Persisted_RealmVisitedInfo& RealmInfo, class UObject* __WorldContext, bool* IsCurrentRealm, bool CallFunc_GetCurrentRealmID_Success, const class FString& CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_RealmHistoryLog_C", "IsCurrentRealmInfo");

	Params::UBPFL_RealmHistoryLog_C_IsCurrentRealmInfo_Params Parms{};

	Parms.RealmInfo = RealmInfo;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCurrentRealmID_Success = CallFunc_GetCurrentRealmID_Success;
	Parms.CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_ = CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCurrentRealm != nullptr)
		*IsCurrentRealm = Parms.IsCurrentRealm;

}


// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetRealmInfo_CurrentRealm
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoRealmInfo                                                        (Parm, OutParm, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentRealmPower_RealmPower                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentInfluenceLevels_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmInfluenceValues       CallFunc_GetCurrentInfluenceLevels_Influence_Levels              (NoDestructor)
// bool                               CallFunc_GetCurrentRealmTags_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetCurrentRealmTags_RealmTags                           (None)
// bool                               CallFunc_GetCurrentRealmID_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoK2Node_MakeStruct_S_Persisted_RealmVisitedInfo                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_RealmHistoryLog_C::GetRealmInfo_CurrentRealm(class UObject* __WorldContext, bool* Success, struct FS_Persisted_RealmVisitedInfo* RealmInfo, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_GetCurrentRealmPower_RealmPower, bool CallFunc_GetCurrentInfluenceLevels_Success, const struct FRealmInfluenceValues& CallFunc_GetCurrentInfluenceLevels_Influence_Levels, bool CallFunc_GetCurrentRealmTags_Success, const struct FGameplayTagContainer& CallFunc_GetCurrentRealmTags_RealmTags, bool CallFunc_GetCurrentRealmID_Success, const class FString& CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_, bool CallFunc_BooleanAND_ReturnValue, const struct FS_Persisted_RealmVisitedInfo& K2Node_MakeStruct_S_Persisted_RealmVisitedInfo, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_RealmHistoryLog_C", "GetRealmInfo_CurrentRealm");

	Params::UBPFL_RealmHistoryLog_C_GetRealmInfo_CurrentRealm_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentRealmPower_RealmPower = CallFunc_GetCurrentRealmPower_RealmPower;
	Parms.CallFunc_GetCurrentInfluenceLevels_Success = CallFunc_GetCurrentInfluenceLevels_Success;
	Parms.CallFunc_GetCurrentInfluenceLevels_Influence_Levels = CallFunc_GetCurrentInfluenceLevels_Influence_Levels;
	Parms.CallFunc_GetCurrentRealmTags_Success = CallFunc_GetCurrentRealmTags_Success;
	Parms.CallFunc_GetCurrentRealmTags_RealmTags = CallFunc_GetCurrentRealmTags_RealmTags;
	Parms.CallFunc_GetCurrentRealmID_Success = CallFunc_GetCurrentRealmID_Success;
	Parms.CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_ = CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_S_Persisted_RealmVisitedInfo = K2Node_MakeStruct_S_Persisted_RealmVisitedInfo;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (RealmInfo != nullptr)
		*RealmInfo = std::move(Parms.RealmInfo);

}


// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetCurrentRealmID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      RealmID__Deployment_Id_                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_RealmHistoryLog_C::GetCurrentRealmID(class UObject* __WorldContext, bool* Success, class FString* RealmID__Deployment_Id_, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_RealmHistoryLog_C", "GetCurrentRealmID");

	Params::UBPFL_RealmHistoryLog_C_GetCurrentRealmID_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (RealmID__Deployment_Id_ != nullptr)
		*RealmID__Deployment_Id_ = std::move(Parms.RealmID__Deployment_Id_);

}


// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetRealmInfo_ViaRealmID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      RealmID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRespiteRealm                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoRealmInfo                                                        (Parm, OutParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmHistory_VisitedRealms_Success                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Persisted_RealmVisitedInfo>CallFunc_GetRealmHistory_VisitedRealms_VisitedRealmInfo          (ReferenceParm)
// struct FS_Persisted_RealmVisitedInfoCallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmHistory_RespiteRealmInfo_Success                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRealmHistory_RespiteRealmInfo_Respite_Level_Location (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoCallFunc_GetRealmHistory_RespiteRealmInfo_RealmInfo              (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_RealmHistoryLog_C::GetRealmInfo_ViaRealmID(const class FString& RealmID, class UObject* __WorldContext, bool* Success, bool* IsRespiteRealm, struct FS_Persisted_RealmVisitedInfo* RealmInfo, int32 Temp_int_Array_Index_Variable, bool CallFunc_GetRealmHistory_VisitedRealms_Success, TArray<struct FS_Persisted_RealmVisitedInfo>& CallFunc_GetRealmHistory_VisitedRealms_VisitedRealmInfo, const struct FS_Persisted_RealmVisitedInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_GetRealmHistory_RespiteRealmInfo_Success, const struct FVector& CallFunc_GetRealmHistory_RespiteRealmInfo_Respite_Level_Location, const struct FS_Persisted_RealmVisitedInfo& CallFunc_GetRealmHistory_RespiteRealmInfo_RealmInfo, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_RealmHistoryLog_C", "GetRealmInfo_ViaRealmID");

	Params::UBPFL_RealmHistoryLog_C_GetRealmInfo_ViaRealmID_Params Parms{};

	Parms.RealmID = RealmID;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetRealmHistory_VisitedRealms_Success = CallFunc_GetRealmHistory_VisitedRealms_Success;
	Parms.CallFunc_GetRealmHistory_VisitedRealms_VisitedRealmInfo = CallFunc_GetRealmHistory_VisitedRealms_VisitedRealmInfo;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetRealmHistory_RespiteRealmInfo_Success = CallFunc_GetRealmHistory_RespiteRealmInfo_Success;
	Parms.CallFunc_GetRealmHistory_RespiteRealmInfo_Respite_Level_Location = CallFunc_GetRealmHistory_RespiteRealmInfo_Respite_Level_Location;
	Parms.CallFunc_GetRealmHistory_RespiteRealmInfo_RealmInfo = CallFunc_GetRealmHistory_RespiteRealmInfo_RealmInfo;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (IsRespiteRealm != nullptr)
		*IsRespiteRealm = Parms.IsRespiteRealm;

	if (RealmInfo != nullptr)
		*RealmInfo = std::move(Parms.RealmInfo);

}


// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetRealmHistory_RespiteRealmInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Respite_Level_Location                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoRealmInfo                                                        (Parm, OutParm, HasGetValueTypeHash)
// class UBP_RealmHistory_Persistence_C*CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmHistoryComponent_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoK2Node_MakeStruct_S_Persisted_RealmVisitedInfo                   (HasGetValueTypeHash)

void UBPFL_RealmHistoryLog_C::GetRealmHistory_RespiteRealmInfo(class UObject* __WorldContext, bool* Success, struct FVector* Respite_Level_Location, struct FS_Persisted_RealmVisitedInfo* RealmInfo, class UBP_RealmHistory_Persistence_C* CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component, bool CallFunc_GetRealmHistoryComponent_Success, const struct FS_Persisted_RealmVisitedInfo& K2Node_MakeStruct_S_Persisted_RealmVisitedInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_RealmHistoryLog_C", "GetRealmHistory_RespiteRealmInfo");

	Params::UBPFL_RealmHistoryLog_C_GetRealmHistory_RespiteRealmInfo_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component = CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component;
	Parms.CallFunc_GetRealmHistoryComponent_Success = CallFunc_GetRealmHistoryComponent_Success;
	Parms.K2Node_MakeStruct_S_Persisted_RealmVisitedInfo = K2Node_MakeStruct_S_Persisted_RealmVisitedInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Respite_Level_Location != nullptr)
		*Respite_Level_Location = std::move(Parms.Respite_Level_Location);

	if (RealmInfo != nullptr)
		*RealmInfo = std::move(Parms.RealmInfo);

}


// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetRealmHistory_VisitedRealms
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Persisted_RealmVisitedInfo>VisitedRealmInfo                                                 (Parm, OutParm)
// class UBP_RealmHistory_Persistence_C*CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmHistoryComponent_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_RealmHistoryLog_C::GetRealmHistory_VisitedRealms(class UObject* __WorldContext, bool* Success, TArray<struct FS_Persisted_RealmVisitedInfo>* VisitedRealmInfo, class UBP_RealmHistory_Persistence_C* CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component, bool CallFunc_GetRealmHistoryComponent_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_RealmHistoryLog_C", "GetRealmHistory_VisitedRealms");

	Params::UBPFL_RealmHistoryLog_C_GetRealmHistory_VisitedRealms_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component = CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component;
	Parms.CallFunc_GetRealmHistoryComponent_Success = CallFunc_GetRealmHistoryComponent_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (VisitedRealmInfo != nullptr)
		*VisitedRealmInfo = std::move(Parms.VisitedRealmInfo);

}


// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetRealmHistoryComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_RealmHistory_Persistence_C*Realm_History_Persistence_Component                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_RealmHistory_Persistence_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_RealmHistoryLog_C::GetRealmHistoryComponent(class UObject* __WorldContext, class UBP_RealmHistory_Persistence_C** Realm_History_Persistence_Component, bool* Success, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UBP_RealmHistory_Persistence_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_RealmHistoryLog_C", "GetRealmHistoryComponent");

	Params::UBPFL_RealmHistoryLog_C_GetRealmHistoryComponent_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Realm_History_Persistence_Component != nullptr)
		*Realm_History_Persistence_Component = Parms.Realm_History_Persistence_Component;

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


