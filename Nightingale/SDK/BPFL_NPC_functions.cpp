#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_NPC.BPFL_NPC_C
// (None)

class UClass* UBPFL_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_NPC_C");

	return Clss;
}


// BPFL_NPC_C BPFL_NPC.Default__BPFL_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_NPC_C* UBPFL_NPC_C::GetDefaultObj()
{
	static class UBPFL_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_NPC_C*>(UBPFL_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_NPC.BPFL_NPC_C.Fix Persistent Name Handle
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Creature_NPC_C*          InNPC                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        LNewSTPath_Female                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LOldSTPath_Female                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LNewSTPath_Male                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LOldSTPath_Male                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStringTableEntryHandle     CallFunc_GetNPCNameHandle_OutNameHandle                          (None)
// struct FStringTableEntryHandle     K2Node_MakeStruct_StringTableEntryHandle                         (None)
// struct FStringTableEntryHandle     CallFunc_GetNPCNameHandle_OutNameHandle_1                        (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStringTableEntryHandle     K2Node_MakeStruct_StringTableEntryHandle_1                       (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_NPC_C::Fix_Persistent_Name_Handle(class ABP_Creature_NPC_C* InNPC, class UObject* __WorldContext, class FName LNewSTPath_Female, class FName LOldSTPath_Female, class FName LNewSTPath_Male, class FName LOldSTPath_Male, bool CallFunc_IsValid_ReturnValue, const struct FStringTableEntryHandle& CallFunc_GetNPCNameHandle_OutNameHandle, const struct FStringTableEntryHandle& K2Node_MakeStruct_StringTableEntryHandle, const struct FStringTableEntryHandle& CallFunc_GetNPCNameHandle_OutNameHandle_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FStringTableEntryHandle& K2Node_MakeStruct_StringTableEntryHandle_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NPC_C", "Fix Persistent Name Handle");

	Params::UBPFL_NPC_C_Fix_Persistent_Name_Handle_Params Parms{};

	Parms.InNPC = InNPC;
	Parms.__WorldContext = __WorldContext;
	Parms.LNewSTPath_Female = LNewSTPath_Female;
	Parms.LOldSTPath_Female = LOldSTPath_Female;
	Parms.LNewSTPath_Male = LNewSTPath_Male;
	Parms.LOldSTPath_Male = LOldSTPath_Male;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNPCNameHandle_OutNameHandle = CallFunc_GetNPCNameHandle_OutNameHandle;
	Parms.K2Node_MakeStruct_StringTableEntryHandle = K2Node_MakeStruct_StringTableEntryHandle;
	Parms.CallFunc_GetNPCNameHandle_OutNameHandle_1 = CallFunc_GetNPCNameHandle_OutNameHandle_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_MakeStruct_StringTableEntryHandle_1 = K2Node_MakeStruct_StringTableEntryHandle_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_NPC.BPFL_NPC_C.Get Rand NPC Name
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBodyType               Gender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStringTableEntryHandle     NameHandle                                                       (Parm, OutParm)
// struct FStringTableEntryHandle     LNameHandle                                                      (Edit, BlueprintVisible)
// class FText                        DefaultNameFemale                                                (Edit, BlueprintVisible)
// class FText                        DefaultNameMale                                                  (Edit, BlueprintVisible)
// class FName                        StringTableIDFemale                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StringTableIDMale                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetKeysFromStringTable_ReturnValue                      (ReferenceParm)
// TArray<class FString>              CallFunc_GetKeysFromStringTable_ReturnValue_1                    (ReferenceParm)
// class FString                      CallFunc_Array_Random_OutItem                                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Random_OutItem_1                                  (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStringTableEntryHandle     K2Node_MakeStruct_StringTableEntryHandle                         (None)
// struct FStringTableEntryHandle     K2Node_MakeStruct_StringTableEntryHandle_1                       (None)

void UBPFL_NPC_C::Get_Rand_NPC_Name(enum class EBodyType Gender, class UObject* __WorldContext, struct FStringTableEntryHandle* NameHandle, const struct FStringTableEntryHandle& LNameHandle, class FText DefaultNameFemale, class FText DefaultNameMale, class FName StringTableIDFemale, class FName StringTableIDMale, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FString>& CallFunc_GetKeysFromStringTable_ReturnValue, TArray<class FString>& CallFunc_GetKeysFromStringTable_ReturnValue_1, const class FString& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const class FString& CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, const struct FStringTableEntryHandle& K2Node_MakeStruct_StringTableEntryHandle, const struct FStringTableEntryHandle& K2Node_MakeStruct_StringTableEntryHandle_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NPC_C", "Get Rand NPC Name");

	Params::UBPFL_NPC_C_Get_Rand_NPC_Name_Params Parms{};

	Parms.Gender = Gender;
	Parms.__WorldContext = __WorldContext;
	Parms.LNameHandle = LNameHandle;
	Parms.DefaultNameFemale = DefaultNameFemale;
	Parms.DefaultNameMale = DefaultNameMale;
	Parms.StringTableIDFemale = StringTableIDFemale;
	Parms.StringTableIDMale = StringTableIDMale;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetKeysFromStringTable_ReturnValue = CallFunc_GetKeysFromStringTable_ReturnValue;
	Parms.CallFunc_GetKeysFromStringTable_ReturnValue_1 = CallFunc_GetKeysFromStringTable_ReturnValue_1;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Array_Random_OutItem_1 = CallFunc_Array_Random_OutItem_1;
	Parms.CallFunc_Array_Random_OutIndex_1 = CallFunc_Array_Random_OutIndex_1;
	Parms.K2Node_MakeStruct_StringTableEntryHandle = K2Node_MakeStruct_StringTableEntryHandle;
	Parms.K2Node_MakeStruct_StringTableEntryHandle_1 = K2Node_MakeStruct_StringTableEntryHandle_1;

	UObject::ProcessEvent(Func, &Parms);

	if (NameHandle != nullptr)
		*NameHandle = std::move(Parms.NameHandle);

}


// Function BPFL_NPC.BPFL_NPC_C.BreakDesireHandle
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Desire                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENWXNPCDesireType       DesireType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                DesireTypeTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         TypedRowHandle                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class FText                        IncompleteTitle                                                  (Parm, OutParm)
// class FText                        IncompleteDescription                                            (Parm, OutParm)
// class FText                        CompletedTitle                                                   (Parm, OutParm)
// class FText                        CompletedDescription                                             (Parm, OutParm)
// int32                              IncompleteValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CompletedValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InternalTimeStamp                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InternalTimeRemaining                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXNPCDesireData           CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Duration_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_InternalTimeStamp_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_InternalTimeRemaining_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_NPC_C::BreakDesireHandle(const struct FDataTableRowHandle& Desire, class UObject* __WorldContext, enum class ENWXNPCDesireType* DesireType, struct FGameplayTag* DesireTypeTag, struct FDataTableRowHandle* TypedRowHandle, class FText* IncompleteTitle, class FText* IncompleteDescription, class FText* CompletedTitle, class FText* CompletedDescription, int32* IncompleteValue, int32* CompletedValue, double* Duration, double* InternalTimeStamp, double* InternalTimeRemaining, const struct FNWXNPCDesireData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double K2Node_FunctionResult_Duration_ImplicitCast, double K2Node_FunctionResult_InternalTimeStamp_ImplicitCast, double K2Node_FunctionResult_InternalTimeRemaining_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NPC_C", "BreakDesireHandle");

	Params::UBPFL_NPC_C_BreakDesireHandle_Params Parms{};

	Parms.Desire = Desire;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_FunctionResult_Duration_ImplicitCast = K2Node_FunctionResult_Duration_ImplicitCast;
	Parms.K2Node_FunctionResult_InternalTimeStamp_ImplicitCast = K2Node_FunctionResult_InternalTimeStamp_ImplicitCast;
	Parms.K2Node_FunctionResult_InternalTimeRemaining_ImplicitCast = K2Node_FunctionResult_InternalTimeRemaining_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (DesireType != nullptr)
		*DesireType = Parms.DesireType;

	if (DesireTypeTag != nullptr)
		*DesireTypeTag = std::move(Parms.DesireTypeTag);

	if (TypedRowHandle != nullptr)
		*TypedRowHandle = std::move(Parms.TypedRowHandle);

	if (IncompleteTitle != nullptr)
		*IncompleteTitle = Parms.IncompleteTitle;

	if (IncompleteDescription != nullptr)
		*IncompleteDescription = Parms.IncompleteDescription;

	if (CompletedTitle != nullptr)
		*CompletedTitle = Parms.CompletedTitle;

	if (CompletedDescription != nullptr)
		*CompletedDescription = Parms.CompletedDescription;

	if (IncompleteValue != nullptr)
		*IncompleteValue = Parms.IncompleteValue;

	if (CompletedValue != nullptr)
		*CompletedValue = Parms.CompletedValue;

	if (Duration != nullptr)
		*Duration = Parms.Duration;

	if (InternalTimeStamp != nullptr)
		*InternalTimeStamp = Parms.InternalTimeStamp;

	if (InternalTimeRemaining != nullptr)
		*InternalTimeRemaining = Parms.InternalTimeRemaining;

}


// Function BPFL_NPC.BPFL_NPC_C.GetVictorianName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Female                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)
// int32                              LCurrentCount                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LRandomInt                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCVictorianName         CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCVictorianName         CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_NPC_C::GetVictorianName(bool Female, class UObject* __WorldContext, class FText* Name, int32 LCurrentCount, int32 LRandomInt, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FS_NPCVictorianName& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, bool CallFunc_Less_IntInt_ReturnValue_2, class FName CallFunc_Array_Get_Item_1, const struct FS_NPCVictorianName& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NPC_C", "GetVictorianName");

	Params::UBPFL_NPC_C_GetVictorianName_Params Parms{};

	Parms.Female = Female;
	Parms.__WorldContext = __WorldContext;
	Parms.LCurrentCount = LCurrentCount;
	Parms.LRandomInt = LRandomInt;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BPFL_NPC.BPFL_NPC_C.IsControllerNPC
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Controller                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsNPC                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_NPC_C::IsControllerNPC(class UObject* Controller, class UObject* __WorldContext, bool* IsNPC, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NPC_C", "IsControllerNPC");

	Params::UBPFL_NPC_C_IsControllerNPC_Params Parms{};

	Parms.Controller = Controller;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNPC != nullptr)
		*IsNPC = Parms.IsNPC;

}


// Function BPFL_NPC.BPFL_NPC_C.GetFriendshipCostMultiplierFromFriendshipLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_FriendshipLevel    FriendshipLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CostMultiplier                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCFriendshipCostMultiplierCallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_CostMultiplier_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_NPC_C::GetFriendshipCostMultiplierFromFriendshipLevel(enum class Enum_FriendshipLevel FriendshipLevel, class UObject* __WorldContext, double* CostMultiplier, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_NPCFriendshipCostMultiplier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double K2Node_FunctionResult_CostMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NPC_C", "GetFriendshipCostMultiplierFromFriendshipLevel");

	Params::UBPFL_NPC_C_GetFriendshipCostMultiplierFromFriendshipLevel_Params Parms{};

	Parms.FriendshipLevel = FriendshipLevel;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_FunctionResult_CostMultiplier_ImplicitCast = K2Node_FunctionResult_CostMultiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CostMultiplier != nullptr)
		*CostMultiplier = Parms.CostMultiplier;

}


// Function BPFL_NPC.BPFL_NPC_C.GetMinAndMaxFriendshipScores
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              MinScore                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxScore                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_FriendshipLevel    MaxFriendship                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_FriendshipLevel    MinFriendship                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCFriendshipLevel       CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCFriendshipLevel       CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_NPC_C::GetMinAndMaxFriendshipScores(class UObject* __WorldContext, int32* MinScore, int32* MaxScore, enum class Enum_FriendshipLevel MaxFriendship, enum class Enum_FriendshipLevel MinFriendship, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FS_NPCFriendshipLevel& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_NPCFriendshipLevel& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NPC_C", "GetMinAndMaxFriendshipScores");

	Params::UBPFL_NPC_C_GetMinAndMaxFriendshipScores_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.MaxFriendship = MaxFriendship;
	Parms.MinFriendship = MinFriendship;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MinScore != nullptr)
		*MinScore = Parms.MinScore;

	if (MaxScore != nullptr)
		*MaxScore = Parms.MaxScore;

}


// Function BPFL_NPC.BPFL_NPC_C.GetFriendshipLevelFromScore
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              FriendshipScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class Enum_FriendshipLevel    FriendshipLevel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinScore                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxScore                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentScore                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_FriendshipLevel    MaxFriendshipLevel                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_FriendshipLevel    CurrentFriendshipLevel                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCFriendshipLevel       CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_ByteByte_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_NPC_C::GetFriendshipLevelFromScore(int32 FriendshipScore, class UObject* __WorldContext, enum class Enum_FriendshipLevel* FriendshipLevel, int32* MinScore, int32* MaxScore, int32 CurrentScore, enum class Enum_FriendshipLevel MaxFriendshipLevel, enum class Enum_FriendshipLevel CurrentFriendshipLevel, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, const struct FS_NPCFriendshipLevel& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_Less_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NPC_C", "GetFriendshipLevelFromScore");

	Params::UBPFL_NPC_C_GetFriendshipLevelFromScore_Params Parms{};

	Parms.FriendshipScore = FriendshipScore;
	Parms.__WorldContext = __WorldContext;
	Parms.CurrentScore = CurrentScore;
	Parms.MaxFriendshipLevel = MaxFriendshipLevel;
	Parms.CurrentFriendshipLevel = CurrentFriendshipLevel;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.CallFunc_Less_ByteByte_ReturnValue = CallFunc_Less_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FriendshipLevel != nullptr)
		*FriendshipLevel = Parms.FriendshipLevel;

	if (MinScore != nullptr)
		*MinScore = Parms.MinScore;

	if (MaxScore != nullptr)
		*MaxScore = Parms.MaxScore;

}


// Function BPFL_NPC.BPFL_NPC_C.GetScoreFromFriendshipEvent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_NPCFriendshipEvent FriendshipEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Score                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCFriendShipEvent       CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_NPC_C::GetScoreFromFriendshipEvent(enum class Enum_NPCFriendshipEvent FriendshipEvent, class UObject* __WorldContext, int32* Score, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_NPCFriendShipEvent& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NPC_C", "GetScoreFromFriendshipEvent");

	Params::UBPFL_NPC_C_GetScoreFromFriendshipEvent_Params Parms{};

	Parms.FriendshipEvent = FriendshipEvent;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Score != nullptr)
		*Score = Parms.Score;

}


// Function BPFL_NPC.BPFL_NPC_C.GetActionStationTypeFromPingVerb
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_PingVerbs             PingVerb                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionStationType  DefaultActionStationType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionStationType  ActionStationType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_NPC_C::GetActionStationTypeFromPingVerb(enum class E_PingVerbs PingVerb, enum class Enum_ActionStationType DefaultActionStationType, class UObject* __WorldContext, enum class Enum_ActionStationType* ActionStationType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NPC_C", "GetActionStationTypeFromPingVerb");

	Params::UBPFL_NPC_C_GetActionStationTypeFromPingVerb_Params Parms{};

	Parms.PingVerb = PingVerb;
	Parms.DefaultActionStationType = DefaultActionStationType;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionStationType != nullptr)
		*ActionStationType = Parms.ActionStationType;

}

}


