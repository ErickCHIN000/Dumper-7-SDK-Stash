#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C
// (None)

class UClass* UBP_RewardBehaviour_Technique_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RewardBehaviour_Technique_Base_C");

	return Clss;
}


// BP_RewardBehaviour_Technique_Base_C BP_RewardBehaviour_Technique_Base.Default__BP_RewardBehaviour_Technique_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RewardBehaviour_Technique_Base_C* UBP_RewardBehaviour_Technique_Base_C::GetDefaultObj()
{
	static class UBP_RewardBehaviour_Technique_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RewardBehaviour_Technique_Base_C*>(UBP_RewardBehaviour_Technique_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.GetSkillsToReward
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSkillReferenceContainer    SkillReferences                                                  (Parm, OutParm)

void UBP_RewardBehaviour_Technique_Base_C::GetSkillsToReward(struct FSkillReferenceContainer* SkillReferences)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Technique_Base_C", "GetSkillsToReward");

	Params::UBP_RewardBehaviour_Technique_Base_C_GetSkillsToReward_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SkillReferences != nullptr)
		*SkillReferences = std::move(Parms.SkillReferences);

}


// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.IsRewardValid
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsValid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutInvalidReason                                                 (Parm, OutParm)
// bool                               CallFunc_IsRewardValid_bIsValid                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_IsRewardValid_OutInvalidReason                          (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISkillUnlockInterface>K2Node_DynamicCast_AsSkill_Unlock_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillReferenceContainer    CallFunc_GetSkillsToReward_SkillReferences                       (None)
// struct FSkillDataReference         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSkillFullyUnlocked_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Technique_Base_C::IsRewardValid(class APlayerState* PlayerState, bool* bIsValid, class FText* OutInvalidReason, bool CallFunc_IsRewardValid_bIsValid, class FText CallFunc_IsRewardValid_OutInvalidReason, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, TScriptInterface<class ISkillUnlockInterface> K2Node_DynamicCast_AsSkill_Unlock_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FSkillReferenceContainer& CallFunc_GetSkillsToReward_SkillReferences, const struct FSkillDataReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasSkillFullyUnlocked_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Technique_Base_C", "IsRewardValid");

	Params::UBP_RewardBehaviour_Technique_Base_C_IsRewardValid_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CallFunc_IsRewardValid_bIsValid = CallFunc_IsRewardValid_bIsValid;
	Parms.CallFunc_IsRewardValid_OutInvalidReason = CallFunc_IsRewardValid_OutInvalidReason;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsSkill_Unlock_Interface = K2Node_DynamicCast_AsSkill_Unlock_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetSkillsToReward_SkillReferences = CallFunc_GetSkillsToReward_SkillReferences;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasSkillFullyUnlocked_ReturnValue = CallFunc_HasSkillFullyUnlocked_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (OutInvalidReason != nullptr)
		*OutInvalidReason = Parms.OutInvalidReason;

}


// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        DebugText                                                        (Parm, OutParm)
// TArray<class FString>              Skills                                                           (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillReferenceContainer    CallFunc_GetSkillsToReward_SkillReferences                       (None)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// struct FSkillDataReference         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_ToString_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Technique_Base_C::GetDebugText(class FText* DebugText, const TArray<class FString>& Skills, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSkillReferenceContainer& CallFunc_GetSkillsToReward_SkillReferences, const class FString& CallFunc_JoinStringArray_ReturnValue, const struct FSkillDataReference& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_ToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetBaseFilename_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Technique_Base_C", "GetDebugText");

	Params::UBP_RewardBehaviour_Technique_Base_C_GetDebugText_Params Parms{};

	Parms.Skills = Skills;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSkillsToReward_SkillReferences = CallFunc_GetSkillsToReward_SkillReferences;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_ToString_ReturnValue = CallFunc_ToString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DebugText != nullptr)
		*DebugText = Parms.DebugText;

}


// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.RewardSkills
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SenderContextObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSkillDataReference         CurrentSkillReference                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToString_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_UnlockSkillReference_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueAssetId_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FSkillReferenceContainer    CallFunc_GetSkillsToReward_SkillReferences                       (None)
// struct FSkillDataReference         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Technique_Base_C::RewardSkills(class APlayerState* PlayerState, class UObject* SenderContextObject, const struct FSkillDataReference& CurrentSkillReference, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_ToString_ReturnValue, const class FString& CallFunc_GetBaseFilename_ReturnValue, bool CallFunc_UnlockSkillReference_ReturnValue, const struct FGuid& CallFunc_GetUniqueAssetId_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const struct FSkillReferenceContainer& CallFunc_GetSkillsToReward_SkillReferences, const struct FSkillDataReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Technique_Base_C", "RewardSkills");

	Params::UBP_RewardBehaviour_Technique_Base_C_RewardSkills_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.SenderContextObject = SenderContextObject;
	Parms.CurrentSkillReference = CurrentSkillReference;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_ToString_ReturnValue = CallFunc_ToString_ReturnValue;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.CallFunc_UnlockSkillReference_ReturnValue = CallFunc_UnlockSkillReference_ReturnValue;
	Parms.CallFunc_GetUniqueAssetId_ReturnValue = CallFunc_GetUniqueAssetId_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_GetSkillsToReward_SkillReferences = CallFunc_GetSkillsToReward_SkillReferences;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.ApplyReward
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SenderContextObject                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Technique_Base_C::ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Technique_Base_C", "ApplyReward");

	Params::UBP_RewardBehaviour_Technique_Base_C_ApplyReward_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.SenderContextObject = SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.ExecuteUbergraph_BP_RewardBehaviour_Technique_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_Event_PlayerState                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_SenderContextObject                                 (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Technique_Base_C::ExecuteUbergraph_BP_RewardBehaviour_Technique_Base(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Technique_Base_C", "ExecuteUbergraph_BP_RewardBehaviour_Technique_Base");

	Params::UBP_RewardBehaviour_Technique_Base_C_ExecuteUbergraph_BP_RewardBehaviour_Technique_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerState = K2Node_Event_PlayerState;
	Parms.K2Node_Event_SenderContextObject = K2Node_Event_SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


