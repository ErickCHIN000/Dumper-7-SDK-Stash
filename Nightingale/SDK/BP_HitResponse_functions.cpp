#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HitResponse.BP_HitResponse_C
// (None)

class UClass* UBP_HitResponse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HitResponse_C");

	return Clss;
}


// BP_HitResponse_C BP_HitResponse.Default__BP_HitResponse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HitResponse_C* UBP_HitResponse_C::GetDefaultObj()
{
	static class UBP_HitResponse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HitResponse_C*>(UBP_HitResponse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HitResponse.BP_HitResponse_C.MatchTagAgainstTable
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FS_ResponseRow              Response                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_ResponseRow>      PartiallyMatchingRows                                            (Edit, BlueprintVisible)
// struct FS_ResponseRow              TableRow                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ResponseRow              CallFunc_GetDataTableRowFromName_OutRow                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitResponse_C::MatchTagAgainstTable(const struct FGameplayTag& Tag, struct FS_ResponseRow* Response, bool* Success, const TArray<struct FS_ResponseRow>& PartiallyMatchingRows, const struct FS_ResponseRow& TableRow, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_MatchesTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue_2, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_ResponseRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitResponse_C", "MatchTagAgainstTable");

	Params::UBP_HitResponse_C_MatchTagAgainstTable_Params Parms{};

	Parms.Tag = Tag;
	Parms.PartiallyMatchingRows = PartiallyMatchingRows;
	Parms.TableRow = TableRow;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue_1 = CallFunc_MatchesTag_ReturnValue_1;
	Parms.CallFunc_MatchesTag_ReturnValue_2 = CallFunc_MatchesTag_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Response != nullptr)
		*Response = std::move(Parms.Response);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_HitResponse.BP_HitResponse_C.HitResponse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_HitData                  HitData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        MatchingTags                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FS_ResponseRow              CallFunc_MatchTagAgainstTable_Response                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchTagAgainstTable_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitResponse_C::HitResponse(const struct FS_HitData& HitData, const TArray<struct FGameplayTag>& MatchingTags, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FS_ResponseRow& CallFunc_MatchTagAgainstTable_Response, bool CallFunc_MatchTagAgainstTable_Success, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitResponse_C", "HitResponse");

	Params::UBP_HitResponse_C_HitResponse_Params Parms{};

	Parms.HitData = HitData;
	Parms.MatchingTags = MatchingTags;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MatchTagAgainstTable_Response = CallFunc_MatchTagAgainstTable_Response;
	Parms.CallFunc_MatchTagAgainstTable_Success = CallFunc_MatchTagAgainstTable_Success;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HitResponse.BP_HitResponse_C.MultiCastApplyResponse
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ResponseRow              Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FS_HitData                  HitData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_HitResponse_C::MultiCastApplyResponse(const struct FS_ResponseRow& Response, const struct FS_HitData& HitData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitResponse_C", "MultiCastApplyResponse");

	Params::UBP_HitResponse_C_MultiCastApplyResponse_Params Parms{};

	Parms.Response = Response;
	Parms.HitData = HitData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HitResponse.BP_HitResponse_C.ServerApplyResponse
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ResponseRow              Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FS_HitData                  HitData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_HitResponse_C::ServerApplyResponse(const struct FS_ResponseRow& Response, const struct FS_HitData& HitData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitResponse_C", "ServerApplyResponse");

	Params::UBP_HitResponse_C_ServerApplyResponse_Params Parms{};

	Parms.Response = Response;
	Parms.HitData = HitData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HitResponse.BP_HitResponse_C.ExecuteUbergraph_BP_HitResponse
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ResponseRow              K2Node_CustomEvent_Response_1                                    (NoDestructor, HasGetValueTypeHash)
// struct FS_HitData                  K2Node_CustomEvent_HitData_1                                     (HasGetValueTypeHash)
// struct FS_ResponseRow              K2Node_CustomEvent_Response                                      (NoDestructor, HasGetValueTypeHash)
// struct FS_HitData                  K2Node_CustomEvent_HitData                                       (HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitResponse_C::ExecuteUbergraph_BP_HitResponse(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FS_ResponseRow& K2Node_CustomEvent_Response_1, const struct FS_HitData& K2Node_CustomEvent_HitData_1, const struct FS_ResponseRow& K2Node_CustomEvent_Response, const struct FS_HitData& K2Node_CustomEvent_HitData, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitResponse_C", "ExecuteUbergraph_BP_HitResponse");

	Params::UBP_HitResponse_C_ExecuteUbergraph_BP_HitResponse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.K2Node_CustomEvent_HitData_1 = K2Node_CustomEvent_HitData_1;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CustomEvent_HitData = K2Node_CustomEvent_HitData;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HitResponse.BP_HitResponse_C.AppliedHitResponse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ResponseRow              Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FS_HitData                  HitData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_HitResponse_C::AppliedHitResponse__DelegateSignature(const struct FS_ResponseRow& Response, const struct FS_HitData& HitData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitResponse_C", "AppliedHitResponse__DelegateSignature");

	Params::UBP_HitResponse_C_AppliedHitResponse__DelegateSignature_Params Parms{};

	Parms.Response = Response;
	Parms.HitData = HitData;

	UObject::ProcessEvent(Func, &Parms);

}

}


