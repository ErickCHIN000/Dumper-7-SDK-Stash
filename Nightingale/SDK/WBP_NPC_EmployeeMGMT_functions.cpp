#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C
// (None)

class UClass* UWBP_NPC_EmployeeMGMT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NPC_EmployeeMGMT_C");

	return Clss;
}


// WBP_NPC_EmployeeMGMT_C WBP_NPC_EmployeeMGMT.Default__WBP_NPC_EmployeeMGMT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NPC_EmployeeMGMT_C* UWBP_NPC_EmployeeMGMT_C::GetDefaultObj()
{
	static class UWBP_NPC_EmployeeMGMT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NPC_EmployeeMGMT_C*>(UWBP_NPC_EmployeeMGMT_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.Get Employee Button to Focus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Common_Button_Base_C*   ButtonToFocus                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_EmployeeMGMT_C::Get_Employee_Button_to_Focus(class UWBP_Common_Button_Base_C** ButtonToFocus, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "Get Employee Button to Focus");

	Params::UWBP_NPC_EmployeeMGMT_C_Get_Employee_Button_to_Focus_Params Parms{};

	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ButtonToFocus != nullptr)
		*ButtonToFocus = Parms.ButtonToFocus;

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.SetupMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               CallFunc_GetLeader_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNPCNameText_NPCName                                  (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAICompanionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAICompanionInterface>K2Node_DynamicCast_AsAICompanion_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERecruitmentFailureReasonCallFunc_CanBeRecruited_OutFailureReason                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeRecruited_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_EmployeeMGMT_C::SetupMenu(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXCharacter* CallFunc_GetLeader_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetNPCNameText_NPCName, bool CallFunc_IsValid_ReturnValue_2, class UAICompanionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess_1, enum class ERecruitmentFailureReason CallFunc_CanBeRecruited_OutFailureReason, bool CallFunc_CanBeRecruited_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "SetupMenu");

	Params::UWBP_NPC_EmployeeMGMT_C_SetupMenu_Params Parms{};

	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetLeader_ReturnValue = CallFunc_GetLeader_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNPCNameText_NPCName = CallFunc_GetNPCNameText_NPCName;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsAICompanion_Interface = K2Node_DynamicCast_AsAICompanion_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CanBeRecruited_OutFailureReason = CallFunc_CanBeRecruited_OutFailureReason;
	Parms.CallFunc_CanBeRecruited_ReturnValue = CallFunc_CanBeRecruited_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.CompanionRecruited
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OwningPlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ANWXAICharacter*             RecruitedAI                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLocalPlayerPersistentId_PlayerId                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_EmployeeMGMT_C::CompanionRecruited(const class FString& OwningPlayerId, class ANWXAICharacter* RecruitedAI, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "CompanionRecruited");

	Params::UWBP_NPC_EmployeeMGMT_C_CompanionRecruited_Params Parms{};

	Parms.OwningPlayerId = OwningPlayerId;
	Parms.RecruitedAI = RecruitedAI;
	Parms.CallFunc_GetLocalPlayerPersistentId_PlayerId = CallFunc_GetLocalPlayerPersistentId_PlayerId;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.CompanionDismissed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PreviousOwningPlayerID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ANWXAICharacter*             DismissedAI                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_EmployeeMGMT_C::CompanionDismissed(const class FString& PreviousOwningPlayerID, class ANWXAICharacter* DismissedAI, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "CompanionDismissed");

	Params::UWBP_NPC_EmployeeMGMT_C_CompanionDismissed_Params Parms{};

	Parms.PreviousOwningPlayerID = PreviousOwningPlayerID;
	Parms.DismissedAI = DismissedAI;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.SetupEmployeeStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LHasLeader                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          LNPCCharacter                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAICompanionInterface>K2Node_DynamicCast_AsAICompanion_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLeaderName_LeaderName                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLeaderName_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TScriptInterface<class IAICompanionInterface>K2Node_DynamicCast_AsAICompanion_Interface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_HasLeader_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_EmployeeMGMT_C::SetupEmployeeStatus(bool LHasLeader, class ABP_Creature_NPC_C* LNPCCharacter, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_GetLeaderName_LeaderName, bool CallFunc_GetLeaderName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class FText Temp_text_Variable, bool CallFunc_Not_PreBool_ReturnValue_3, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_2, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_BooleanOR_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_HasLeader_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default_1, bool CallFunc_BooleanOR_ReturnValue_2, int32 K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "SetupEmployeeStatus");

	Params::UWBP_NPC_EmployeeMGMT_C_SetupEmployeeStatus_Params Parms{};

	Parms.LHasLeader = LHasLeader;
	Parms.LNPCCharacter = LNPCCharacter;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsAICompanion_Interface = K2Node_DynamicCast_AsAICompanion_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetLeaderName_LeaderName = CallFunc_GetLeaderName_LeaderName;
	Parms.CallFunc_GetLeaderName_ReturnValue = CallFunc_GetLeaderName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_DynamicCast_AsAICompanion_Interface_1 = K2Node_DynamicCast_AsAICompanion_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_HasLeader_ReturnValue = CallFunc_HasLeader_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.AddDesire
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNWXNPCDesireData           Desire                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Completed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LCompleted                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXNPCDesireData           LDesire                                                          (Edit, BlueprintVisible)

void UWBP_NPC_EmployeeMGMT_C::AddDesire(struct FNWXNPCDesireData& Desire, bool Completed, bool LCompleted, const struct FNWXNPCDesireData& LDesire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "AddDesire");

	Params::UWBP_NPC_EmployeeMGMT_C_AddDesire_Params Parms{};

	Parms.Desire = Desire;
	Parms.Completed = Completed;
	Parms.LCompleted = LCompleted;
	Parms.LDesire = LDesire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_NPC_EmployeeMGMT_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_NPC_EmployeeMGMT_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.BndEvt__WBP_NPC_EmployeeMGMT_CBU_ManageInventory_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_EmployeeMGMT_C::BndEvt__WBP_NPC_EmployeeMGMT_CBU_ManageInventory_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "BndEvt__WBP_NPC_EmployeeMGMT_CBU_ManageInventory_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_NPC_EmployeeMGMT_C_BndEvt__WBP_NPC_EmployeeMGMT_CBU_ManageInventory_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.BndEvt__WBP_NPC_EmployeeMGMT_CBU_Dismiss_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_EmployeeMGMT_C::BndEvt__WBP_NPC_EmployeeMGMT_CBU_Dismiss_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "BndEvt__WBP_NPC_EmployeeMGMT_CBU_Dismiss_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_NPC_EmployeeMGMT_C_BndEvt__WBP_NPC_EmployeeMGMT_CBU_Dismiss_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.BndEvt__WBP_NPC_EmployeeMGMT_CBU_Recruit_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_EmployeeMGMT_C::BndEvt__WBP_NPC_EmployeeMGMT_CBU_Recruit_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "BndEvt__WBP_NPC_EmployeeMGMT_CBU_Recruit_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_NPC_EmployeeMGMT_C_BndEvt__WBP_NPC_EmployeeMGMT_CBU_Recruit_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.ExecuteUbergraph_WBP_NPC_EmployeeMGMT
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Inv_TwoInventories_NPC_C*CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_EmployeeMGMT_C::ExecuteUbergraph_WBP_NPC_EmployeeMGMT(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsValid_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UWBP_Inv_TwoInventories_NPC_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "ExecuteUbergraph_WBP_NPC_EmployeeMGMT");

	Params::UWBP_NPC_EmployeeMGMT_C_ExecuteUbergraph_WBP_NPC_EmployeeMGMT_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_EmployeeMGMT.WBP_NPC_EmployeeMGMT_C.OnNPCInventoryOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NPC_EmployeeMGMT_C::OnNPCInventoryOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_EmployeeMGMT_C", "OnNPCInventoryOpened__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


