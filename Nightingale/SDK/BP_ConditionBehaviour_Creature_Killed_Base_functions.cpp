#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C
// (None)

class UClass* UBP_ConditionBehaviour_Creature_Killed_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_Creature_Killed_Base_C");

	return Clss;
}


// BP_ConditionBehaviour_Creature_Killed_Base_C BP_ConditionBehaviour_Creature_Killed_Base.Default__BP_ConditionBehaviour_Creature_Killed_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_Creature_Killed_Base_C* UBP_ConditionBehaviour_Creature_Killed_Base_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_Creature_Killed_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_Creature_Killed_Base_C*>(UBP_ConditionBehaviour_Creature_Killed_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.CheckCreatureTags
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       CurrentCreatureTags                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bHasCreatureTraits                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Creature_Killed_Base_C::CheckCreatureTags(const struct FGameplayTagContainer& CurrentCreatureTags, bool* bHasCreatureTraits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_Base_C", "CheckCreatureTags");

	Params::UBP_ConditionBehaviour_Creature_Killed_Base_C_CheckCreatureTags_Params Parms{};

	Parms.CurrentCreatureTags = CurrentCreatureTags;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasCreatureTraits != nullptr)
		*bHasCreatureTraits = Parms.bHasCreatureTraits;

}


// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.GetCreatureTraitInfo
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        CreatureTraitInfo                                                (Parm, OutParm)

void UBP_ConditionBehaviour_Creature_Killed_Base_C::GetCreatureTraitInfo(class FText* CreatureTraitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_Base_C", "GetCreatureTraitInfo");

	Params::UBP_ConditionBehaviour_Creature_Killed_Base_C_GetCreatureTraitInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CreatureTraitInfo != nullptr)
		*CreatureTraitInfo = Parms.CreatureTraitInfo;

}


// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Description                                                      (Parm, OutParm)
// class FText                        CallFunc_GetCreatureTraitInfo_CreatureTraitInfo                  (None)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_ConditionBehaviour_Creature_Killed_Base_C::GetDebugText(class FText* Description, class FText CallFunc_GetCreatureTraitInfo_CreatureTraitInfo, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_Base_C", "GetDebugText");

	Params::UBP_ConditionBehaviour_Creature_Killed_Base_C_GetDebugText_Params Parms{};

	Parms.CallFunc_GetCreatureTraitInfo_CreatureTraitInfo = CallFunc_GetCreatureTraitInfo_CreatureTraitInfo;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.OnCreatureKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Creature_Info                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CreatureTagContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       KillerTagContainer                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_CheckCreatureTags_bHasCreatureTraits                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Creature_Killed_Base_C::OnCreatureKilled(const struct FDataTableRowHandle& Creature_Info, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer, bool CallFunc_CheckCreatureTags_bHasCreatureTraits, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_HasTag_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_Base_C", "OnCreatureKilled");

	Params::UBP_ConditionBehaviour_Creature_Killed_Base_C_OnCreatureKilled_Params Parms{};

	Parms.Creature_Info = Creature_Info;
	Parms.CreatureTagContainer = CreatureTagContainer;
	Parms.KillerTagContainer = KillerTagContainer;
	Parms.CallFunc_CheckCreatureTags_bHasCreatureTraits = CallFunc_CheckCreatureTags_bHasCreatureTraits;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.OnConditionRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Creature_Killed_Base_C::OnConditionRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_Base_C", "OnConditionRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Creature_Killed_Base_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_Base_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.InitializeFromPersistence
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FConditionPersistentData    UpdatedProgressData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ConditionBehaviour_Creature_Killed_Base_C::InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_Base_C", "InitializeFromPersistence");

	Params::UBP_ConditionBehaviour_Creature_Killed_Base_C_InitializeFromPersistence_Params Parms{};

	Parms.UpdatedProgressData = UpdatedProgressData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.ExecuteUbergraph_BP_ConditionBehaviour_Creature_Killed_Base
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

void UBP_ConditionBehaviour_Creature_Killed_Base_C::ExecuteUbergraph_BP_ConditionBehaviour_Creature_Killed_Base(int32 EntryPoint, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_Base_C", "ExecuteUbergraph_BP_ConditionBehaviour_Creature_Killed_Base");

	Params::UBP_ConditionBehaviour_Creature_Killed_Base_C_ExecuteUbergraph_BP_ConditionBehaviour_Creature_Killed_Base_Params Parms{};

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


