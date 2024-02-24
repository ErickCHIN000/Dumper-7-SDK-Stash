#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_Fish_Caught.BP_ConditionBehaviour_Fish_Caught_C
// (None)

class UClass* UBP_ConditionBehaviour_Fish_Caught_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_Fish_Caught_C");

	return Clss;
}


// BP_ConditionBehaviour_Fish_Caught_C BP_ConditionBehaviour_Fish_Caught.Default__BP_ConditionBehaviour_Fish_Caught_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_Fish_Caught_C* UBP_ConditionBehaviour_Fish_Caught_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_Fish_Caught_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_Fish_Caught_C*>(UBP_ConditionBehaviour_Fish_Caught_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_Fish_Caught.BP_ConditionBehaviour_Fish_Caught_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Description                                                      (Parm, OutParm)
// class FString                      CallFunc_Conv_SoftObjectReferenceToString_ReturnValue            (ZeroConstructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Fish_Caught_C::GetDebugText(class FText* Description, const class FString& CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Fish_Caught_C", "GetDebugText");

	Params::UBP_ConditionBehaviour_Fish_Caught_C_GetDebugText_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToString_ReturnValue = CallFunc_Conv_SoftObjectReferenceToString_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_ConditionBehaviour_Fish_Caught.BP_ConditionBehaviour_Fish_Caught_C.OnFishCaught
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFish                       CaughtFish                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UFishDataAsset*              FishAsset                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFishDataAsset*              K2Node_DynamicCast_AsFish_Data_Asset                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Fish_Caught_C::OnFishCaught(const struct FFish& CaughtFish, class UFishDataAsset* FishAsset, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFishDataAsset* K2Node_DynamicCast_AsFish_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Fish_Caught_C", "OnFishCaught");

	Params::UBP_ConditionBehaviour_Fish_Caught_C_OnFishCaught_Params Parms{};

	Parms.CaughtFish = CaughtFish;
	Parms.FishAsset = FishAsset;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFish_Data_Asset = K2Node_DynamicCast_AsFish_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Fish_Caught.BP_ConditionBehaviour_Fish_Caught_C.OnConditionRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Fish_Caught_C::OnConditionRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Fish_Caught_C", "OnConditionRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Fish_Caught.BP_ConditionBehaviour_Fish_Caught_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Fish_Caught_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Fish_Caught_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Fish_Caught.BP_ConditionBehaviour_Fish_Caught_C.InitializeFromPersistence
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FConditionPersistentData    UpdatedProgressData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ConditionBehaviour_Fish_Caught_C::InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Fish_Caught_C", "InitializeFromPersistence");

	Params::UBP_ConditionBehaviour_Fish_Caught_C_InitializeFromPersistence_Params Parms{};

	Parms.UpdatedProgressData = UpdatedProgressData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Fish_Caught.BP_ConditionBehaviour_Fish_Caught_C.ExecuteUbergraph_BP_ConditionBehaviour_Fish_Caught
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    K2Node_Event_UpdatedProgressData                                 (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState_2                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Fish_Caught_C::ExecuteUbergraph_BP_ConditionBehaviour_Fish_Caught(int32 EntryPoint, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Fish_Caught_C", "ExecuteUbergraph_BP_ConditionBehaviour_Fish_Caught");

	Params::UBP_ConditionBehaviour_Fish_Caught_C_ExecuteUbergraph_BP_ConditionBehaviour_Fish_Caught_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_UpdatedProgressData = K2Node_Event_UpdatedProgressData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetConditionPlayerState_PlayerState = CallFunc_GetConditionPlayerState_PlayerState;
	Parms.CallFunc_GetConditionPlayerState_PlayerState_1 = CallFunc_GetConditionPlayerState_PlayerState_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetConditionPlayerState_PlayerState_2 = CallFunc_GetConditionPlayerState_PlayerState_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


