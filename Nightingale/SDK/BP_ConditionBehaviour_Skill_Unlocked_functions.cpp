#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_Skill_Unlocked.BP_ConditionBehaviour_Skill_Unlocked_C
// (None)

class UClass* UBP_ConditionBehaviour_Skill_Unlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_Skill_Unlocked_C");

	return Clss;
}


// BP_ConditionBehaviour_Skill_Unlocked_C BP_ConditionBehaviour_Skill_Unlocked.Default__BP_ConditionBehaviour_Skill_Unlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_Skill_Unlocked_C* UBP_ConditionBehaviour_Skill_Unlocked_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_Skill_Unlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_Skill_Unlocked_C*>(UBP_ConditionBehaviour_Skill_Unlocked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_Skill_Unlocked.BP_ConditionBehaviour_Skill_Unlocked_C.OnSkillReferenceUnlocked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillDataReference         UnlockedSkill                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    CallFunc_MakeConditionPersistentDataFromBool_ReturnValue         (NoDestructor)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISkillUnlockInterface>K2Node_DynamicCast_AsSkill_Unlock_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsComplete_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSkillFullyUnlocked_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Skill_Unlocked_C::OnSkillReferenceUnlocked(struct FSkillDataReference& UnlockedSkill, bool Temp_bool_Variable, const struct FConditionPersistentData& CallFunc_MakeConditionPersistentDataFromBool_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, TScriptInterface<class ISkillUnlockInterface> K2Node_DynamicCast_AsSkill_Unlock_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsComplete_ReturnValue, bool CallFunc_HasSkillFullyUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Skill_Unlocked_C", "OnSkillReferenceUnlocked");

	Params::UBP_ConditionBehaviour_Skill_Unlocked_C_OnSkillReferenceUnlocked_Params Parms{};

	Parms.UnlockedSkill = UnlockedSkill;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeConditionPersistentDataFromBool_ReturnValue = CallFunc_MakeConditionPersistentDataFromBool_ReturnValue;
	Parms.CallFunc_GetConditionPlayerState_PlayerState = CallFunc_GetConditionPlayerState_PlayerState;
	Parms.K2Node_DynamicCast_AsSkill_Unlock_Interface = K2Node_DynamicCast_AsSkill_Unlock_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsComplete_ReturnValue = CallFunc_IsComplete_ReturnValue;
	Parms.CallFunc_HasSkillFullyUnlocked_ReturnValue = CallFunc_HasSkillFullyUnlocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Skill_Unlocked.BP_ConditionBehaviour_Skill_Unlocked_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Description                                                      (Parm, OutParm)
// class FString                      CallFunc_ToString_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_ConditionBehaviour_Skill_Unlocked_C::GetDebugText(class FText* Description, const class FString& CallFunc_ToString_ReturnValue, const class FString& CallFunc_GetBaseFilename_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Skill_Unlocked_C", "GetDebugText");

	Params::UBP_ConditionBehaviour_Skill_Unlocked_C_GetDebugText_Params Parms{};

	Parms.CallFunc_ToString_ReturnValue = CallFunc_ToString_ReturnValue;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_ConditionBehaviour_Skill_Unlocked.BP_ConditionBehaviour_Skill_Unlocked_C.OnConditionRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Skill_Unlocked_C::OnConditionRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Skill_Unlocked_C", "OnConditionRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Skill_Unlocked.BP_ConditionBehaviour_Skill_Unlocked_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Skill_Unlocked_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Skill_Unlocked_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Skill_Unlocked.BP_ConditionBehaviour_Skill_Unlocked_C.CompleteIfSatisfiedOnSetup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Skill_Unlocked_C::CompleteIfSatisfiedOnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Skill_Unlocked_C", "CompleteIfSatisfiedOnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Skill_Unlocked.BP_ConditionBehaviour_Skill_Unlocked_C.ExecuteUbergraph_BP_ConditionBehaviour_Skill_Unlocked
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState_2                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Skill_Unlocked_C::ExecuteUbergraph_BP_ConditionBehaviour_Skill_Unlocked(int32 EntryPoint, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Skill_Unlocked_C", "ExecuteUbergraph_BP_ConditionBehaviour_Skill_Unlocked");

	Params::UBP_ConditionBehaviour_Skill_Unlocked_C_ExecuteUbergraph_BP_ConditionBehaviour_Skill_Unlocked_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetConditionPlayerState_PlayerState = CallFunc_GetConditionPlayerState_PlayerState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetConditionPlayerState_PlayerState_1 = CallFunc_GetConditionPlayerState_PlayerState_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetConditionPlayerState_PlayerState_2 = CallFunc_GetConditionPlayerState_PlayerState_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


