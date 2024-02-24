#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPSessionFunctionLibrary.BPSessionFunctionLibrary_C
// (None)

class UClass* UBPSessionFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPSessionFunctionLibrary_C");

	return Clss;
}


// BPSessionFunctionLibrary_C BPSessionFunctionLibrary.Default__BPSessionFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPSessionFunctionLibrary_C* UBPSessionFunctionLibrary_C::GetDefaultObj()
{
	static class UBPSessionFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPSessionFunctionLibrary_C*>(UBPSessionFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPSessionFunctionLibrary.BPSessionFunctionLibrary_C.CalculateProspectState
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProspectInfo               ProspectInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AIcarusPlayerController*     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ProspectState         ProspectState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayConfigRowHandle    CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayConfig             CallFunc_GetGameplayConfigStruct_GameplayConfig                  (None)
// enum class EValid                  CallFunc_GetGameplayConfigStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)
// class FString                      CallFunc_GetUserID_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveJoinedProspect_AssignedToProspect                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EProspectLocation       CallFunc_HaveJoinedProspect_Status                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPSessionFunctionLibrary_C::CalculateProspectState(struct FProspectInfo& ProspectInfo, class AIcarusPlayerController* Target, class UObject* __WorldContext, enum class E_ProspectState* ProspectState, const struct FGameplayConfigRowHandle& CallFunc_StructToRowHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayConfig& CallFunc_GetGameplayConfigStruct_GameplayConfig, enum class EValid CallFunc_GetGameplayConfigStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, const class FString& CallFunc_GetUserID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HaveJoinedProspect_AssignedToProspect, enum class EProspectLocation CallFunc_HaveJoinedProspect_Status, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPSessionFunctionLibrary_C", "CalculateProspectState");

	Params::UBPSessionFunctionLibrary_C_CalculateProspectState_Params Parms{};

	Parms.ProspectInfo = ProspectInfo;
	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameplayConfigStruct_GameplayConfig = CallFunc_GetGameplayConfigStruct_GameplayConfig;
	Parms.CallFunc_GetGameplayConfigStruct_Paths = CallFunc_GetGameplayConfigStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;
	Parms.CallFunc_GetUserID_ReturnValue = CallFunc_GetUserID_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HaveJoinedProspect_AssignedToProspect = CallFunc_HaveJoinedProspect_AssignedToProspect;
	Parms.CallFunc_HaveJoinedProspect_Status = CallFunc_HaveJoinedProspect_Status;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ProspectState != nullptr)
		*ProspectState = Parms.ProspectState;

}


// Function BPSessionFunctionLibrary.BPSessionFunctionLibrary_C.HaveJoinedProspect
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      UserID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FAssociatedMemberInfo>Members                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              ChrSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AssignedToProspect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EProspectLocation       Status                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAssociatedMemberInfo       CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPSessionFunctionLibrary_C::HaveJoinedProspect(const class FString& UserID, TArray<struct FAssociatedMemberInfo>& Members, int32 ChrSlot, class UObject* __WorldContext, bool* AssignedToProspect, enum class EProspectLocation* Status, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FAssociatedMemberInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPSessionFunctionLibrary_C", "HaveJoinedProspect");

	Params::UBPSessionFunctionLibrary_C_HaveJoinedProspect_Params Parms{};

	Parms.UserID = UserID;
	Parms.Members = Members;
	Parms.ChrSlot = ChrSlot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AssignedToProspect != nullptr)
		*AssignedToProspect = Parms.AssignedToProspect;

	if (Status != nullptr)
		*Status = Parms.Status;

}


// Function BPSessionFunctionLibrary.BPSessionFunctionLibrary_C.HasSettled
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerController*     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFProspectServerInfo        FProspectServerInfo                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Settled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUserID_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// struct FAssociatedMemberInfo       CallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPSessionFunctionLibrary_C::HasSettled(class AIcarusPlayerController* Target, struct FFProspectServerInfo& FProspectServerInfo, class UObject* __WorldContext, bool* Settled, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetUserID_ReturnValue, const struct FAssociatedMemberInfo& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPSessionFunctionLibrary_C", "HasSettled");

	Params::UBPSessionFunctionLibrary_C_HasSettled_Params Parms{};

	Parms.Target = Target;
	Parms.FProspectServerInfo = FProspectServerInfo;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetUserID_ReturnValue = CallFunc_GetUserID_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Settled != nullptr)
		*Settled = Parms.Settled;

}


// Function BPSessionFunctionLibrary.BPSessionFunctionLibrary_C.ProspectInfoIsValid
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        Server_Prospect_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               RequiresSession                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusSession              K2Node_MakeStruct_IcarusSession                                  (None)
// bool                               CallFunc_ProspectInfoIsValid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPSessionFunctionLibrary_C::ProspectInfoIsValid(const struct FFProspectServerInfo& Server_Prospect_Info, bool RequiresSession, class UObject* __WorldContext, bool* Valid, const struct FIcarusSession& K2Node_MakeStruct_IcarusSession, bool CallFunc_ProspectInfoIsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPSessionFunctionLibrary_C", "ProspectInfoIsValid");

	Params::UBPSessionFunctionLibrary_C_ProspectInfoIsValid_Params Parms{};

	Parms.Server_Prospect_Info = Server_Prospect_Info;
	Parms.RequiresSession = RequiresSession;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_IcarusSession = K2Node_MakeStruct_IcarusSession;
	Parms.CallFunc_ProspectInfoIsValid_ReturnValue = CallFunc_ProspectInfoIsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}

}


