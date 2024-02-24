#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Dialogue.BP_Dialogue_C
// (Actor)

class UClass* ABP_Dialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Dialogue_C");

	return Clss;
}


// BP_Dialogue_C BP_Dialogue.Default__BP_Dialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Dialogue_C* ABP_Dialogue_C::GetDefaultObj()
{
	static class ABP_Dialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Dialogue_C*>(ABP_Dialogue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Dialogue.BP_Dialogue_C.ReenableMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::ReenableMovement(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ReenableMovement");

	Params::ABP_Dialogue_C_ReenableMovement_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue = CallFunc_GetCurrentMovementState_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.ResetCounters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Dialogue_C::ResetCounters(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ResetCounters");

	Params::ABP_Dialogue_C_ResetCounters_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.SplitEventAndArguments
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SourceString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Event                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Arguments                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EventName                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              LocalArray                                                       (Edit, BlueprintVisible)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue_1                            (ReferenceParm)
// class FString                      CallFunc_JoinStringArray_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_Dialogue_C::SplitEventAndArguments(const class FString& SourceString, class FString* Event, class FString* Arguments, const class FString& EventName, const TArray<class FString>& LocalArray, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_JoinStringArray_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1, const class FString& CallFunc_JoinStringArray_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "SplitEventAndArguments");

	Params::ABP_Dialogue_C_SplitEventAndArguments_Params Parms{};

	Parms.SourceString = SourceString;
	Parms.EventName = EventName;
	Parms.LocalArray = LocalArray;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;
	Parms.CallFunc_ParseIntoArray_ReturnValue_1 = CallFunc_ParseIntoArray_ReturnValue_1;
	Parms.CallFunc_JoinStringArray_ReturnValue_1 = CallFunc_JoinStringArray_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Event != nullptr)
		*Event = std::move(Parms.Event);

	if (Arguments != nullptr)
		*Arguments = std::move(Parms.Arguments);

}


// Function BP_Dialogue.BP_Dialogue_C.CullAllDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetParentActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DialogueStackManager_C*  K2Node_DynamicCast_AsBP_Dialogue_Stack_Manager                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Dialogue_C::CullAllDialogue(class AActor* CallFunc_GetParentActor_ReturnValue, class ABP_DialogueStackManager_C* K2Node_DynamicCast_AsBP_Dialogue_Stack_Manager, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "CullAllDialogue");

	Params::ABP_Dialogue_C_CullAllDialogue_Params Parms{};

	Parms.CallFunc_GetParentActor_ReturnValue = CallFunc_GetParentActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_Stack_Manager = K2Node_DynamicCast_AsBP_Dialogue_Stack_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.PropagateGlobalColorCodingToDialogueActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Space_character                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CurrentlyAnalysedDialogueActor                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                ExistingColorCodingStrings                                       (Edit, BlueprintVisible)
// TArray<class FString>              DialogueActorNames                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ColorCoding         CallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesK2Node_MakeStruct_struct_DialogueActorReferences                 (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)

void ABP_Dialogue_C::PropagateGlobalColorCodingToDialogueActors(const class FString& Space_character, const class FString& CurrentlyAnalysedDialogueActor, const TArray<class FName>& ExistingColorCodingStrings, const TArray<class FString>& DialogueActorNames, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_ColorCoding& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FStruct_DialogueActorReferences& K2Node_MakeStruct_struct_DialogueActorReferences, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class FString>& CallFunc_Map_Keys_Keys, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "PropagateGlobalColorCodingToDialogueActors");

	Params::ABP_Dialogue_C_PropagateGlobalColorCodingToDialogueActors_Params Parms{};

	Parms.Space_character = Space_character;
	Parms.CurrentlyAnalysedDialogueActor = CurrentlyAnalysedDialogueActor;
	Parms.ExistingColorCodingStrings = ExistingColorCodingStrings;
	Parms.DialogueActorNames = DialogueActorNames;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_MakeStruct_struct_DialogueActorReferences = K2Node_MakeStruct_struct_DialogueActorReferences;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.ReadDialogueOption
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Args2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        Next                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Prompt                                                           (Parm, OutParm)
// class FText                        Thought                                                          (Parm, OutParm)
// class FText                        Disabled_text                                                    (Parm, OutParm)
// bool                               Don_t_Count_to_AvailableOptions                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Hide_if_disabled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        TargetNode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enabled_                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_ResolveNodeID_IDAfterFlowControl                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Split_LeftS_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS_1                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      CallFunc_Split_LeftS_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS_2                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Dialogue_C::ReadDialogueOption(const class FString& Args2, class FText Text, class FName Next, bool* Enabled, class FText* Prompt, class FText* Thought, class FText* Disabled_text, bool* Don_t_Count_to_AvailableOptions, bool* Hide_if_disabled, class FName* TargetNode, bool Enabled_, class FName CallFunc_ResolveNodeID_IDAfterFlowControl, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Split_LeftS_1, const class FString& CallFunc_Split_RightS_1, bool CallFunc_Split_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Split_LeftS_2, const class FString& CallFunc_Split_RightS_2, bool CallFunc_Split_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ReadDialogueOption");

	Params::ABP_Dialogue_C_ReadDialogueOption_Params Parms{};

	Parms.Args2 = Args2;
	Parms.Text = Text;
	Parms.Next = Next;
	Parms.Enabled_ = Enabled_;
	Parms.CallFunc_ResolveNodeID_IDAfterFlowControl = CallFunc_ResolveNodeID_IDAfterFlowControl;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Split_LeftS_1 = CallFunc_Split_LeftS_1;
	Parms.CallFunc_Split_RightS_1 = CallFunc_Split_RightS_1;
	Parms.CallFunc_Split_ReturnValue_1 = CallFunc_Split_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Split_LeftS_2 = CallFunc_Split_LeftS_2;
	Parms.CallFunc_Split_RightS_2 = CallFunc_Split_RightS_2;
	Parms.CallFunc_Split_ReturnValue_2 = CallFunc_Split_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	if (Prompt != nullptr)
		*Prompt = Parms.Prompt;

	if (Thought != nullptr)
		*Thought = Parms.Thought;

	if (Disabled_text != nullptr)
		*Disabled_text = Parms.Disabled_text;

	if (Don_t_Count_to_AvailableOptions != nullptr)
		*Don_t_Count_to_AvailableOptions = Parms.Don_t_Count_to_AvailableOptions;

	if (Hide_if_disabled != nullptr)
		*Hide_if_disabled = Parms.Hide_if_disabled;

	if (TargetNode != nullptr)
		*TargetNode = Parms.TargetNode;

}


// Function BP_Dialogue.BP_Dialogue_C.ReadAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFDialogueData              Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               TargetIsPlayer                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              DelayedInSeconds                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FullBodyAnimation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      AnimationName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      TargetActorName                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::ReadAnimation(const struct FFDialogueData& Data, bool* TargetIsPlayer, float* DelayedInSeconds, bool* FullBodyAnimation, class FString* AnimationName, class FString* TargetActorName, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, float CallFunc_Conv_StringToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ReadAnimation");

	Params::ABP_Dialogue_C_ReadAnimation_Params Parms{};

	Parms.Data = Data;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetIsPlayer != nullptr)
		*TargetIsPlayer = Parms.TargetIsPlayer;

	if (DelayedInSeconds != nullptr)
		*DelayedInSeconds = Parms.DelayedInSeconds;

	if (FullBodyAnimation != nullptr)
		*FullBodyAnimation = Parms.FullBodyAnimation;

	if (AnimationName != nullptr)
		*AnimationName = std::move(Parms.AnimationName);

	if (TargetActorName != nullptr)
		*TargetActorName = std::move(Parms.TargetActorName);

}


// Function BP_Dialogue.BP_Dialogue_C.CreateWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_DialogueSingleOptionData>Prompts                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DialoguePlayersChoicePrompts_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::CreateWidget(TArray<struct FStruct_DialogueSingleOptionData>& Prompts, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_DialoguePlayersChoicePrompts_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "CreateWidget");

	Params::ABP_Dialogue_C_CreateWidget_Params Parms{};

	Parms.Prompts = Prompts;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.ReadCounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FFDialogueData              DialogueData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CountTimesSeen_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ScopeLocal_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Treshold                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NextMoreOrEqual                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NextLess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CounterID                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Dialogue_C::ReadCounter(const class FString& ID, const struct FFDialogueData& DialogueData, bool* CountTimesSeen_, bool* ScopeLocal_, int32* Treshold, class FName* NextMoreOrEqual, class FName* NextLess, class FString* CounterID, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ReadCounter");

	Params::ABP_Dialogue_C_ReadCounter_Params Parms{};

	Parms.ID = ID;
	Parms.DialogueData = DialogueData;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CountTimesSeen_ != nullptr)
		*CountTimesSeen_ = Parms.CountTimesSeen_;

	if (ScopeLocal_ != nullptr)
		*ScopeLocal_ = Parms.ScopeLocal_;

	if (Treshold != nullptr)
		*Treshold = Parms.Treshold;

	if (NextMoreOrEqual != nullptr)
		*NextMoreOrEqual = Parms.NextMoreOrEqual;

	if (NextLess != nullptr)
		*NextLess = Parms.NextLess;

	if (CounterID != nullptr)
		*CounterID = std::move(Parms.CounterID);

}


// Function BP_Dialogue.BP_Dialogue_C.Get0thElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Dialogue_C::Get0thElement(TArray<class FName>& In, class FName* Out, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "Get0thElement");

	Params::ABP_Dialogue_C_Get0thElement_Params Parms{};

	Parms.In = In;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function BP_Dialogue.BP_Dialogue_C.IncrementDialogueCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CounterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ScopeLocal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::IncrementDialogueCounter(const class FString& CounterID, bool ScopeLocal, int32 Temp_int_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "IncrementDialogueCounter");

	Params::ABP_Dialogue_C_IncrementDialogueCounter_Params Parms{};

	Parms.CounterID = CounterID;
	Parms.ScopeLocal = ScopeLocal;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGGame_Instance = K2Node_DynamicCast_AsCGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.ResolveCounterNext
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ScopeLocal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Treshold                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NextMoreOrEqual                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        _NextLess                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CounterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        OutNext                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ChosenLess                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Dialogue_C::ResolveCounterNext(bool ScopeLocal, int32 Treshold, class FName NextMoreOrEqual, class FName _NextLess, const class FString& CounterID, class FName* OutNext, bool* ChosenLess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ResolveCounterNext");

	Params::ABP_Dialogue_C_ResolveCounterNext_Params Parms{};

	Parms.ScopeLocal = ScopeLocal;
	Parms.Treshold = Treshold;
	Parms.NextMoreOrEqual = NextMoreOrEqual;
	Parms._NextLess = _NextLess;
	Parms.CounterID = CounterID;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGGame_Instance = K2Node_DynamicCast_AsCGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutNext != nullptr)
		*OutNext = Parms.OutNext;

	if (ChosenLess != nullptr)
		*ChosenLess = Parms.ChosenLess;

}


// Function BP_Dialogue.BP_Dialogue_C.CheckForBool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      BoolName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                Next                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        NextRow                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Dialogue_C::CheckForBool(class FString& BoolName, TArray<class FName>& Next, class FName* NextRow, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "CheckForBool");

	Params::ABP_Dialogue_C_CheckForBool_Params Parms{};

	Parms.BoolName = BoolName;
	Parms.Next = Next;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGGame_Instance = K2Node_DynamicCast_AsCGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NextRow != nullptr)
		*NextRow = Parms.NextRow;

}


// Function BP_Dialogue.BP_Dialogue_C.ResolveNodeID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        InID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               JustPeeking                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DontIncrementSeeCounters                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        IDAfterFlowControl                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData                   (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata               (HasGetValueTypeHash)
// bool                               CallFunc_ReadCounter_CountTimesSeen_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ReadCounter_ScopeLocal_                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_ReadCounter_Treshold                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ReadCounter_NextMoreOrEqual                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ReadCounter_NextLess                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ReadCounter_CounterID                                   (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_ResolveCounterNext_OutNext                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ResolveCounterNext_ChosenLess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_ResolveNodeID_IDAfterFlowControl                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ResolveNodeID_IDAfterFlowControl_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ResolveNodeID_IDAfterFlowControl_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ResolveNodeID_IDAfterFlowControl_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Get0thElement_Out                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ResolveNodeID_IDAfterFlowControl_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_CheckForBool_NextRow                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ResolveNodeID_IDAfterFlowControl_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Dialogue_C::ResolveNodeID(class FName InID, bool JustPeeking, bool DontIncrementSeeCounters, class FName* IDAfterFlowControl, bool CallFunc_NotEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata, bool CallFunc_ReadCounter_CountTimesSeen_, bool CallFunc_ReadCounter_ScopeLocal_, int32 CallFunc_ReadCounter_Treshold, class FName CallFunc_ReadCounter_NextMoreOrEqual, class FName CallFunc_ReadCounter_NextLess, const class FString& CallFunc_ReadCounter_CounterID, class FName CallFunc_ResolveCounterNext_OutNext, bool CallFunc_ResolveCounterNext_ChosenLess, class FName CallFunc_ResolveNodeID_IDAfterFlowControl, class FName CallFunc_ResolveNodeID_IDAfterFlowControl_1, class FName CallFunc_ResolveNodeID_IDAfterFlowControl_2, int32 CallFunc_Conv_StringToInt_ReturnValue, class FName CallFunc_ResolveNodeID_IDAfterFlowControl_3, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_Count_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FName CallFunc_Get0thElement_Out, class FName CallFunc_ResolveNodeID_IDAfterFlowControl_4, class FName CallFunc_CheckForBool_NextRow, class FName CallFunc_ResolveNodeID_IDAfterFlowControl_5, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ResolveNodeID");

	Params::ABP_Dialogue_C_ResolveNodeID_Params Parms{};

	Parms.InID = InID;
	Parms.JustPeeking = JustPeeking;
	Parms.DontIncrementSeeCounters = DontIncrementSeeCounters;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData = CallFunc_Get_Data_From_Data_Table_DialogueData;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata = CallFunc_Get_Data_From_Data_Table_DialogueMetadata;
	Parms.CallFunc_ReadCounter_CountTimesSeen_ = CallFunc_ReadCounter_CountTimesSeen_;
	Parms.CallFunc_ReadCounter_ScopeLocal_ = CallFunc_ReadCounter_ScopeLocal_;
	Parms.CallFunc_ReadCounter_Treshold = CallFunc_ReadCounter_Treshold;
	Parms.CallFunc_ReadCounter_NextMoreOrEqual = CallFunc_ReadCounter_NextMoreOrEqual;
	Parms.CallFunc_ReadCounter_NextLess = CallFunc_ReadCounter_NextLess;
	Parms.CallFunc_ReadCounter_CounterID = CallFunc_ReadCounter_CounterID;
	Parms.CallFunc_ResolveCounterNext_OutNext = CallFunc_ResolveCounterNext_OutNext;
	Parms.CallFunc_ResolveCounterNext_ChosenLess = CallFunc_ResolveCounterNext_ChosenLess;
	Parms.CallFunc_ResolveNodeID_IDAfterFlowControl = CallFunc_ResolveNodeID_IDAfterFlowControl;
	Parms.CallFunc_ResolveNodeID_IDAfterFlowControl_1 = CallFunc_ResolveNodeID_IDAfterFlowControl_1;
	Parms.CallFunc_ResolveNodeID_IDAfterFlowControl_2 = CallFunc_ResolveNodeID_IDAfterFlowControl_2;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_ResolveNodeID_IDAfterFlowControl_3 = CallFunc_ResolveNodeID_IDAfterFlowControl_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Get0thElement_Out = CallFunc_Get0thElement_Out;
	Parms.CallFunc_ResolveNodeID_IDAfterFlowControl_4 = CallFunc_ResolveNodeID_IDAfterFlowControl_4;
	Parms.CallFunc_CheckForBool_NextRow = CallFunc_CheckForBool_NextRow;
	Parms.CallFunc_ResolveNodeID_IDAfterFlowControl_5 = CallFunc_ResolveNodeID_IDAfterFlowControl_5;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IDAfterFlowControl != nullptr)
		*IDAfterFlowControl = Parms.IDAfterFlowControl;

}


// Function BP_Dialogue.BP_Dialogue_C.Set Next Data Row
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NextRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DontIncrementSeeCounters                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DialogueDidntEnd                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_ResolveNodeID_IDAfterFlowControl                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Dialogue_C::Set_Next_Data_Row(class FName NextRow, bool DontIncrementSeeCounters, bool* DialogueDidntEnd, class FName CallFunc_ResolveNodeID_IDAfterFlowControl, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "Set Next Data Row");

	Params::ABP_Dialogue_C_Set_Next_Data_Row_Params Parms{};

	Parms.NextRow = NextRow;
	Parms.DontIncrementSeeCounters = DontIncrementSeeCounters;
	Parms.CallFunc_ResolveNodeID_IDAfterFlowControl = CallFunc_ResolveNodeID_IDAfterFlowControl;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DialogueDidntEnd != nullptr)
		*DialogueDidntEnd = Parms.DialogueDidntEnd;

}


// Function BP_Dialogue.BP_Dialogue_C.Get Data From Data Table
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFDialogueData              DialogueData                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FFDialogueMetadata          DialogueMetadata                                                 (Parm, OutParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFDialogueData              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFDialogueMetadata          CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Dialogue_C::Get_Data_From_Data_Table(class FName RowName, struct FFDialogueData* DialogueData, struct FFDialogueMetadata* DialogueMetadata, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFDialogueData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFDialogueMetadata& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "Get Data From Data Table");

	Params::ABP_Dialogue_C_Get_Data_From_Data_Table_Params Parms{};

	Parms.RowName = RowName;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DialogueData != nullptr)
		*DialogueData = std::move(Parms.DialogueData);

	if (DialogueMetadata != nullptr)
		*DialogueMetadata = std::move(Parms.DialogueMetadata);

}


// Function BP_Dialogue.BP_Dialogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.InpActEvt_Character_Interaction_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Dialogue_C::InpActEvt_Character_Interaction_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "InpActEvt_Character_Interaction_K2Node_InputActionEvent_1");

	Params::ABP_Dialogue_C_InpActEvt_Character_Interaction_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.InpActEvt_Dialogue_SelectOption_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Dialogue_C::InpActEvt_Dialogue_SelectOption_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "InpActEvt_Dialogue_SelectOption_K2Node_InputActionEvent_0");

	Params::ABP_Dialogue_C_InpActEvt_Dialogue_SelectOption_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.AudioCreated_5D37B5024CF6F74A394855AA417A4A2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::AudioCreated_5D37B5024CF6F74A394855AA417A4A2A(class UAudioComponent* AudioComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "AudioCreated_5D37B5024CF6F74A394855AA417A4A2A");

	Params::ABP_Dialogue_C_AudioCreated_5D37B5024CF6F74A394855AA417A4A2A_Params Parms{};

	Parms.AudioComponent = AudioComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.Completed_5D37B5024CF6F74A394855AA417A4A2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::Completed_5D37B5024CF6F74A394855AA417A4A2A(class UAudioComponent* AudioComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "Completed_5D37B5024CF6F74A394855AA417A4A2A");

	Params::ABP_Dialogue_C_Completed_5D37B5024CF6F74A394855AA417A4A2A_Params Parms{};

	Parms.AudioComponent = AudioComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.AudioCreated_349FA0914CCD3FBD9BB3448D2FE9D21A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::AudioCreated_349FA0914CCD3FBD9BB3448D2FE9D21A(class UAudioComponent* AudioComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "AudioCreated_349FA0914CCD3FBD9BB3448D2FE9D21A");

	Params::ABP_Dialogue_C_AudioCreated_349FA0914CCD3FBD9BB3448D2FE9D21A_Params Parms{};

	Parms.AudioComponent = AudioComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.Completed_349FA0914CCD3FBD9BB3448D2FE9D21A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::Completed_349FA0914CCD3FBD9BB3448D2FE9D21A(class UAudioComponent* AudioComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "Completed_349FA0914CCD3FBD9BB3448D2FE9D21A");

	Params::ABP_Dialogue_C_Completed_349FA0914CCD3FBD9BB3448D2FE9D21A_Params Parms{};

	Parms.AudioComponent = AudioComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.Start dialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BlockPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGCharacter*                InInstigator                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::Start_dialogue(bool BlockPlayer, class ACGCharacter* InInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "Start dialogue");

	Params::ABP_Dialogue_C_Start_dialogue_Params Parms{};

	Parms.BlockPlayer = BlockPlayer;
	Parms.InInstigator = InInstigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.Next
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "Next");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.Internal End dialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::Internal_End_dialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "Internal End dialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.ImportDialogueActorsFromDataTable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::ImportDialogueActorsFromDataTable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ImportDialogueActorsFromDataTable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.AfterOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::AfterOptionSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "AfterOptionSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.Skip dialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::Skip_dialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "Skip dialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.OnDialogueOptionAutoSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::OnDialogueOptionAutoSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "OnDialogueOptionAutoSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.OptionFullySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::OptionFullySelected(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "OptionFullySelected");

	Params::ABP_Dialogue_C_OptionFullySelected_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.Clear options
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::Clear_options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "Clear options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.PlayDialogueAtRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TargetRow                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BlockPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Dialogue_C::PlayDialogueAtRow(class FName TargetRow, bool BlockPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "PlayDialogueAtRow");

	Params::ABP_Dialogue_C_PlayDialogueAtRow_Params Parms{};

	Parms.TargetRow = TargetRow;
	Parms.BlockPlayer = BlockPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.InpAxisEvt_Dialogue_NextPreviousOption_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::InpAxisEvt_Dialogue_NextPreviousOption_K2Node_InputAxisEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "InpAxisEvt_Dialogue_NextPreviousOption_K2Node_InputAxisEvent_1");

	Params::ABP_Dialogue_C_InpAxisEvt_Dialogue_NextPreviousOption_K2Node_InputAxisEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.ReplaceDialogueOptionThoughts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewThoughts                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NewNotAvailableText                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Dialogue_C::ReplaceDialogueOptionThoughts(int32 OptionIndex, class FText NewThoughts, class FText NewNotAvailableText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ReplaceDialogueOptionThoughts");

	Params::ABP_Dialogue_C_ReplaceDialogueOptionThoughts_Params Parms{};

	Parms.OptionIndex = OptionIndex;
	Parms.NewThoughts = NewThoughts;
	Parms.NewNotAvailableText = NewNotAvailableText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.StartDialogueWithCameraBlend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DialogueViewTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::StartDialogueWithCameraBlend(class AActor* DialogueViewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "StartDialogueWithCameraBlend");

	Params::ABP_Dialogue_C_StartDialogueWithCameraBlend_Params Parms{};

	Parms.DialogueViewTarget = DialogueViewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.StartDialogueWithCameraBlendAtRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TargetRow                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DialogueViewTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::StartDialogueWithCameraBlendAtRow(class FName TargetRow, class AActor* DialogueViewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "StartDialogueWithCameraBlendAtRow");

	Params::ABP_Dialogue_C_StartDialogueWithCameraBlendAtRow_Params Parms{};

	Parms.TargetRow = TargetRow;
	Parms.DialogueViewTarget = DialogueViewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.StartDialogueWithBlendToLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    TargetRotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              InterpolationTimeSeconds                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::StartDialogueWithBlendToLocation(const struct FVector& TargetLocation, const struct FRotator& TargetRotation, float InterpolationTimeSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "StartDialogueWithBlendToLocation");

	Params::ABP_Dialogue_C_StartDialogueWithBlendToLocation_Params Parms{};

	Parms.TargetLocation = TargetLocation;
	Parms.TargetRotation = TargetRotation;
	Parms.InterpolationTimeSeconds = InterpolationTimeSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.StartDialogueWithBlendToLocationAtRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    TargetRotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              InterpolationTimeSeconds                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::StartDialogueWithBlendToLocationAtRow(class FName Row, const struct FVector& TargetLocation, const struct FRotator& TargetRotation, float InterpolationTimeSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "StartDialogueWithBlendToLocationAtRow");

	Params::ABP_Dialogue_C_StartDialogueWithBlendToLocationAtRow_Params Parms{};

	Parms.Row = Row;
	Parms.TargetLocation = TargetLocation;
	Parms.TargetRotation = TargetRotation;
	Parms.InterpolationTimeSeconds = InterpolationTimeSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.Force cancel dialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::Force_cancel_dialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "Force cancel dialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.StartDialogue_FireAndKill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InStartingRow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::StartDialogue_FireAndKill(class FName InStartingRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "StartDialogue_FireAndKill");

	Params::ABP_Dialogue_C_StartDialogue_FireAndKill_Params Parms{};

	Parms.InStartingRow = InStartingRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.OnSkipDialogueLine_ButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              InAxisValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::OnSkipDialogueLine_ButtonPressed(float InAxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "OnSkipDialogueLine_ButtonPressed");

	Params::ABP_Dialogue_C_OnSkipDialogueLine_ButtonPressed_Params Parms{};

	Parms.InAxisValue = InAxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.InterceptPlayerSpotted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACGSquadManager*             InstigatingSquad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::InterceptPlayerSpotted(class ACGSquadManager* InstigatingSquad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "InterceptPlayerSpotted");

	Params::ABP_Dialogue_C_InterceptPlayerSpotted_Params Parms{};

	Parms.InstigatingSquad = InstigatingSquad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.SkipDelayFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::SkipDelayFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "SkipDelayFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.PlayReadiedAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::PlayReadiedAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "PlayReadiedAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.OnTransitionFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::OnTransitionFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "OnTransitionFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.OnDialogueLineEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::OnDialogueLineEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "OnDialogueLineEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Dialogue.BP_Dialogue_C.ExecuteUbergraph_BP_Dialogue
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAIState                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAudioComponent*             Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             K2Node_CustomEvent_AudioComponent                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             K2Node_CustomEvent_AudioComponent_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData                   (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata               (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_1                 (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_1             (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             K2Node_CustomEvent_AudioComponent_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_2                 (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_2             (HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_1                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesK2Node_MakeStruct_struct_DialogueActorReferences                 (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_3                 (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_3             (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_2                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// enum class EAIState                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_3                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             K2Node_CustomEvent_AudioComponent_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_4                 (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_4             (HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_4                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_BlockPlayer_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGCharacter*                K2Node_CustomEvent_InInstigator                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICh_Patroller_Interface_C>K2Node_DynamicCast_AsCh_Patroller_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesK2Node_MakeStruct_struct_DialogueActorReferences_1               (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_5                 (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_5             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Get0thElement_Out                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Get0thElement_Out_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SplitEventAndArguments_Event                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SplitEventAndArguments_Arguments                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// class FName                        CallFunc_Get0thElement_Out_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue_1                            (ReferenceParm)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get0thElement_Out_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_CheckForBool_NextRow                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_7                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Get0thElement_Out_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_8                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Get0thElement_Out_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_9                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Get0thElement_Out_6                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ReadAnimation_TargetIsPlayer                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ReadAnimation_DelayedInSeconds                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ReadAnimation_FullBodyAnimation                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ReadAnimation_AnimationName                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ReadAnimation_TargetActorName                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_10                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_6                 (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_6             (HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ReadDialogueOption_Enabled                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ReadDialogueOption_Prompt                               (None)
// class FText                        CallFunc_ReadDialogueOption_Thought                              (None)
// class FText                        CallFunc_ReadDialogueOption_Disabled_text                        (None)
// bool                               CallFunc_ReadDialogueOption_Don_t_Count_to_AvailableOptions      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ReadDialogueOption_Hide_if_disabled                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_ReadDialogueOption_TargetNode                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueSingleOptionDataK2Node_MakeStruct_struct_DialogueSingleOptionData                (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_11                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_7                 (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_7             (HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_5                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesK2Node_MakeStruct_struct_DialogueActorReferences_2               (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_12                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_TargetRow_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_BlockPlayer                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrent_Enabled                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrent_Index                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_OptionIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_NewThoughts                                   (None)
// class FText                        K2Node_CustomEvent_NewNotAvailableText                           (None)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_6                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DialogueViewTarget_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_TargetRow                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DialogueViewTarget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_TargetLocation_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_TargetRotation_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_InterpolationTimeSeconds_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Row                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_TargetLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_TargetRotation                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_InterpolationTimeSeconds                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class UAnimSequence*               Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFDialogueData              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ReadAnimation_TargetIsPlayer_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ReadAnimation_DelayedInSeconds_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ReadAnimation_FullBodyAnimation_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ReadAnimation_AnimationName_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ReadAnimation_TargetActorName_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_8                 (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_8             (HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_7                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_9                 (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_9             (HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_InStartingRow                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InAxisValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGSquadManager*             K2Node_CustomEvent_InstigatingSquad                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_13                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ACGAICharacter*>      CallFunc_GetCurrentAggroList_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ACGAICharacter*>      CallFunc_GetCurrentAggroList_ReturnValue_1                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CallFunctionOnLevelActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_8                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_9                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CallFunctionOnActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_FindActorByName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CallFunctionOnActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_10                (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_10            (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_ResolveNodeID_IDAfterFlowControl                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_10                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_11                (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_11            (HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_11                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAIState                CallFunc_GetCurrentAIState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_12                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAIState                CallFunc_GetCurrentAIState_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_13                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USubtitlesManager*           CallFunc_GetSubtitlesManager_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Next_Data_Row_DialogueDidntEnd_14                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesK2Node_MakeStruct_struct_DialogueActorReferences_3               (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_14                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesK2Node_Select_Default_4                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlaySoundWithSubtitlesAsyncNode*CallFunc_PlaySound2DWithSubtitlesFromAudio_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USubtitleEntry*              CallFunc_AddSubtitle_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_Select_Default_5                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlaySoundWithSubtitlesAsyncNode*CallFunc_PlaySoundAttachedToComponentWithSubtitlesFromAudio_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_12                (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_12            (HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_15                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSt_DialogueCounterSeenData>CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// struct FSt_DialogueCounterSeenData CallFunc_Array_Get_Item_8                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_16                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAIState                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_17                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_16                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_13                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAIState                CallFunc_GetCurrentAIState_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFDialogueData              CallFunc_Get_Data_From_Data_Table_DialogueData_13                (HasGetValueTypeHash)
// struct FFDialogueMetadata          CallFunc_Get_Data_From_Data_Table_DialogueMetadata_13            (HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value_18                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_17                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               Temp_object_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_11                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::ExecuteUbergraph_BP_Dialogue(int32 EntryPoint, enum class EAIState Temp_byte_Variable, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAudioComponent* Temp_object_Variable, class UAudioComponent* K2Node_CustomEvent_AudioComponent, class UAudioComponent* K2Node_CustomEvent_AudioComponent_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_Variable_1, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_1, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAudioComponent* Temp_object_Variable_1, class UAudioComponent* K2Node_CustomEvent_AudioComponent_2, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_2, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_2, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_DialogueActorReferences& K2Node_MakeStruct_struct_DialogueActorReferences, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_3, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EAIState Temp_byte_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_3, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UAudioComponent* K2Node_CustomEvent_AudioComponent_3, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_4, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_4, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_4, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_CustomEvent_BlockPlayer_1, class ACGCharacter* K2Node_CustomEvent_InInstigator, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class ICh_Patroller_Interface_C> K2Node_DynamicCast_AsCh_Patroller_Interface, bool K2Node_DynamicCast_bSuccess_5, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_5, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_4, const struct FStruct_DialogueActorReferences& K2Node_MakeStruct_struct_DialogueActorReferences_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_5, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_5, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class FName CallFunc_Get0thElement_Out, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd, class FName CallFunc_Get0thElement_Out_1, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_1, const class FString& CallFunc_SplitEventAndArguments_Event, const class FString& CallFunc_SplitEventAndArguments_Arguments, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_2, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_3, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_4, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_5, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, class FName CallFunc_Get0thElement_Out_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, class FName CallFunc_Get0thElement_Out_3, class FName CallFunc_CheckForBool_NextRow, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_6, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_7, bool CallFunc_EqualEqual_StriStri_ReturnValue, class FName CallFunc_Get0thElement_Out_4, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_8, class FName CallFunc_Get0thElement_Out_5, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_9, class FName CallFunc_Get0thElement_Out_6, bool CallFunc_ReadAnimation_TargetIsPlayer, float CallFunc_ReadAnimation_DelayedInSeconds, bool CallFunc_ReadAnimation_FullBodyAnimation, const class FString& CallFunc_ReadAnimation_AnimationName, const class FString& CallFunc_ReadAnimation_TargetActorName, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_10, int32 CallFunc_Conv_StringToInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_6, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_6, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, int32 Temp_int_Variable, bool CallFunc_ReadDialogueOption_Enabled, class FText CallFunc_ReadDialogueOption_Prompt, class FText CallFunc_ReadDialogueOption_Thought, class FText CallFunc_ReadDialogueOption_Disabled_text, bool CallFunc_ReadDialogueOption_Don_t_Count_to_AvailableOptions, bool CallFunc_ReadDialogueOption_Hide_if_disabled, class FName CallFunc_ReadDialogueOption_TargetNode, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FStruct_DialogueSingleOptionData& K2Node_MakeStruct_struct_DialogueSingleOptionData, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_CustomEvent_Index, class FName CallFunc_Array_Get_Item_2, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_7, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_7, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, const struct FStruct_DialogueActorReferences& K2Node_MakeStruct_struct_DialogueActorReferences_2, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_6, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_12, class FName K2Node_CustomEvent_TargetRow_1, bool K2Node_CustomEvent_BlockPlayer, bool CallFunc_GetCurrent_Enabled, int32 CallFunc_GetCurrent_Index, bool CallFunc_IsValid_ReturnValue_7, float K2Node_InputAxisEvent_AxisValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 K2Node_CustomEvent_OptionIndex, class FText K2Node_CustomEvent_NewThoughts, class FText K2Node_CustomEvent_NewNotAvailableText, bool CallFunc_IsValid_ReturnValue_8, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_6, bool CallFunc_Map_Find_ReturnValue_6, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_7, bool K2Node_DynamicCast_bSuccess_8, class AActor* K2Node_CustomEvent_DialogueViewTarget_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, class FName K2Node_CustomEvent_TargetRow, class AActor* K2Node_CustomEvent_DialogueViewTarget, const struct FVector& K2Node_CustomEvent_TargetLocation_1, const struct FRotator& K2Node_CustomEvent_TargetRotation_1, float K2Node_CustomEvent_InterpolationTimeSeconds_1, class FName K2Node_CustomEvent_Row, const struct FVector& K2Node_CustomEvent_TargetLocation, const struct FRotator& K2Node_CustomEvent_TargetRotation, float K2Node_CustomEvent_InterpolationTimeSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_5, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class UAnimSequence* Temp_object_Variable_2, class FName CallFunc_Array_Get_Item_3, const struct FFDialogueData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ReadAnimation_TargetIsPlayer_1, float CallFunc_ReadAnimation_DelayedInSeconds_1, bool CallFunc_ReadAnimation_FullBodyAnimation_1, const class FString& CallFunc_ReadAnimation_AnimationName_1, const class FString& CallFunc_ReadAnimation_TargetActorName_1, bool CallFunc_Map_Contains_ReturnValue, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_8, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_8, bool CallFunc_Map_Contains_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_11, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_7, bool CallFunc_Map_Find_ReturnValue_7, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_8, bool K2Node_DynamicCast_bSuccess_9, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_9, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class FName K2Node_Event_InStartingRow, float K2Node_Event_InAxisValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACGSquadManager* K2Node_CustomEvent_InstigatingSquad, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, int32 Temp_int_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_13, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_1, TArray<class ACGAICharacter*>& CallFunc_GetCurrentAggroList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_3, TArray<class ACGAICharacter*>& CallFunc_GetCurrentAggroList_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_LessEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_CallFunctionOnLevelActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key, bool CallFunc_BooleanAND_ReturnValue_3, bool Temp_bool_Variable_2, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_8, bool CallFunc_Map_Find_ReturnValue_8, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_9, bool CallFunc_Map_Find_ReturnValue_9, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_9, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_CallFunctionOnActor_ReturnValue, class AActor* CallFunc_FindActorByName_ReturnValue, bool CallFunc_Map_Contains_ReturnValue_2, bool CallFunc_CallFunctionOnActor_ReturnValue_1, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_10, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_10, bool Temp_bool_Variable_3, class FName CallFunc_ResolveNodeID_IDAfterFlowControl, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_10, bool CallFunc_Map_Find_ReturnValue_10, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_11, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_11, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_10, bool K2Node_DynamicCast_bSuccess_11, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_Variable_4, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_12, float CallFunc_Count_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_11, bool CallFunc_Map_Find_ReturnValue_11, bool Temp_bool_IsClosed_Variable, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_11, bool K2Node_DynamicCast_bSuccess_13, int32 CallFunc_Array_Length_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_8, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue, int32 CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, class UAnimSequence* CallFunc_Array_Get_Item_4, class UAnimSequence* CallFunc_Array_Get_Item_5, enum class EAIState CallFunc_GetCurrentAIState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_12, bool CallFunc_Map_Find_ReturnValue_12, class UAnimSequence* Temp_object_Variable_3, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_12, bool K2Node_DynamicCast_bSuccess_14, int32 CallFunc_Array_Length_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue_10, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_2, int32 CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_3, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, enum class EAIState CallFunc_GetCurrentAIState_ReturnValue_1, int32 K2Node_Select_Default_2, class UAnimSequence* CallFunc_Array_Get_Item_6, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_13, bool K2Node_DynamicCast_bSuccess_15, bool Temp_bool_Variable_5, int32 K2Node_Select_Default_3, class UAnimSequence* CallFunc_Array_Get_Item_7, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_13, bool CallFunc_Map_Find_ReturnValue_13, class USubtitlesManager* CallFunc_GetSubtitlesManager_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_14, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_Set_Next_Data_Row_DialogueDidntEnd_14, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, const struct FStruct_DialogueActorReferences& K2Node_MakeStruct_struct_DialogueActorReferences_3, bool Temp_bool_Variable_6, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_14, bool CallFunc_Map_Find_ReturnValue_14, const struct FStruct_DialogueActorReferences& K2Node_Select_Default_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance, bool K2Node_DynamicCast_bSuccess_17, class UPlaySoundWithSubtitlesAsyncNode* CallFunc_PlaySound2DWithSubtitlesFromAudio_ReturnValue, bool CallFunc_IsValid_ReturnValue_13, class USubtitleEntry* CallFunc_AddSubtitle_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_14, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_15, bool Temp_bool_Has_Been_Initd_Variable_1, class USceneComponent* K2Node_Select_Default_5, class UPlaySoundWithSubtitlesAsyncNode* CallFunc_PlaySoundAttachedToComponentWithSubtitlesFromAudio_ReturnValue, bool CallFunc_IsValid_ReturnValue_16, bool Temp_bool_Variable_7, bool Temp_bool_IsClosed_Variable_1, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_12, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_12, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_15, bool CallFunc_Map_Find_ReturnValue_15, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_15, bool K2Node_DynamicCast_bSuccess_18, bool Temp_bool_Variable_8, class UAnimSequence* Temp_object_Variable_4, class UAnimSequence* Temp_object_Variable_5, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_2, class UAnimSequence* Temp_object_Variable_6, class UAnimSequence* Temp_object_Variable_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, TArray<struct FSt_DialogueCounterSeenData>& CallFunc_Set_ToArray_Result, const struct FSt_DialogueCounterSeenData& CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_16, bool CallFunc_Map_Find_ReturnValue_16, class UAnimSequence* Temp_object_Variable_8, bool CallFunc_IsValid_ReturnValue_17, enum class EAIState Temp_byte_Variable_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, class UAnimSequence* K2Node_Select_Default_6, class UAnimSequence* K2Node_Select_Default_7, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_17, bool CallFunc_Map_Find_ReturnValue_17, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_16, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_IsValid_ReturnValue_18, int32 CallFunc_Array_Length_ReturnValue_12, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_13, int32 CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_6, int32 CallFunc_RandomIntegerInRange_ReturnValue_4, int32 CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_5, int32 K2Node_Select_Default_8, int32 CallFunc_RandomIntegerInRange_ReturnValue_5, class UAnimSequence* CallFunc_Array_Get_Item_9, int32 K2Node_Select_Default_9, enum class EAIState CallFunc_GetCurrentAIState_ReturnValue_2, class UAnimSequence* CallFunc_Array_Get_Item_10, class UAnimSequence* K2Node_Select_Default_10, bool Temp_bool_Variable_9, const struct FFDialogueData& CallFunc_Get_Data_From_Data_Table_DialogueData_13, const struct FFDialogueMetadata& CallFunc_Get_Data_From_Data_Table_DialogueMetadata_13, class UAnimSequence* Temp_object_Variable_9, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_IsClosed_Variable_3, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value_18, bool CallFunc_Map_Find_ReturnValue_18, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_17, bool K2Node_DynamicCast_bSuccess_20, class UAnimSequence* Temp_object_Variable_10, class UAnimSequence* Temp_object_Variable_11, class UAnimSequence* Temp_object_Variable_12, class UAnimSequence* Temp_object_Variable_13, class UAnimSequence* K2Node_Select_Default_11, class UAnimSequence* K2Node_Select_Default_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ExecuteUbergraph_BP_Dialogue");

	Params::ABP_Dialogue_C_ExecuteUbergraph_BP_Dialogue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_AudioComponent = K2Node_CustomEvent_AudioComponent;
	Parms.K2Node_CustomEvent_AudioComponent_1 = K2Node_CustomEvent_AudioComponent_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData = CallFunc_Get_Data_From_Data_Table_DialogueData;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata = CallFunc_Get_Data_From_Data_Table_DialogueMetadata;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_1 = CallFunc_Get_Data_From_Data_Table_DialogueData_1;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_1 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_CustomEvent_AudioComponent_2 = K2Node_CustomEvent_AudioComponent_2;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_2 = CallFunc_Get_Data_From_Data_Table_DialogueData_2;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_2 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_2;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCGAICharacter_1 = K2Node_DynamicCast_AsCGAICharacter_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeStruct_struct_DialogueActorReferences = K2Node_MakeStruct_struct_DialogueActorReferences;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_3 = CallFunc_Get_Data_From_Data_Table_DialogueData_3;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_3 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsCGAICharacter_2 = K2Node_DynamicCast_AsCGAICharacter_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsCGAICharacter_3 = K2Node_DynamicCast_AsCGAICharacter_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_AudioComponent_3 = K2Node_CustomEvent_AudioComponent_3;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_4 = CallFunc_Get_Data_From_Data_Table_DialogueData_4;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_4 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_4;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsCGAICharacter_4 = K2Node_DynamicCast_AsCGAICharacter_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CustomEvent_BlockPlayer_1 = K2Node_CustomEvent_BlockPlayer_1;
	Parms.K2Node_CustomEvent_InInstigator = K2Node_CustomEvent_InInstigator;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsCh_Patroller_Interface = K2Node_DynamicCast_AsCh_Patroller_Interface;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGAICharacter_5 = K2Node_DynamicCast_AsCGAICharacter_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_MakeStruct_struct_DialogueActorReferences_1 = K2Node_MakeStruct_struct_DialogueActorReferences_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_5 = CallFunc_Get_Data_From_Data_Table_DialogueData_5;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_5 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Get0thElement_Out = CallFunc_Get0thElement_Out;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd = CallFunc_Set_Next_Data_Row_DialogueDidntEnd;
	Parms.CallFunc_Get0thElement_Out_1 = CallFunc_Get0thElement_Out_1;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_1 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_1;
	Parms.CallFunc_SplitEventAndArguments_Event = CallFunc_SplitEventAndArguments_Event;
	Parms.CallFunc_SplitEventAndArguments_Arguments = CallFunc_SplitEventAndArguments_Arguments;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_2 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_2;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_3 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_3;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_4 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_4;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_5 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_5;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Get0thElement_Out_2 = CallFunc_Get0thElement_Out_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_ParseIntoArray_ReturnValue_1 = CallFunc_ParseIntoArray_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Get0thElement_Out_3 = CallFunc_Get0thElement_Out_3;
	Parms.CallFunc_CheckForBool_NextRow = CallFunc_CheckForBool_NextRow;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_6 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_6;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_7 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_7;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Get0thElement_Out_4 = CallFunc_Get0thElement_Out_4;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_8 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_8;
	Parms.CallFunc_Get0thElement_Out_5 = CallFunc_Get0thElement_Out_5;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_9 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_9;
	Parms.CallFunc_Get0thElement_Out_6 = CallFunc_Get0thElement_Out_6;
	Parms.CallFunc_ReadAnimation_TargetIsPlayer = CallFunc_ReadAnimation_TargetIsPlayer;
	Parms.CallFunc_ReadAnimation_DelayedInSeconds = CallFunc_ReadAnimation_DelayedInSeconds;
	Parms.CallFunc_ReadAnimation_FullBodyAnimation = CallFunc_ReadAnimation_FullBodyAnimation;
	Parms.CallFunc_ReadAnimation_AnimationName = CallFunc_ReadAnimation_AnimationName;
	Parms.CallFunc_ReadAnimation_TargetActorName = CallFunc_ReadAnimation_TargetActorName;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_10 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_10;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_6 = CallFunc_Get_Data_From_Data_Table_DialogueData_6;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_6 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_6;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_ReadDialogueOption_Enabled = CallFunc_ReadDialogueOption_Enabled;
	Parms.CallFunc_ReadDialogueOption_Prompt = CallFunc_ReadDialogueOption_Prompt;
	Parms.CallFunc_ReadDialogueOption_Thought = CallFunc_ReadDialogueOption_Thought;
	Parms.CallFunc_ReadDialogueOption_Disabled_text = CallFunc_ReadDialogueOption_Disabled_text;
	Parms.CallFunc_ReadDialogueOption_Don_t_Count_to_AvailableOptions = CallFunc_ReadDialogueOption_Don_t_Count_to_AvailableOptions;
	Parms.CallFunc_ReadDialogueOption_Hide_if_disabled = CallFunc_ReadDialogueOption_Hide_if_disabled;
	Parms.CallFunc_ReadDialogueOption_TargetNode = CallFunc_ReadDialogueOption_TargetNode;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_struct_DialogueSingleOptionData = K2Node_MakeStruct_struct_DialogueSingleOptionData;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_11 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3 = CallFunc_GreaterEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_7 = CallFunc_Get_Data_From_Data_Table_DialogueData_7;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_7 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_7;
	Parms.CallFunc_Map_Find_Value_5 = CallFunc_Map_Find_Value_5;
	Parms.CallFunc_Map_Find_ReturnValue_5 = CallFunc_Map_Find_ReturnValue_5;
	Parms.K2Node_MakeStruct_struct_DialogueActorReferences_2 = K2Node_MakeStruct_struct_DialogueActorReferences_2;
	Parms.K2Node_DynamicCast_AsCGAICharacter_6 = K2Node_DynamicCast_AsCGAICharacter_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_12 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_12;
	Parms.K2Node_CustomEvent_TargetRow_1 = K2Node_CustomEvent_TargetRow_1;
	Parms.K2Node_CustomEvent_BlockPlayer = K2Node_CustomEvent_BlockPlayer;
	Parms.CallFunc_GetCurrent_Enabled = CallFunc_GetCurrent_Enabled;
	Parms.CallFunc_GetCurrent_Index = CallFunc_GetCurrent_Index;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_OptionIndex = K2Node_CustomEvent_OptionIndex;
	Parms.K2Node_CustomEvent_NewThoughts = K2Node_CustomEvent_NewThoughts;
	Parms.K2Node_CustomEvent_NewNotAvailableText = K2Node_CustomEvent_NewNotAvailableText;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_Map_Find_Value_6 = CallFunc_Map_Find_Value_6;
	Parms.CallFunc_Map_Find_ReturnValue_6 = CallFunc_Map_Find_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsCGAICharacter_7 = K2Node_DynamicCast_AsCGAICharacter_7;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_CustomEvent_DialogueViewTarget_1 = K2Node_CustomEvent_DialogueViewTarget_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_4 = CallFunc_GreaterEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_CustomEvent_TargetRow = K2Node_CustomEvent_TargetRow;
	Parms.K2Node_CustomEvent_DialogueViewTarget = K2Node_CustomEvent_DialogueViewTarget;
	Parms.K2Node_CustomEvent_TargetLocation_1 = K2Node_CustomEvent_TargetLocation_1;
	Parms.K2Node_CustomEvent_TargetRotation_1 = K2Node_CustomEvent_TargetRotation_1;
	Parms.K2Node_CustomEvent_InterpolationTimeSeconds_1 = K2Node_CustomEvent_InterpolationTimeSeconds_1;
	Parms.K2Node_CustomEvent_Row = K2Node_CustomEvent_Row;
	Parms.K2Node_CustomEvent_TargetLocation = K2Node_CustomEvent_TargetLocation;
	Parms.K2Node_CustomEvent_TargetRotation = K2Node_CustomEvent_TargetRotation;
	Parms.K2Node_CustomEvent_InterpolationTimeSeconds = K2Node_CustomEvent_InterpolationTimeSeconds;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_5 = CallFunc_GreaterEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ReadAnimation_TargetIsPlayer_1 = CallFunc_ReadAnimation_TargetIsPlayer_1;
	Parms.CallFunc_ReadAnimation_DelayedInSeconds_1 = CallFunc_ReadAnimation_DelayedInSeconds_1;
	Parms.CallFunc_ReadAnimation_FullBodyAnimation_1 = CallFunc_ReadAnimation_FullBodyAnimation_1;
	Parms.CallFunc_ReadAnimation_AnimationName_1 = CallFunc_ReadAnimation_AnimationName_1;
	Parms.CallFunc_ReadAnimation_TargetActorName_1 = CallFunc_ReadAnimation_TargetActorName_1;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_8 = CallFunc_Get_Data_From_Data_Table_DialogueData_8;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_8 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_8;
	Parms.CallFunc_Map_Contains_ReturnValue_1 = CallFunc_Map_Contains_ReturnValue_1;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue_1 = CallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_Map_Find_Value_7 = CallFunc_Map_Find_Value_7;
	Parms.CallFunc_Map_Find_ReturnValue_7 = CallFunc_Map_Find_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsCGAICharacter_8 = K2Node_DynamicCast_AsCGAICharacter_8;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_9 = CallFunc_Get_Data_From_Data_Table_DialogueData_9;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_9 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_Event_InStartingRow = K2Node_Event_InStartingRow;
	Parms.K2Node_Event_InAxisValue = K2Node_Event_InAxisValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_CustomEvent_InstigatingSquad = K2Node_CustomEvent_InstigatingSquad;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_13 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_13;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentAggroList_ReturnValue = CallFunc_GetCurrentAggroList_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_GetCurrentAggroList_ReturnValue_1 = CallFunc_GetCurrentAggroList_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_4 = CallFunc_LessEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue = CallFunc_GetCurrentMovementState_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_CallFunctionOnLevelActor_ReturnValue = CallFunc_CallFunctionOnLevelActor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Map_Find_Value_8 = CallFunc_Map_Find_Value_8;
	Parms.CallFunc_Map_Find_ReturnValue_8 = CallFunc_Map_Find_ReturnValue_8;
	Parms.CallFunc_Map_Find_Value_9 = CallFunc_Map_Find_Value_9;
	Parms.CallFunc_Map_Find_ReturnValue_9 = CallFunc_Map_Find_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsCGAICharacter_9 = K2Node_DynamicCast_AsCGAICharacter_9;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_CallFunctionOnActor_ReturnValue = CallFunc_CallFunctionOnActor_ReturnValue;
	Parms.CallFunc_FindActorByName_ReturnValue = CallFunc_FindActorByName_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue_2 = CallFunc_Map_Contains_ReturnValue_2;
	Parms.CallFunc_CallFunctionOnActor_ReturnValue_1 = CallFunc_CallFunctionOnActor_ReturnValue_1;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_10 = CallFunc_Get_Data_From_Data_Table_DialogueData_10;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_10 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_10;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_ResolveNodeID_IDAfterFlowControl = CallFunc_ResolveNodeID_IDAfterFlowControl;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_Map_Find_Value_10 = CallFunc_Map_Find_Value_10;
	Parms.CallFunc_Map_Find_ReturnValue_10 = CallFunc_Map_Find_ReturnValue_10;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_11 = CallFunc_Get_Data_From_Data_Table_DialogueData_11;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_11 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_11;
	Parms.K2Node_DynamicCast_AsCGAICharacter_10 = K2Node_DynamicCast_AsCGAICharacter_10;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_6 = CallFunc_GreaterEqual_IntInt_ReturnValue_6;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_11 = CallFunc_Map_Find_Value_11;
	Parms.CallFunc_Map_Find_ReturnValue_11 = CallFunc_Map_Find_ReturnValue_11;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsCGAICharacter_11 = K2Node_DynamicCast_AsCGAICharacter_11;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue = CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue;
	Parms.CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_1 = CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetCurrentAIState_ReturnValue = CallFunc_GetCurrentAIState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_Map_Find_Value_12 = CallFunc_Map_Find_Value_12;
	Parms.CallFunc_Map_Find_ReturnValue_12 = CallFunc_Map_Find_ReturnValue_12;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_DynamicCast_AsCGAICharacter_12 = K2Node_DynamicCast_AsCGAICharacter_12;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_2 = CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_2;
	Parms.CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_3 = CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_3;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_3 = CallFunc_RandomIntegerInRange_ReturnValue_3;
	Parms.CallFunc_GetCurrentAIState_ReturnValue_1 = CallFunc_GetCurrentAIState_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.K2Node_DynamicCast_AsCGAICharacter_13 = K2Node_DynamicCast_AsCGAICharacter_13;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Map_Find_Value_13 = CallFunc_Map_Find_Value_13;
	Parms.CallFunc_Map_Find_ReturnValue_13 = CallFunc_Map_Find_ReturnValue_13;
	Parms.CallFunc_GetSubtitlesManager_ReturnValue = CallFunc_GetSubtitlesManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGAICharacter_14 = K2Node_DynamicCast_AsCGAICharacter_14;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_Set_Next_Data_Row_DialogueDidntEnd_14 = CallFunc_Set_Next_Data_Row_DialogueDidntEnd_14;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.K2Node_MakeStruct_struct_DialogueActorReferences_3 = K2Node_MakeStruct_struct_DialogueActorReferences_3;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_Map_Find_Value_14 = CallFunc_Map_Find_Value_14;
	Parms.CallFunc_Map_Find_ReturnValue_14 = CallFunc_Map_Find_ReturnValue_14;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGGame_Instance = K2Node_DynamicCast_AsCGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_PlaySound2DWithSubtitlesFromAudio_ReturnValue = CallFunc_PlaySound2DWithSubtitlesFromAudio_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_AddSubtitle_ReturnValue = CallFunc_AddSubtitle_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_PlaySoundAttachedToComponentWithSubtitlesFromAudio_ReturnValue = CallFunc_PlaySoundAttachedToComponentWithSubtitlesFromAudio_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_12 = CallFunc_Get_Data_From_Data_Table_DialogueData_12;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_12 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_12;
	Parms.CallFunc_Map_Find_Value_15 = CallFunc_Map_Find_Value_15;
	Parms.CallFunc_Map_Find_ReturnValue_15 = CallFunc_Map_Find_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsCGAICharacter_15 = K2Node_DynamicCast_AsCGAICharacter_15;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_Map_Find_Value_16 = CallFunc_Map_Find_Value_16;
	Parms.CallFunc_Map_Find_ReturnValue_16 = CallFunc_Map_Find_ReturnValue_16;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_Map_Find_Value_17 = CallFunc_Map_Find_Value_17;
	Parms.CallFunc_Map_Find_ReturnValue_17 = CallFunc_Map_Find_ReturnValue_17;
	Parms.K2Node_DynamicCast_AsCGAICharacter_16 = K2Node_DynamicCast_AsCGAICharacter_16;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_Array_Length_ReturnValue_12 = CallFunc_Array_Length_ReturnValue_12;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_13 = CallFunc_Array_Length_ReturnValue_13;
	Parms.CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_4 = CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_6 = CallFunc_Subtract_IntInt_ReturnValue_6;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_4 = CallFunc_RandomIntegerInRange_ReturnValue_4;
	Parms.CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_5 = CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_5;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_5 = CallFunc_RandomIntegerInRange_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_GetCurrentAIState_ReturnValue_2 = CallFunc_GetCurrentAIState_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueData_13 = CallFunc_Get_Data_From_Data_Table_DialogueData_13;
	Parms.CallFunc_Get_Data_From_Data_Table_DialogueMetadata_13 = CallFunc_Get_Data_From_Data_Table_DialogueMetadata_13;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_Map_Find_Value_18 = CallFunc_Map_Find_Value_18;
	Parms.CallFunc_Map_Find_ReturnValue_18 = CallFunc_Map_Find_ReturnValue_18;
	Parms.K2Node_DynamicCast_AsCGAICharacter_17 = K2Node_DynamicCast_AsCGAICharacter_17;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.ShownDialogueOptionsToPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MultipleOptionsNodeID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_C::ShownDialogueOptionsToPlayer__DelegateSignature(class FName MultipleOptionsNodeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "ShownDialogueOptionsToPlayer__DelegateSignature");

	Params::ABP_Dialogue_C_ShownDialogueOptionsToPlayer__DelegateSignature_Params Parms{};

	Parms.MultipleOptionsNodeID = MultipleOptionsNodeID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Dialogue.BP_Dialogue_C.DialogueEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Dialogue_C::DialogueEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Dialogue_C", "DialogueEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


