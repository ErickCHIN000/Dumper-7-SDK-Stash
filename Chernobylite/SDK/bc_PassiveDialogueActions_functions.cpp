#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_PassiveDialogueActions.bc_PassiveDialogueActions_C
// (None)

class UClass* Ubc_PassiveDialogueActions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_PassiveDialogueActions_C");

	return Clss;
}


// bc_PassiveDialogueActions_C bc_PassiveDialogueActions.Default__bc_PassiveDialogueActions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_PassiveDialogueActions_C* Ubc_PassiveDialogueActions_C::GetDefaultObj()
{
	static class Ubc_PassiveDialogueActions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_PassiveDialogueActions_C*>(Ubc_PassiveDialogueActions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.IsCompanionInConflict
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPassiveDialogueInfo        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// class FName                        Conflict_name                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo                            (NoDestructor, UObjectWrapper)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_1                          (NoDestructor, UObjectWrapper)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_2                          (NoDestructor, UObjectWrapper)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConflict                   CallFunc_GetConflictForCurrentDay_ReturnValue                    (NoDestructor)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_3                          (NoDestructor, UObjectWrapper)

struct FPassiveDialogueInfo Ubc_PassiveDialogueActions_C::IsCompanionInConflict(class FName Conflict_name, class ACGNPC* CallFunc_GetNPC_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, class ACGNPC* CallFunc_GetNPC_ReturnValue_1, class ACGNPC* CallFunc_GetNPC_ReturnValue_2, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo, class ACGNPC* CallFunc_GetNPC_ReturnValue_3, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_1, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FConflict& CallFunc_GetConflictForCurrentDay_ReturnValue, class ACGNPC* CallFunc_GetNPC_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue_5, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PassiveDialogueActions_C", "IsCompanionInConflict");

	Params::Ubc_PassiveDialogueActions_C_IsCompanionInConflict_Params Parms{};

	Parms.Conflict_name = Conflict_name;
	Parms.CallFunc_GetNPC_ReturnValue = CallFunc_GetNPC_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;
	Parms.CallFunc_GetNPC_ReturnValue_1 = CallFunc_GetNPC_ReturnValue_1;
	Parms.CallFunc_GetNPC_ReturnValue_2 = CallFunc_GetNPC_ReturnValue_2;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo = K2Node_MakeStruct_PassiveDialogueInfo;
	Parms.CallFunc_GetNPC_ReturnValue_3 = CallFunc_GetNPC_ReturnValue_3;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_1 = K2Node_MakeStruct_PassiveDialogueInfo_1;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_2 = K2Node_MakeStruct_PassiveDialogueInfo_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetConflictForCurrentDay_ReturnValue = CallFunc_GetConflictForCurrentDay_ReturnValue;
	Parms.CallFunc_GetNPC_ReturnValue_4 = CallFunc_GetNPC_ReturnValue_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_4 = CallFunc_EqualEqual_NameName_ReturnValue_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_5 = CallFunc_EqualEqual_NameName_ReturnValue_5;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_3 = K2Node_MakeStruct_PassiveDialogueInfo_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.HasCompanionLowMorale
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPassiveDialogueInfo        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo                            (NoDestructor, UObjectWrapper)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_1                          (NoDestructor, UObjectWrapper)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_2                          (NoDestructor, UObjectWrapper)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_3                          (NoDestructor, UObjectWrapper)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FPassiveDialogueInfo Ubc_PassiveDialogueActions_C::HasCompanionLowMorale(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, class ACGNPC* CallFunc_GetNPC_ReturnValue, class ACGNPC* CallFunc_GetNPC_ReturnValue_1, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_1, class ACGNPC* CallFunc_GetNPC_ReturnValue_2, bool Temp_bool_IsClosed_Variable_1, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_2, class ACGNPC* CallFunc_GetNPC_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_3, bool CallFunc_HaveBuffCompanion_ReturnValue, bool CallFunc_HaveBuffCompanion_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PassiveDialogueActions_C", "HasCompanionLowMorale");

	Params::Ubc_PassiveDialogueActions_C_HasCompanionLowMorale_Params Parms{};

	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.CallFunc_GetNPC_ReturnValue = CallFunc_GetNPC_ReturnValue;
	Parms.CallFunc_GetNPC_ReturnValue_1 = CallFunc_GetNPC_ReturnValue_1;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo = K2Node_MakeStruct_PassiveDialogueInfo;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_1 = K2Node_MakeStruct_PassiveDialogueInfo_1;
	Parms.CallFunc_GetNPC_ReturnValue_2 = CallFunc_GetNPC_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_2 = K2Node_MakeStruct_PassiveDialogueInfo_2;
	Parms.CallFunc_GetNPC_ReturnValue_3 = CallFunc_GetNPC_ReturnValue_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_3 = K2Node_MakeStruct_PassiveDialogueInfo_3;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue = CallFunc_HaveBuffCompanion_ReturnValue;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue_1 = CallFunc_HaveBuffCompanion_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.IsDislikedBuildEntityInBase
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPassiveDialogueInfo        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo                            (NoDestructor, UObjectWrapper)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_1                          (NoDestructor, UObjectWrapper)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_2                          (NoDestructor, UObjectWrapper)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_3                          (NoDestructor, UObjectWrapper)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_4                          (NoDestructor, UObjectWrapper)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_5                          (NoDestructor, UObjectWrapper)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_6                          (NoDestructor, UObjectWrapper)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_FindDislikedBuildEntities_ReturnValue                   (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FPassiveDialogueInfo Ubc_PassiveDialogueActions_C::IsDislikedBuildEntityInBase(int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class ACGNPC* CallFunc_GetNPC_ReturnValue, class ACGNPC* CallFunc_GetNPC_ReturnValue_1, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_1, class ACGNPC* CallFunc_GetNPC_ReturnValue_2, class ACGNPC* CallFunc_GetNPC_ReturnValue_3, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_2, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_3, class ACGNPC* CallFunc_GetNPC_ReturnValue_4, class ACGNPC* CallFunc_GetNPC_ReturnValue_5, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_4, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_5, class ACGNPC* CallFunc_GetNPC_ReturnValue_6, class ACGNPC* CallFunc_GetNPC_ReturnValue_7, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_6, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_FindDislikedBuildEntities_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PassiveDialogueActions_C", "IsDislikedBuildEntityInBase");

	Params::Ubc_PassiveDialogueActions_C_IsDislikedBuildEntityInBase_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetNPC_ReturnValue = CallFunc_GetNPC_ReturnValue;
	Parms.CallFunc_GetNPC_ReturnValue_1 = CallFunc_GetNPC_ReturnValue_1;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo = K2Node_MakeStruct_PassiveDialogueInfo;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_1 = K2Node_MakeStruct_PassiveDialogueInfo_1;
	Parms.CallFunc_GetNPC_ReturnValue_2 = CallFunc_GetNPC_ReturnValue_2;
	Parms.CallFunc_GetNPC_ReturnValue_3 = CallFunc_GetNPC_ReturnValue_3;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_2 = K2Node_MakeStruct_PassiveDialogueInfo_2;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_3 = K2Node_MakeStruct_PassiveDialogueInfo_3;
	Parms.CallFunc_GetNPC_ReturnValue_4 = CallFunc_GetNPC_ReturnValue_4;
	Parms.CallFunc_GetNPC_ReturnValue_5 = CallFunc_GetNPC_ReturnValue_5;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_4 = K2Node_MakeStruct_PassiveDialogueInfo_4;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_5 = K2Node_MakeStruct_PassiveDialogueInfo_5;
	Parms.CallFunc_GetNPC_ReturnValue_6 = CallFunc_GetNPC_ReturnValue_6;
	Parms.CallFunc_GetNPC_ReturnValue_7 = CallFunc_GetNPC_ReturnValue_7;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_6 = K2Node_MakeStruct_PassiveDialogueInfo_6;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_FindDislikedBuildEntities_ReturnValue = CallFunc_FindDislikedBuildEntities_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.IsCompanionHurt
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPassiveDialogueInfo        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo                            (NoDestructor, UObjectWrapper)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_1                          (NoDestructor, UObjectWrapper)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_2                          (NoDestructor, UObjectWrapper)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DialogueSystemGetBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_3                          (NoDestructor, UObjectWrapper)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FPassiveDialogueInfo Ubc_PassiveDialogueActions_C::IsCompanionHurt(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable, class ACGNPC* CallFunc_GetNPC_ReturnValue, class ACGNPC* CallFunc_GetNPC_ReturnValue_1, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_1, class ACGNPC* CallFunc_GetNPC_ReturnValue_2, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACGNPC* CallFunc_GetNPC_ReturnValue_3, bool Temp_bool_IsClosed_Variable_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_DialogueSystemGetBool_ReturnValue, class ACGNPC* CallFunc_GetNPC_ReturnValue_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_HaveBuffCompanion_ReturnValue, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_3, bool CallFunc_HaveBuffCompanion_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PassiveDialogueActions_C", "IsCompanionHurt");

	Params::Ubc_PassiveDialogueActions_C_IsCompanionHurt_Params Parms{};

	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetNPC_ReturnValue = CallFunc_GetNPC_ReturnValue;
	Parms.CallFunc_GetNPC_ReturnValue_1 = CallFunc_GetNPC_ReturnValue_1;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo = K2Node_MakeStruct_PassiveDialogueInfo;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_1 = K2Node_MakeStruct_PassiveDialogueInfo_1;
	Parms.CallFunc_GetNPC_ReturnValue_2 = CallFunc_GetNPC_ReturnValue_2;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_2 = K2Node_MakeStruct_PassiveDialogueInfo_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetNPC_ReturnValue_3 = CallFunc_GetNPC_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_DialogueSystemGetBool_ReturnValue = CallFunc_DialogueSystemGetBool_ReturnValue;
	Parms.CallFunc_GetNPC_ReturnValue_4 = CallFunc_GetNPC_ReturnValue_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue = CallFunc_HaveBuffCompanion_ReturnValue;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_3 = K2Node_MakeStruct_PassiveDialogueInfo_3;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue_1 = CallFunc_HaveBuffCompanion_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.HasPlayerDoneTraining
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPassiveDialogueInfo        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo                            (NoDestructor, UObjectWrapper)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_1                          (NoDestructor, UObjectWrapper)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_2                          (NoDestructor, UObjectWrapper)
// class ACGNPC*                      CallFunc_GetNPC_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FPassiveDialogueInfo        K2Node_MakeStruct_PassiveDialogueInfo_3                          (NoDestructor, UObjectWrapper)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DialogueSystemGetBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FPassiveDialogueInfo Ubc_PassiveDialogueActions_C::HasPlayerDoneTraining(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable, class ACGNPC* CallFunc_GetNPC_ReturnValue, class ACGNPC* CallFunc_GetNPC_ReturnValue_1, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_1, class ACGNPC* CallFunc_GetNPC_ReturnValue_2, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, bool Temp_bool_IsClosed_Variable_1, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_2, class ACGNPC* CallFunc_GetNPC_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FPassiveDialogueInfo& K2Node_MakeStruct_PassiveDialogueInfo_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_DialogueSystemGetBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PassiveDialogueActions_C", "HasPlayerDoneTraining");

	Params::Ubc_PassiveDialogueActions_C_HasPlayerDoneTraining_Params Parms{};

	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetNPC_ReturnValue = CallFunc_GetNPC_ReturnValue;
	Parms.CallFunc_GetNPC_ReturnValue_1 = CallFunc_GetNPC_ReturnValue_1;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo = K2Node_MakeStruct_PassiveDialogueInfo;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_1 = K2Node_MakeStruct_PassiveDialogueInfo_1;
	Parms.CallFunc_GetNPC_ReturnValue_2 = CallFunc_GetNPC_ReturnValue_2;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_2 = K2Node_MakeStruct_PassiveDialogueInfo_2;
	Parms.CallFunc_GetNPC_ReturnValue_3 = CallFunc_GetNPC_ReturnValue_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_MakeStruct_PassiveDialogueInfo_3 = K2Node_MakeStruct_PassiveDialogueInfo_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_DialogueSystemGetBool_ReturnValue = CallFunc_DialogueSystemGetBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.HasPlayerHaveLowPsyche
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPassiveDialogueInfo        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// class ACGNPC*                      NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FPassiveDialogueInfo Ubc_PassiveDialogueActions_C::HasPlayerHaveLowPsyche(class ACGNPC* NewLocalVar_0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PassiveDialogueActions_C", "HasPlayerHaveLowPsyche");

	Params::Ubc_PassiveDialogueActions_C_HasPlayerHaveLowPsyche_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


