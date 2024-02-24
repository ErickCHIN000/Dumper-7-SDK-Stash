#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GameFunctionLibrary.GameFunctionLibrary_C
// (None)

class UClass* UGameFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFunctionLibrary_C");

	return Clss;
}


// GameFunctionLibrary_C GameFunctionLibrary.Default__GameFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGameFunctionLibrary_C* UGameFunctionLibrary_C::GetDefaultObj()
{
	static class UGameFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFunctionLibrary_C*>(UGameFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameFunctionLibrary.GameFunctionLibrary_C.IsOutsideOfPlayerView?
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Loc                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               NotInPlayerView_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingleForObjects_OutHit                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingleForObjects_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DegAcos_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::IsOutsideOfPlayerView_(const struct FVector& Loc, class UObject* __WorldContext, bool* NotInPlayerView_, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_DegAcos_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "IsOutsideOfPlayerView?");

	Params::UGameFunctionLibrary_C_IsOutsideOfPlayerView__Params Parms{};

	Parms.Loc = Loc;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_LineTraceSingleForObjects_OutHit = CallFunc_LineTraceSingleForObjects_OutHit;
	Parms.CallFunc_LineTraceSingleForObjects_ReturnValue = CallFunc_LineTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_DegAcos_ReturnValue = CallFunc_DegAcos_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (NotInPlayerView_ != nullptr)
		*NotInPlayerView_ = Parms.NotInPlayerView_;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.AddUniqueLoot
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                UnqiueItemsSet                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBP_JigMultiplayer_C*        JigComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_UniqueLoot          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomContainerItem        CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::AddUniqueLoot(TArray<class FName>& UnqiueItemsSet, class UBP_JigMultiplayer_C* JigComp, int32 Container, class UObject* __WorldContext, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, const struct FStruct_UniqueLoot& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FRandomContainerItem& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "AddUniqueLoot");

	Params::UGameFunctionLibrary_C_AddUniqueLoot_Params Parms{};

	Parms.UnqiueItemsSet = UnqiueItemsSet;
	Parms.JigComp = JigComp;
	Parms.Container = Container;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.SetLootTable_AI
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_AILootTables       Table                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        JigComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ContainerLootTable  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::SetLootTable_AI(enum class Enum_AILootTables Table, class UBP_JigMultiplayer_C* JigComp, int32 Container, class UObject* __WorldContext, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_ContainerLootTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "SetLootTable_AI");

	Params::UGameFunctionLibrary_C_SetLootTable_AI_Params Parms{};

	Parms.Table = Table;
	Parms.JigComp = JigComp;
	Parms.Container = Container;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.SetLootTable_Container
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_ContainerLootTablesTable                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        JigComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ContainerLootTable  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::SetLootTable_Container(enum class Enum_ContainerLootTables Table, class UBP_JigMultiplayer_C* JigComp, int32 Container, class UObject* __WorldContext, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_ContainerLootTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "SetLootTable_Container");

	Params::UGameFunctionLibrary_C_SetLootTable_Container_Params Parms{};

	Parms.Table = Table;
	Parms.JigComp = JigComp;
	Parms.Container = Container;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.ApplyRadiationDamage_Archetype
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             RadDamage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URadiationComponent_C*       RadiationComp                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URadiationComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_MpInteractInterface_C>K2Node_DynamicCast_AsBP_Mp_Interact_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                  CallFunc_GetItemInfo_Info                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_RandomStatsConfig        CallFunc_GetItemInfo_RandomStatsConfig                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::ApplyRadiationDamage_Archetype(class AActor* Actor, double RadDamage, class UObject* __WorldContext, class URadiationComponent_C* RadiationComp, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, class URadiationComponent_C* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IBP_MpInteractInterface_C> K2Node_DynamicCast_AsBP_Mp_Interact_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FFItemInfo& CallFunc_GetItemInfo_Info, const struct FS_RandomStatsConfig& CallFunc_GetItemInfo_RandomStatsConfig, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "ApplyRadiationDamage_Archetype");

	Params::UGameFunctionLibrary_C_ApplyRadiationDamage_Archetype_Params Parms{};

	Parms.Actor = Actor;
	Parms.RadDamage = RadDamage;
	Parms.__WorldContext = __WorldContext;
	Parms.RadiationComp = RadiationComp;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Mp_Interact_Interface = K2Node_DynamicCast_AsBP_Mp_Interact_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemInfo_Info = CallFunc_GetItemInfo_Info;
	Parms.CallFunc_GetItemInfo_RandomStatsConfig = CallFunc_GetItemInfo_RandomStatsConfig;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.GetLockPickingComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULockPickingComponent_C*     LevellingComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULockPickingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::GetLockPickingComponent(class UObject* __WorldContext, class ULockPickingComponent_C** LevellingComponent, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ULockPickingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "GetLockPickingComponent");

	Params::UGameFunctionLibrary_C_GetLockPickingComponent_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (LevellingComponent != nullptr)
		*LevellingComponent = Parms.LevellingComponent;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.SetDifficulty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             XPMultiplier                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ZombieAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ZombieBossAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ZombieHoundAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ZombieHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ZombieSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ZombieDamage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BanditHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MilitaryHealth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ScavengerHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AnimalAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RandomEventMultiplier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BanditCampMultiplier                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MilitaryCampMultiplier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InfestationsMultiplier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InfestationsHealth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   GeneralItemsRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   MeleeItemsRarity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   RangedItemRarity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   Food_DrinkRarity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   MedicalItemsRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   CraftingItemsRarity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   EquipmentRarity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   AttachmentsRarity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   AmmoRarity                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   KeycardsRarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PassiveReset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HungerMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ThirstMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VehicleFuelMultiplier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VehicleDamageMultiplier                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData                                (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_1                              (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_2                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_3                              (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_4                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_5                       (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_4                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_5                              (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_6                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_7                       (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_6                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_7                              (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_8                       (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_8                              (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_9                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_10                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_9                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_10                             (None)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_11                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_11                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_12                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_12                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_13                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_13                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_14                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_14                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_15                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_15                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_16                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_16                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_17                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_17                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_18                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_18                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_19                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_19                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_20                             (None)

void UGameFunctionLibrary_C::SetDifficulty(double XPMultiplier, double ZombieAmount, double ZombieBossAmount, double ZombieHoundAmount, double ZombieHealth, double ZombieSpeed, double ZombieDamage, double BanditHealth, double MilitaryHealth, double ScavengerHealth, double AnimalAmount, double RandomEventMultiplier, double BanditCampMultiplier, double MilitaryCampMultiplier, double InfestationsMultiplier, double InfestationsHealth, enum class Enum_LootDifficulties GeneralItemsRarity, enum class Enum_LootDifficulties MeleeItemsRarity, enum class Enum_LootDifficulties RangedItemRarity, enum class Enum_LootDifficulties Food_DrinkRarity, enum class Enum_LootDifficulties MedicalItemsRarity, enum class Enum_LootDifficulties CraftingItemsRarity, enum class Enum_LootDifficulties EquipmentRarity, enum class Enum_LootDifficulties AttachmentsRarity, enum class Enum_LootDifficulties AmmoRarity, enum class Enum_LootDifficulties KeycardsRarity, bool PassiveReset, double HungerMultiplier, double ThirstMultiplier, double VehicleFuelMultiplier, double VehicleDamageMultiplier, class UObject* __WorldContext, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_2, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_3, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_4, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_5, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_6, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_7, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_6, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_7, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_8, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_8, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_9, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_10, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_9, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_10, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_11, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_11, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_12, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_12, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_13, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_13, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_14, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_14, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_15, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_15, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_16, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_16, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_17, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_17, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_18, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_18, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_19, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_19, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_20)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "SetDifficulty");

	Params::UGameFunctionLibrary_C_SetDifficulty_Params Parms{};

	Parms.XPMultiplier = XPMultiplier;
	Parms.ZombieAmount = ZombieAmount;
	Parms.ZombieBossAmount = ZombieBossAmount;
	Parms.ZombieHoundAmount = ZombieHoundAmount;
	Parms.ZombieHealth = ZombieHealth;
	Parms.ZombieSpeed = ZombieSpeed;
	Parms.ZombieDamage = ZombieDamage;
	Parms.BanditHealth = BanditHealth;
	Parms.MilitaryHealth = MilitaryHealth;
	Parms.ScavengerHealth = ScavengerHealth;
	Parms.AnimalAmount = AnimalAmount;
	Parms.RandomEventMultiplier = RandomEventMultiplier;
	Parms.BanditCampMultiplier = BanditCampMultiplier;
	Parms.MilitaryCampMultiplier = MilitaryCampMultiplier;
	Parms.InfestationsMultiplier = InfestationsMultiplier;
	Parms.InfestationsHealth = InfestationsHealth;
	Parms.GeneralItemsRarity = GeneralItemsRarity;
	Parms.MeleeItemsRarity = MeleeItemsRarity;
	Parms.RangedItemRarity = RangedItemRarity;
	Parms.Food_DrinkRarity = Food_DrinkRarity;
	Parms.MedicalItemsRarity = MedicalItemsRarity;
	Parms.CraftingItemsRarity = CraftingItemsRarity;
	Parms.EquipmentRarity = EquipmentRarity;
	Parms.AttachmentsRarity = AttachmentsRarity;
	Parms.AmmoRarity = AmmoRarity;
	Parms.KeycardsRarity = KeycardsRarity;
	Parms.PassiveReset = PassiveReset;
	Parms.HungerMultiplier = HungerMultiplier;
	Parms.ThirstMultiplier = ThirstMultiplier;
	Parms.VehicleFuelMultiplier = VehicleFuelMultiplier;
	Parms.VehicleDamageMultiplier = VehicleDamageMultiplier;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_AutoSettingData = K2Node_MakeStruct_AutoSettingData;
	Parms.K2Node_MakeStruct_AutoSettingData_1 = K2Node_MakeStruct_AutoSettingData_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_3 = CallFunc_Conv_DoubleToString_ReturnValue_3;
	Parms.K2Node_MakeStruct_AutoSettingData_2 = K2Node_MakeStruct_AutoSettingData_2;
	Parms.K2Node_MakeStruct_AutoSettingData_3 = K2Node_MakeStruct_AutoSettingData_3;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_4 = CallFunc_Conv_DoubleToString_ReturnValue_4;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_5 = CallFunc_Conv_DoubleToString_ReturnValue_5;
	Parms.K2Node_MakeStruct_AutoSettingData_4 = K2Node_MakeStruct_AutoSettingData_4;
	Parms.K2Node_MakeStruct_AutoSettingData_5 = K2Node_MakeStruct_AutoSettingData_5;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_6 = CallFunc_Conv_DoubleToString_ReturnValue_6;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_7 = CallFunc_Conv_DoubleToString_ReturnValue_7;
	Parms.K2Node_MakeStruct_AutoSettingData_6 = K2Node_MakeStruct_AutoSettingData_6;
	Parms.K2Node_MakeStruct_AutoSettingData_7 = K2Node_MakeStruct_AutoSettingData_7;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_8 = CallFunc_Conv_DoubleToString_ReturnValue_8;
	Parms.K2Node_MakeStruct_AutoSettingData_8 = K2Node_MakeStruct_AutoSettingData_8;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_9 = CallFunc_Conv_DoubleToString_ReturnValue_9;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_10 = CallFunc_Conv_DoubleToString_ReturnValue_10;
	Parms.K2Node_MakeStruct_AutoSettingData_9 = K2Node_MakeStruct_AutoSettingData_9;
	Parms.K2Node_MakeStruct_AutoSettingData_10 = K2Node_MakeStruct_AutoSettingData_10;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_11 = CallFunc_Conv_DoubleToString_ReturnValue_11;
	Parms.K2Node_MakeStruct_AutoSettingData_11 = K2Node_MakeStruct_AutoSettingData_11;
	Parms.K2Node_MakeStruct_AutoSettingData_12 = K2Node_MakeStruct_AutoSettingData_12;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_12 = CallFunc_Conv_DoubleToString_ReturnValue_12;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_13 = CallFunc_Conv_DoubleToString_ReturnValue_13;
	Parms.K2Node_MakeStruct_AutoSettingData_13 = K2Node_MakeStruct_AutoSettingData_13;
	Parms.K2Node_MakeStruct_AutoSettingData_14 = K2Node_MakeStruct_AutoSettingData_14;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_14 = CallFunc_Conv_DoubleToString_ReturnValue_14;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_15 = CallFunc_Conv_DoubleToString_ReturnValue_15;
	Parms.K2Node_MakeStruct_AutoSettingData_15 = K2Node_MakeStruct_AutoSettingData_15;
	Parms.K2Node_MakeStruct_AutoSettingData_16 = K2Node_MakeStruct_AutoSettingData_16;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_16 = CallFunc_Conv_DoubleToString_ReturnValue_16;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_17 = CallFunc_Conv_DoubleToString_ReturnValue_17;
	Parms.K2Node_MakeStruct_AutoSettingData_17 = K2Node_MakeStruct_AutoSettingData_17;
	Parms.K2Node_MakeStruct_AutoSettingData_18 = K2Node_MakeStruct_AutoSettingData_18;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_18 = CallFunc_Conv_DoubleToString_ReturnValue_18;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_19 = CallFunc_Conv_DoubleToString_ReturnValue_19;
	Parms.K2Node_MakeStruct_AutoSettingData_19 = K2Node_MakeStruct_AutoSettingData_19;
	Parms.K2Node_MakeStruct_AutoSettingData_20 = K2Node_MakeStruct_AutoSettingData_20;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.ChangeDifficulty
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Difficulty         Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetGameHUD_HUD                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FStruct_Difficulty          CallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)

void UGameFunctionLibrary_C::ChangeDifficulty(enum class Enum_Difficulty Difficulty, class UObject* __WorldContext, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance, class AHUD_Game_C* CallFunc_GetGameHUD_HUD, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FStruct_Difficulty& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "ChangeDifficulty");

	Params::UGameFunctionLibrary_C_ChangeDifficulty_Params Parms{};

	Parms.Difficulty = Difficulty;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_Instance = CallFunc_GetGameInstance_Instance;
	Parms.CallFunc_GetGameHUD_HUD = CallFunc_GetGameHUD_HUD;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.XpMultiplierCalc
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevellingComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UGameFunctionLibrary_C::XpMultiplierCalc(double Min, double Max, class UObject* __WorldContext, double CallFunc_RandomFloatInRange_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULevellingComponent_C* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "XpMultiplierCalc");

	Params::UGameFunctionLibrary_C_XpMultiplierCalc_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.GetCharacterFromController
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       Character                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    K2Node_DynamicCast_AsBP_MPPlayer_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::GetCharacterFromController(class AController* Object, class UObject* __WorldContext, class ABP_PlayerCharacter_C** Character, class ABP_MPPlayerController_C* K2Node_DynamicCast_AsBP_MPPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "GetCharacterFromController");

	Params::UGameFunctionLibrary_C_GetCharacterFromController_Params Parms{};

	Parms.Object = Object;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsBP_MPPlayer_Controller = K2Node_DynamicCast_AsBP_MPPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.ScalingDamageMultiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Dmg                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             NewDmg                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalDaysSurvived                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevellingComponent_C*       LocalLevelComp                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             IncreaseDmgPerLevel                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevellingComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::ScalingDamageMultiplier(double Dmg, class UObject* __WorldContext, double* NewDmg, int32 LocalDaysSurvived, class ULevellingComponent_C* LocalLevelComp, double IncreaseDmgPerLevel, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULevellingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "ScalingDamageMultiplier");

	Params::UGameFunctionLibrary_C_ScalingDamageMultiplier_Params Parms{};

	Parms.Dmg = Dmg;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalDaysSurvived = LocalDaysSurvived;
	Parms.LocalLevelComp = LocalLevelComp;
	Parms.IncreaseDmgPerLevel = IncreaseDmgPerLevel;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_GetFloatCVar_ReturnValue = CallFunc_GetFloatCVar_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (NewDmg != nullptr)
		*NewDmg = Parms.NewDmg;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.ScalingHealthMultiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             MaxHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             NewMaxHealth                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalDaysSurvived                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevellingComponent_C*       LocalLevelComp                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             IncreaseHlthPerLevel                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevellingComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::ScalingHealthMultiplier(double MaxHealth, class UObject* __WorldContext, double* NewMaxHealth, int32 LocalDaysSurvived, class ULevellingComponent_C* LocalLevelComp, double IncreaseHlthPerLevel, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULevellingComponent_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "ScalingHealthMultiplier");

	Params::UGameFunctionLibrary_C_ScalingHealthMultiplier_Params Parms{};

	Parms.MaxHealth = MaxHealth;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalDaysSurvived = LocalDaysSurvived;
	Parms.LocalLevelComp = LocalLevelComp;
	Parms.IncreaseHlthPerLevel = IncreaseHlthPerLevel;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_GetFloatCVar_ReturnValue = CallFunc_GetFloatCVar_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (NewMaxHealth != nullptr)
		*NewMaxHealth = Parms.NewMaxHealth;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.Centre Cursor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeY                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::Centre_Cursor(class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "Centre Cursor");

	Params::UGameFunctionLibrary_C_Centre_Cursor_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewportSize_SizeX = CallFunc_GetViewportSize_SizeX;
	Parms.CallFunc_GetViewportSize_SizeY = CallFunc_GetViewportSize_SizeY;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.GetHUD
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 HUD                                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 K2Node_DynamicCast_AsHUD_Game                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::GetHUD(class UObject* __WorldContext, class AHUD_Game_C** HUD, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AHUD_Game_C* K2Node_DynamicCast_AsHUD_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocalController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "GetHUD");

	Params::UGameFunctionLibrary_C_GetHUD_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD_Game = K2Node_DynamicCast_AsHUD_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HUD != nullptr)
		*HUD = Parms.HUD;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.CreateZoneAreaUI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Entering_Area_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Area_Name                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture*                    Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 K2Node_DynamicCast_AsHUD_Game                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::CreateZoneAreaUI(bool Entering_Area_, class FText Area_Name, class UTexture* Texture, const struct FLinearColor& Color, class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUD_Game_C* K2Node_DynamicCast_AsHUD_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "CreateZoneAreaUI");

	Params::UGameFunctionLibrary_C_CreateZoneAreaUI_Params Parms{};

	Parms.Entering_Area_ = Entering_Area_;
	Parms.Area_Name = Area_Name;
	Parms.Texture = Texture;
	Parms.Color = Color;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD_Game = K2Node_DynamicCast_AsHUD_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.CreateNotificationUI
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Icon_Colour                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 K2Node_DynamicCast_AsHUD_Game                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::CreateNotificationUI(class FText Message, class UTexture2D* Icon, const struct FLinearColor& Icon_Colour, double Delay, class UObject* __WorldContext, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUD_Game_C* K2Node_DynamicCast_AsHUD_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "CreateNotificationUI");

	Params::UGameFunctionLibrary_C_CreateNotificationUI_Params Parms{};

	Parms.Message = Message;
	Parms.Icon = Icon;
	Parms.Icon_Colour = Icon_Colour;
	Parms.Delay = Delay;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD_Game = K2Node_DynamicCast_AsHUD_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.GetGameHUD
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 HUD                                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 K2Node_DynamicCast_AsHUD_Game                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::GetGameHUD(class UObject* __WorldContext, class AHUD_Game_C** HUD, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUD_Game_C* K2Node_DynamicCast_AsHUD_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "GetGameHUD");

	Params::UGameFunctionLibrary_C_GetGameHUD_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD_Game = K2Node_DynamicCast_AsHUD_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HUD != nullptr)
		*HUD = Parms.HUD;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.LootDifficultySetting
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CVar                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   Selection1                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LootDifficulties   LootDifficulties                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData                                (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_1                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_2                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_3                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_4                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_5                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_6                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_7                              (None)

void UGameFunctionLibrary_C::LootDifficultySetting(class FName CVar, enum class Enum_LootDifficulties Selection1, class UObject* __WorldContext, enum class Enum_LootDifficulties LootDifficulties, bool K2Node_SwitchEnum_CmpSuccess, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_1, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_2, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_3, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_4, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_5, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_6, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "LootDifficultySetting");

	Params::UGameFunctionLibrary_C_LootDifficultySetting_Params Parms{};

	Parms.CVar = CVar;
	Parms.Selection1 = Selection1;
	Parms.__WorldContext = __WorldContext;
	Parms.LootDifficulties = LootDifficulties;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_AutoSettingData = K2Node_MakeStruct_AutoSettingData;
	Parms.K2Node_MakeStruct_AutoSettingData_1 = K2Node_MakeStruct_AutoSettingData_1;
	Parms.K2Node_MakeStruct_AutoSettingData_2 = K2Node_MakeStruct_AutoSettingData_2;
	Parms.K2Node_MakeStruct_AutoSettingData_3 = K2Node_MakeStruct_AutoSettingData_3;
	Parms.K2Node_MakeStruct_AutoSettingData_4 = K2Node_MakeStruct_AutoSettingData_4;
	Parms.K2Node_MakeStruct_AutoSettingData_5 = K2Node_MakeStruct_AutoSettingData_5;
	Parms.K2Node_MakeStruct_AutoSettingData_6 = K2Node_MakeStruct_AutoSettingData_6;
	Parms.K2Node_MakeStruct_AutoSettingData_7 = K2Node_MakeStruct_AutoSettingData_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.ResetVehicles
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_VehicleSpawner_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// TArray<class ABP_VehicleMaster_C*> CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleMaster_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleSpawner_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::ResetVehicles(class UObject* __WorldContext, TArray<class ABP_VehicleSpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class ABP_VehicleMaster_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ABP_VehicleMaster_C* CallFunc_Array_Get_Item, class ABP_VehicleSpawner_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "ResetVehicles");

	Params::UGameFunctionLibrary_C_ResetVehicles_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.LootTypeMultiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_LootType           Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Chance                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Multiplier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Keycards                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CraftingMaterials                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Ammo                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Attachments                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Equipment                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Medical                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Food_Drink                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Ranged                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Melee                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             General                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::LootTypeMultiplier(enum class Enum_LootType Selection, double Chance, class UObject* __WorldContext, double* Multiplier, double Keycards, double CraftingMaterials, double Ammo, double Attachments, double Equipment, double Medical, double Food_Drink, double Ranged, double Melee, double General, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetFloatCVar_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float CallFunc_GetFloatCVar_ReturnValue_2, float CallFunc_GetFloatCVar_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, float CallFunc_GetFloatCVar_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, float CallFunc_GetFloatCVar_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, float CallFunc_GetFloatCVar_ReturnValue_6, float CallFunc_GetFloatCVar_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, float CallFunc_GetFloatCVar_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, float CallFunc_GetFloatCVar_ReturnValue_9, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "LootTypeMultiplier");

	Params::UGameFunctionLibrary_C_LootTypeMultiplier_Params Parms{};

	Parms.Selection = Selection;
	Parms.Chance = Chance;
	Parms.__WorldContext = __WorldContext;
	Parms.Keycards = Keycards;
	Parms.CraftingMaterials = CraftingMaterials;
	Parms.Ammo = Ammo;
	Parms.Attachments = Attachments;
	Parms.Equipment = Equipment;
	Parms.Medical = Medical;
	Parms.Food_Drink = Food_Drink;
	Parms.Ranged = Ranged;
	Parms.Melee = Melee;
	Parms.General = General;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetFloatCVar_ReturnValue = CallFunc_GetFloatCVar_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatCVar_ReturnValue_1 = CallFunc_GetFloatCVar_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetFloatCVar_ReturnValue_2 = CallFunc_GetFloatCVar_ReturnValue_2;
	Parms.CallFunc_GetFloatCVar_ReturnValue_3 = CallFunc_GetFloatCVar_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GetFloatCVar_ReturnValue_4 = CallFunc_GetFloatCVar_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_GetFloatCVar_ReturnValue_5 = CallFunc_GetFloatCVar_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_GetFloatCVar_ReturnValue_6 = CallFunc_GetFloatCVar_ReturnValue_6;
	Parms.CallFunc_GetFloatCVar_ReturnValue_7 = CallFunc_GetFloatCVar_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_GetFloatCVar_ReturnValue_8 = CallFunc_GetFloatCVar_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_GetFloatCVar_ReturnValue_9 = CallFunc_GetFloatCVar_ReturnValue_9;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9;

	UObject::ProcessEvent(Func, &Parms);

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.DestroyMainMenuActors
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_RadioTower_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_FlickeringLightSparks_MainMenu_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// TArray<class ABP_CharacterCreator_C*>CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FlickeringLightSparks_MainMenu_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_RadioTower_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::DestroyMainMenuActors(class UObject* __WorldContext, int32 Temp_int_Loop_Counter_Variable, TArray<class ABP_RadioTower_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class ABP_FlickeringLightSparks_MainMenu_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, TArray<class ABP_CharacterCreator_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ABP_FlickeringLightSparks_MainMenu_C* CallFunc_Array_Get_Item, class ABP_RadioTower_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, class AActor* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "DestroyMainMenuActors");

	Params::UGameFunctionLibrary_C_DestroyMainMenuActors_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.ApplyRadiationDamage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             ChanceForRadDamage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RadDamage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URadiationComponent_C*       RadiationComp                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URadiationComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::ApplyRadiationDamage(class AActor* Actor, double ChanceForRadDamage, double RadDamage, class UObject* __WorldContext, class URadiationComponent_C* RadiationComp, class URadiationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "ApplyRadiationDamage");

	Params::UGameFunctionLibrary_C_ApplyRadiationDamage_Params Parms{};

	Parms.Actor = Actor;
	Parms.ChanceForRadDamage = ChanceForRadDamage;
	Parms.RadDamage = RadDamage;
	Parms.__WorldContext = __WorldContext;
	Parms.RadiationComp = RadiationComp;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.ApplyMedicalEffect
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Medical_Effects                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             ChanceForBleed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ChanceForHeavyBleed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ChanceForBrokenBone                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMedicalComponent_C*         MedicalComp                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMedicalComponent_C*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::ApplyMedicalEffect(class AActor* Actor, TArray<class FName>& Medical_Effects, double ChanceForBleed, double ChanceForHeavyBleed, double ChanceForBrokenBone, class UObject* __WorldContext, class UMedicalComponent_C* MedicalComp, class UMedicalComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, class FName CallFunc_Array_Get_Item, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "ApplyMedicalEffect");

	Params::UGameFunctionLibrary_C_ApplyMedicalEffect_Params Parms{};

	Parms.Actor = Actor;
	Parms.Medical_Effects = Medical_Effects;
	Parms.ChanceForBleed = ChanceForBleed;
	Parms.ChanceForHeavyBleed = ChanceForHeavyBleed;
	Parms.ChanceForBrokenBone = ChanceForBrokenBone;
	Parms.__WorldContext = __WorldContext;
	Parms.MedicalComp = MedicalComp;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_2 = CallFunc_LessEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.GetSkillTreeManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTechTreeComponent_C*        TechTree                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::GetSkillTreeManager(class UObject* __WorldContext, class UTechTreeComponent_C** TechTree, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "GetSkillTreeManager");

	Params::UGameFunctionLibrary_C_GetSkillTreeManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TechTree != nullptr)
		*TechTree = Parms.TechTree;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.GetPassiveSkillsComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPassiveSkillsComponent_C*   SkillsComponent                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::GetPassiveSkillsComponent(class UObject* __WorldContext, class UPassiveSkillsComponent_C** SkillsComponent, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "GetPassiveSkillsComponent");

	Params::UGameFunctionLibrary_C_GetPassiveSkillsComponent_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SkillsComponent != nullptr)
		*SkillsComponent = Parms.SkillsComponent;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.GetGameMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPGameMode_C*            GameMode                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPGameMode_C*            K2Node_DynamicCast_AsBP_MPGame_Mode                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::GetGameMode(class UObject* __WorldContext, class ABP_MPGameMode_C** GameMode, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABP_MPGameMode_C* K2Node_DynamicCast_AsBP_MPGame_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "GetGameMode");

	Params::UGameFunctionLibrary_C_GetGameMode_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_MPGame_Mode = K2Node_DynamicCast_AsBP_MPGame_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameMode != nullptr)
		*GameMode = Parms.GameMode;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.ResetPlayerStats
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPGameMode_C*            CallFunc_GetGameMode_GameMode                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::ResetPlayerStats(class UObject* __WorldContext, class ABP_MPGameMode_C* CallFunc_GetGameMode_GameMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "ResetPlayerStats");

	Params::UGameFunctionLibrary_C_ResetPlayerStats_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_GameMode = CallFunc_GetGameMode_GameMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.GetGameInstance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          Instance                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          K2Node_DynamicCast_AsSD_Game_Instance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::GetGameInstance(class UObject* __WorldContext, class USD_GameInstance_C** Instance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USD_GameInstance_C* K2Node_DynamicCast_AsSD_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "GetGameInstance");

	Params::UGameFunctionLibrary_C_GetGameInstance_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSD_Game_Instance = K2Node_DynamicCast_AsSD_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Instance != nullptr)
		*Instance = Parms.Instance;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.DestroyAllActors
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MasterQuestObject_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_PlayerMarker_C*>  CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class UBPC_MinimapSystem_C*        CallFunc_Get_Minimap_Component_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Marker_C*>        CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// TArray<class ABP_CompassMarker_C*> CallFunc_GetAllActorsOfClass_OutActors_3                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_StaticMeshClass_C*>CallFunc_GetAllActorsOfClass_OutActors_4                         (ReferenceParm)
// TArray<class ABP_SkeletalMeshClass_C*>CallFunc_GetAllActorsOfClass_OutActors_5                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACharacter*>          CallFunc_GetAllActorsOfClass_OutActors_6                         (ReferenceParm)
// TArray<class ABP_MainMeleeClass_C*>CallFunc_GetAllActorsOfClass_OutActors_7                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_FishingRod_C*>    CallFunc_GetAllActorsOfClass_OutActors_8                         (ReferenceParm)
// TArray<class ABP_MPVendorMilitary_C*>CallFunc_GetAllActorsOfClass_OutActors_9                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MPVendor_C*>      CallFunc_GetAllActorsOfClass_OutActors_10                        (ReferenceParm)
// TArray<class ABP_MPVendorVehicle_C*>CallFunc_GetAllActorsOfClass_OutActors_11                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AContainer_DeadPlayerLoot_C*>CallFunc_GetAllActorsOfClass_OutActors_12                        (ReferenceParm)
// TArray<class ABP_HiddenCache_Spawner_C*>CallFunc_GetAllActorsOfClass_OutActors_13                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_13                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MASTER_PicklockContainer_C*>CallFunc_GetAllActorsOfClass_OutActors_14                        (ReferenceParm)
// TArray<class AContainer_HiddenCache_C*>CallFunc_GetAllActorsOfClass_OutActors_15                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_14                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_15                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CraftingStation_C*>CallFunc_GetAllActorsOfClass_OutActors_16                        (ReferenceParm)
// TArray<class ABP_CookingStation_C*>CallFunc_GetAllActorsOfClass_OutActors_17                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_16                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_17                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_LootContainer_C*> CallFunc_GetAllActorsOfClass_OutActors_18                        (ReferenceParm)
// TArray<class ABP_MASTER_ToolRequiredContainer_C*>CallFunc_GetAllActorsOfClass_OutActors_19                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_18                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_19                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AMaster_AirdropContainer_C*>CallFunc_GetAllActorsOfClass_OutActors_20                        (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_20                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_SkySettings_C*>   CallFunc_GetAllActorsOfClass_OutActors_21                        (ReferenceParm)
// TArray<class ABP_EventMaster_C*>   CallFunc_GetAllActorsOfClass_OutActors_22                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_21                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_22                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_AI_C*>            CallFunc_GetAllActorsOfClass_OutActors_23                        (ReferenceParm)
// TArray<class ABP_MasterTurret_C*>  CallFunc_GetAllActorsOfClass_OutActors_24                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_23                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_24                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MasterCamera_C*>  CallFunc_GetAllActorsOfClass_OutActors_25                        (ReferenceParm)
// TArray<class ABP_AIWeapon_Master_C*>CallFunc_GetAllActorsOfClass_OutActors_26                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_25                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_26                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MasterAICharacter_C*>CallFunc_GetAllActorsOfClass_OutActors_27                        (ReferenceParm)
// TArray<class ABuildable_MASTER_C*> CallFunc_GetAllActorsOfClass_OutActors_28                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_27                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_28                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_VehicleMaster_C*> CallFunc_GetAllActorsOfClass_OutActors_29                        (ReferenceParm)
// TArray<class ABP_MasterLight_C*>   CallFunc_GetAllActorsOfClass_OutActors_30                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_29                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_30                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_ZoneBase_C*>      CallFunc_GetAllActorsOfClass_OutActors_31                        (ReferenceParm)
// TArray<class APrefabActor*>        CallFunc_GetAllActorsOfClass_OutActors_32                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_31                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_32                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MasterObject_C*>  CallFunc_GetAllActorsOfClass_OutActors_33                        (ReferenceParm)
// TArray<class AUDS_Occlusion_Volume_C*>CallFunc_GetAllActorsOfClass_OutActors_34                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_33                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_34                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MasterDoor_C*>    CallFunc_GetAllActorsOfClass_OutActors_35                        (ReferenceParm)
// TArray<class ABP_LaboratoryMaster_C*>CallFunc_GetAllActorsOfClass_OutActors_36                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_35                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_36                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_VehicleSpawner_C*>CallFunc_GetAllActorsOfClass_OutActors_37                        (ReferenceParm)
// TArray<class ABP_RandomEvent_C*>   CallFunc_GetAllActorsOfClass_OutActors_38                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_37                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_38                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_RandomEvent_Radiation_C*>CallFunc_GetAllActorsOfClass_OutActors_39                        (ReferenceParm)
// TArray<class ABP_AISpawningVolume_RandomChanceToSpawn_C*>CallFunc_GetAllActorsOfClass_OutActors_40                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_39                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_40                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CampSpawner_Bandits_C*>CallFunc_GetAllActorsOfClass_OutActors_41                        (ReferenceParm)
// TArray<class ABP_CampSpawner_Military_C*>CallFunc_GetAllActorsOfClass_OutActors_42                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_41                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_42                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CampSpawner_Scavengers_C*>CallFunc_GetAllActorsOfClass_OutActors_43                        (ReferenceParm)
// TArray<class ABP_Keycard_Spawner_C*>CallFunc_GetAllActorsOfClass_OutActors_44                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_43                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_44                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MPVendorMilitary_Spawner_C*>CallFunc_GetAllActorsOfClass_OutActors_45                        (ReferenceParm)
// TArray<class ABP_MPVendorVehicle_Spawner_C*>CallFunc_GetAllActorsOfClass_OutActors_46                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_45                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_46                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_AIOSpawner_Infestation_C*>CallFunc_GetAllActorsOfClass_OutActors_47                        (ReferenceParm)
// TArray<class ABP_AISpawner_Master_C*>CallFunc_GetAllActorsOfClass_OutActors_48                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_47                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_48                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CookingStation_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterTurret_C*          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CompassMarker_C*         CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EventMaster_C*           CallFunc_Array_Get_Item_4                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterCamera_C*          CallFunc_Array_Get_Item_5                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CraftingStation_C*       CallFunc_Array_Get_Item_6                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AIWeapon_Master_C*       CallFunc_Array_Get_Item_7                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterAICharacter_C*     CallFunc_Array_Get_Item_8                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MASTER_ToolRequiredContainer_C*CallFunc_Array_Get_Item_9                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AContainer_HiddenCache_C*    CallFunc_Array_Get_Item_10                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildable_MASTER_C*         CallFunc_Array_Get_Item_11                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_12                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MASTER_PicklockContainer_C*CallFunc_Array_Get_Item_13                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ZoneBase_C*              CallFunc_Array_Get_Item_14                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APrefabActor*                CallFunc_Array_Get_Item_15                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_HiddenCache_Spawner_C*   CallFunc_Array_Get_Item_16                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterLight_C*           CallFunc_Array_Get_Item_17                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_19                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_20                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUDS_Occlusion_Volume_C*     CallFunc_Array_Get_Item_18                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AContainer_DeadPlayerLoot_C* CallFunc_Array_Get_Item_19                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_21                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_21                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_22                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterDoor_C*            CallFunc_Array_Get_Item_20                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_22                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_23                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_23                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_23                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterObject_C*          CallFunc_Array_Get_Item_21                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkySettings_C*           CallFunc_Array_Get_Item_22                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_23                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_24                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_24                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_24                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LaboratoryMaster_C*      CallFunc_Array_Get_Item_24                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_25                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_26                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_25                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_25                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_26                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_26                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CampSpawner_Bandits_C*   CallFunc_Array_Get_Item_25                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_26                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_27                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_27                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_27                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_27                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CampSpawner_Scavengers_C*CallFunc_Array_Get_Item_28                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_28                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_29                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_28                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_28                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_29                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_29                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CampSpawner_Military_C*  CallFunc_Array_Get_Item_29                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_30                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_30                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_30                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_30                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AISpawningVolume_RandomChanceToSpawn_C*CallFunc_Array_Get_Item_31                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_31                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_31                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_31                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_32                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RandomEvent_C*           CallFunc_Array_Get_Item_32                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_32                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_32                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_33                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_34                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_33                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_33                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_34                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_34                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_35                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_35                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_35                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RandomEvent_Radiation_C* CallFunc_Array_Get_Item_33                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_FishingRod_C*            CallFunc_Array_Get_Item_34                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_36                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_36                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_36                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_35                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_36                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleSpawner_C*        CallFunc_Array_Get_Item_35                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_LootContainer_C*         CallFunc_Array_Get_Item_36                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_37                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_38                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_37                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_37                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_38                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_38                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_37                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_38                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Keycard_Spawner_C*       CallFunc_Array_Get_Item_37                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MainMeleeClass_C*        CallFunc_Array_Get_Item_38                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_39                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_39                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_39                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_39                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_40                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_39                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_40                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_40                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_41                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_42                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_41                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_41                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_42                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_42                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_40                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_41                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MPVendorVehicle_Spawner_C*CallFunc_Array_Get_Item_40                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_41                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_43                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_43                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_43                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_42                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_42                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_44                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_45                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_44                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_44                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_45                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_45                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_43                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_44                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AISpawner_Master_C*      CallFunc_Array_Get_Item_43                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMaster_AirdropContainer_C*  CallFunc_Array_Get_Item_44                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_45                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_46                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkeletalMeshClass_C*     CallFunc_Array_Get_Item_45                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerMarker_C*          CallFunc_Array_Get_Item_46                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_47                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_49                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_46                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_46                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_46                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_47                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PlayerMarker_C*           CallFunc_Array_Get_Item_48                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_47                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_48                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_47                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_47                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_48                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_48                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_48                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterQuestObject_C*     CallFunc_Array_Get_Item_49                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_49                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_49                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StaticMeshClass_C*       CallFunc_Array_Get_Item_50                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_49                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_49                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::DestroyAllActors(class UObject* __WorldContext, int32 Temp_int_Loop_Counter_Variable, TArray<class ABP_MasterQuestObject_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<class ABP_PlayerMarker_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class ABP_Marker_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, TArray<class ABP_CompassMarker_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, TArray<class ABP_StaticMeshClass_C*>& CallFunc_GetAllActorsOfClass_OutActors_4, TArray<class ABP_SkeletalMeshClass_C*>& CallFunc_GetAllActorsOfClass_OutActors_5, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, TArray<class ACharacter*>& CallFunc_GetAllActorsOfClass_OutActors_6, TArray<class ABP_MainMeleeClass_C*>& CallFunc_GetAllActorsOfClass_OutActors_7, int32 CallFunc_Array_Length_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_7, TArray<class ABP_FishingRod_C*>& CallFunc_GetAllActorsOfClass_OutActors_8, TArray<class ABP_MPVendorMilitary_C*>& CallFunc_GetAllActorsOfClass_OutActors_9, int32 CallFunc_Array_Length_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_9, TArray<class ABP_MPVendor_C*>& CallFunc_GetAllActorsOfClass_OutActors_10, TArray<class ABP_MPVendorVehicle_C*>& CallFunc_GetAllActorsOfClass_OutActors_11, int32 CallFunc_Array_Length_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue_11, TArray<class AContainer_DeadPlayerLoot_C*>& CallFunc_GetAllActorsOfClass_OutActors_12, TArray<class ABP_HiddenCache_Spawner_C*>& CallFunc_GetAllActorsOfClass_OutActors_13, int32 CallFunc_Array_Length_ReturnValue_12, int32 CallFunc_Array_Length_ReturnValue_13, TArray<class ABP_MASTER_PicklockContainer_C*>& CallFunc_GetAllActorsOfClass_OutActors_14, TArray<class AContainer_HiddenCache_C*>& CallFunc_GetAllActorsOfClass_OutActors_15, int32 CallFunc_Array_Length_ReturnValue_14, int32 CallFunc_Array_Length_ReturnValue_15, TArray<class ABP_CraftingStation_C*>& CallFunc_GetAllActorsOfClass_OutActors_16, TArray<class ABP_CookingStation_C*>& CallFunc_GetAllActorsOfClass_OutActors_17, int32 CallFunc_Array_Length_ReturnValue_16, int32 CallFunc_Array_Length_ReturnValue_17, TArray<class ABP_LootContainer_C*>& CallFunc_GetAllActorsOfClass_OutActors_18, TArray<class ABP_MASTER_ToolRequiredContainer_C*>& CallFunc_GetAllActorsOfClass_OutActors_19, int32 CallFunc_Array_Length_ReturnValue_18, int32 CallFunc_Array_Length_ReturnValue_19, TArray<class AMaster_AirdropContainer_C*>& CallFunc_GetAllActorsOfClass_OutActors_20, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_20, TArray<class ABP_SkySettings_C*>& CallFunc_GetAllActorsOfClass_OutActors_21, TArray<class ABP_EventMaster_C*>& CallFunc_GetAllActorsOfClass_OutActors_22, int32 CallFunc_Array_Length_ReturnValue_21, int32 CallFunc_Array_Length_ReturnValue_22, TArray<class ABP_AI_C*>& CallFunc_GetAllActorsOfClass_OutActors_23, TArray<class ABP_MasterTurret_C*>& CallFunc_GetAllActorsOfClass_OutActors_24, int32 CallFunc_Array_Length_ReturnValue_23, int32 CallFunc_Array_Length_ReturnValue_24, TArray<class ABP_MasterCamera_C*>& CallFunc_GetAllActorsOfClass_OutActors_25, TArray<class ABP_AIWeapon_Master_C*>& CallFunc_GetAllActorsOfClass_OutActors_26, int32 CallFunc_Array_Length_ReturnValue_25, int32 CallFunc_Array_Length_ReturnValue_26, TArray<class ABP_MasterAICharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors_27, TArray<class ABuildable_MASTER_C*>& CallFunc_GetAllActorsOfClass_OutActors_28, int32 CallFunc_Array_Length_ReturnValue_27, int32 CallFunc_Array_Length_ReturnValue_28, TArray<class ABP_VehicleMaster_C*>& CallFunc_GetAllActorsOfClass_OutActors_29, TArray<class ABP_MasterLight_C*>& CallFunc_GetAllActorsOfClass_OutActors_30, int32 CallFunc_Array_Length_ReturnValue_29, int32 CallFunc_Array_Length_ReturnValue_30, TArray<class ABP_ZoneBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_31, TArray<class APrefabActor*>& CallFunc_GetAllActorsOfClass_OutActors_32, int32 CallFunc_Array_Length_ReturnValue_31, int32 CallFunc_Array_Length_ReturnValue_32, TArray<class ABP_MasterObject_C*>& CallFunc_GetAllActorsOfClass_OutActors_33, TArray<class AUDS_Occlusion_Volume_C*>& CallFunc_GetAllActorsOfClass_OutActors_34, int32 CallFunc_Array_Length_ReturnValue_33, int32 CallFunc_Array_Length_ReturnValue_34, TArray<class ABP_MasterDoor_C*>& CallFunc_GetAllActorsOfClass_OutActors_35, TArray<class ABP_LaboratoryMaster_C*>& CallFunc_GetAllActorsOfClass_OutActors_36, int32 CallFunc_Array_Length_ReturnValue_35, int32 CallFunc_Array_Length_ReturnValue_36, TArray<class ABP_VehicleSpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors_37, TArray<class ABP_RandomEvent_C*>& CallFunc_GetAllActorsOfClass_OutActors_38, int32 CallFunc_Array_Length_ReturnValue_37, int32 CallFunc_Array_Length_ReturnValue_38, TArray<class ABP_RandomEvent_Radiation_C*>& CallFunc_GetAllActorsOfClass_OutActors_39, TArray<class ABP_AISpawningVolume_RandomChanceToSpawn_C*>& CallFunc_GetAllActorsOfClass_OutActors_40, int32 CallFunc_Array_Length_ReturnValue_39, int32 CallFunc_Array_Length_ReturnValue_40, TArray<class ABP_CampSpawner_Bandits_C*>& CallFunc_GetAllActorsOfClass_OutActors_41, TArray<class ABP_CampSpawner_Military_C*>& CallFunc_GetAllActorsOfClass_OutActors_42, int32 CallFunc_Array_Length_ReturnValue_41, int32 CallFunc_Array_Length_ReturnValue_42, TArray<class ABP_CampSpawner_Scavengers_C*>& CallFunc_GetAllActorsOfClass_OutActors_43, TArray<class ABP_Keycard_Spawner_C*>& CallFunc_GetAllActorsOfClass_OutActors_44, int32 CallFunc_Array_Length_ReturnValue_43, int32 CallFunc_Array_Length_ReturnValue_44, TArray<class ABP_MPVendorMilitary_Spawner_C*>& CallFunc_GetAllActorsOfClass_OutActors_45, TArray<class ABP_MPVendorVehicle_Spawner_C*>& CallFunc_GetAllActorsOfClass_OutActors_46, int32 CallFunc_Array_Length_ReturnValue_45, int32 CallFunc_Array_Length_ReturnValue_46, TArray<class ABP_AIOSpawner_Infestation_C*>& CallFunc_GetAllActorsOfClass_OutActors_47, TArray<class ABP_AISpawner_Master_C*>& CallFunc_GetAllActorsOfClass_OutActors_48, int32 CallFunc_Array_Length_ReturnValue_47, int32 CallFunc_Array_Length_ReturnValue_48, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, class ABP_CookingStation_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, class ABP_MasterTurret_C* CallFunc_Array_Get_Item_2, class ABP_CompassMarker_C* CallFunc_Array_Get_Item_3, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_4, class ABP_EventMaster_C* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Array_Index_Variable_6, class ABP_MasterCamera_C* CallFunc_Array_Get_Item_5, class ABP_CraftingStation_C* CallFunc_Array_Get_Item_6, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_7, class ABP_AIWeapon_Master_C* CallFunc_Array_Get_Item_7, int32 Temp_int_Loop_Counter_Variable_6, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Loop_Counter_Variable_8, bool CallFunc_Less_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 Temp_int_Array_Index_Variable_8, int32 Temp_int_Array_Index_Variable_9, class ABP_MasterAICharacter_C* CallFunc_Array_Get_Item_8, class ABP_MASTER_ToolRequiredContainer_C* CallFunc_Array_Get_Item_9, int32 Temp_int_Array_Index_Variable_10, class AContainer_HiddenCache_C* CallFunc_Array_Get_Item_10, int32 Temp_int_Loop_Counter_Variable_9, bool CallFunc_Less_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 Temp_int_Array_Index_Variable_11, int32 Temp_int_Loop_Counter_Variable_10, class ABuildable_MASTER_C* CallFunc_Array_Get_Item_11, bool CallFunc_Less_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_10, int32 Temp_int_Loop_Counter_Variable_11, bool CallFunc_Less_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 Temp_int_Array_Index_Variable_12, int32 Temp_int_Loop_Counter_Variable_12, class AActor* CallFunc_Array_Get_Item_12, bool CallFunc_Less_IntInt_ReturnValue_12, int32 CallFunc_Add_IntInt_ReturnValue_12, int32 Temp_int_Loop_Counter_Variable_13, int32 Temp_int_Array_Index_Variable_13, bool CallFunc_Less_IntInt_ReturnValue_13, class ABP_MASTER_PicklockContainer_C* CallFunc_Array_Get_Item_13, int32 CallFunc_Add_IntInt_ReturnValue_13, int32 Temp_int_Loop_Counter_Variable_14, bool CallFunc_Less_IntInt_ReturnValue_14, int32 CallFunc_Add_IntInt_ReturnValue_14, int32 Temp_int_Array_Index_Variable_14, int32 Temp_int_Loop_Counter_Variable_15, class ABP_ZoneBase_C* CallFunc_Array_Get_Item_14, bool CallFunc_Less_IntInt_ReturnValue_15, int32 CallFunc_Add_IntInt_ReturnValue_15, int32 Temp_int_Loop_Counter_Variable_16, bool CallFunc_Less_IntInt_ReturnValue_16, int32 CallFunc_Add_IntInt_ReturnValue_16, int32 Temp_int_Array_Index_Variable_15, int32 Temp_int_Array_Index_Variable_16, class APrefabActor* CallFunc_Array_Get_Item_15, class ABP_HiddenCache_Spawner_C* CallFunc_Array_Get_Item_16, int32 Temp_int_Loop_Counter_Variable_17, bool CallFunc_Less_IntInt_ReturnValue_17, int32 CallFunc_Add_IntInt_ReturnValue_17, int32 Temp_int_Array_Index_Variable_17, int32 Temp_int_Loop_Counter_Variable_18, class ABP_MasterLight_C* CallFunc_Array_Get_Item_17, bool CallFunc_Less_IntInt_ReturnValue_18, int32 CallFunc_Add_IntInt_ReturnValue_18, int32 Temp_int_Loop_Counter_Variable_19, bool CallFunc_Less_IntInt_ReturnValue_19, int32 CallFunc_Add_IntInt_ReturnValue_19, int32 Temp_int_Array_Index_Variable_18, int32 Temp_int_Loop_Counter_Variable_20, class AUDS_Occlusion_Volume_C* CallFunc_Array_Get_Item_18, bool CallFunc_Less_IntInt_ReturnValue_20, int32 CallFunc_Add_IntInt_ReturnValue_20, int32 Temp_int_Array_Index_Variable_19, class AContainer_DeadPlayerLoot_C* CallFunc_Array_Get_Item_19, int32 Temp_int_Loop_Counter_Variable_21, bool CallFunc_Less_IntInt_ReturnValue_21, int32 CallFunc_Add_IntInt_ReturnValue_21, int32 Temp_int_Array_Index_Variable_20, int32 Temp_int_Loop_Counter_Variable_22, class ABP_MasterDoor_C* CallFunc_Array_Get_Item_20, bool CallFunc_Less_IntInt_ReturnValue_22, int32 CallFunc_Add_IntInt_ReturnValue_22, int32 Temp_int_Loop_Counter_Variable_23, bool CallFunc_Less_IntInt_ReturnValue_23, int32 CallFunc_Add_IntInt_ReturnValue_23, int32 Temp_int_Array_Index_Variable_21, class ABP_MasterObject_C* CallFunc_Array_Get_Item_21, int32 Temp_int_Array_Index_Variable_22, int32 Temp_int_Array_Index_Variable_23, class ABP_SkySettings_C* CallFunc_Array_Get_Item_22, class AActor* CallFunc_Array_Get_Item_23, int32 Temp_int_Loop_Counter_Variable_24, bool CallFunc_Less_IntInt_ReturnValue_24, int32 CallFunc_Add_IntInt_ReturnValue_24, int32 Temp_int_Array_Index_Variable_24, class ABP_LaboratoryMaster_C* CallFunc_Array_Get_Item_24, int32 Temp_int_Loop_Counter_Variable_25, int32 Temp_int_Loop_Counter_Variable_26, bool CallFunc_Less_IntInt_ReturnValue_25, int32 CallFunc_Add_IntInt_ReturnValue_25, bool CallFunc_Less_IntInt_ReturnValue_26, int32 CallFunc_Add_IntInt_ReturnValue_26, int32 Temp_int_Array_Index_Variable_25, class ABP_CampSpawner_Bandits_C* CallFunc_Array_Get_Item_25, int32 Temp_int_Array_Index_Variable_26, int32 Temp_int_Array_Index_Variable_27, class AActor* CallFunc_Array_Get_Item_26, class AActor* CallFunc_Array_Get_Item_27, int32 Temp_int_Loop_Counter_Variable_27, bool CallFunc_Less_IntInt_ReturnValue_27, int32 CallFunc_Add_IntInt_ReturnValue_27, int32 Temp_int_Array_Index_Variable_28, class ABP_CampSpawner_Scavengers_C* CallFunc_Array_Get_Item_28, int32 Temp_int_Loop_Counter_Variable_28, int32 Temp_int_Loop_Counter_Variable_29, bool CallFunc_Less_IntInt_ReturnValue_28, int32 CallFunc_Add_IntInt_ReturnValue_28, bool CallFunc_Less_IntInt_ReturnValue_29, int32 CallFunc_Add_IntInt_ReturnValue_29, int32 Temp_int_Array_Index_Variable_29, int32 Temp_int_Array_Index_Variable_30, class ABP_CampSpawner_Military_C* CallFunc_Array_Get_Item_29, class AActor* CallFunc_Array_Get_Item_30, int32 Temp_int_Loop_Counter_Variable_30, bool CallFunc_Less_IntInt_ReturnValue_30, int32 CallFunc_Add_IntInt_ReturnValue_30, int32 Temp_int_Array_Index_Variable_31, class ABP_AISpawningVolume_RandomChanceToSpawn_C* CallFunc_Array_Get_Item_31, int32 Temp_int_Loop_Counter_Variable_31, bool CallFunc_Less_IntInt_ReturnValue_31, int32 CallFunc_Add_IntInt_ReturnValue_31, int32 Temp_int_Array_Index_Variable_32, int32 Temp_int_Loop_Counter_Variable_32, class ABP_RandomEvent_C* CallFunc_Array_Get_Item_32, bool CallFunc_Less_IntInt_ReturnValue_32, int32 CallFunc_Add_IntInt_ReturnValue_32, int32 Temp_int_Loop_Counter_Variable_33, int32 Temp_int_Loop_Counter_Variable_34, bool CallFunc_Less_IntInt_ReturnValue_33, int32 CallFunc_Add_IntInt_ReturnValue_33, bool CallFunc_Less_IntInt_ReturnValue_34, int32 CallFunc_Add_IntInt_ReturnValue_34, int32 Temp_int_Loop_Counter_Variable_35, bool CallFunc_Less_IntInt_ReturnValue_35, int32 CallFunc_Add_IntInt_ReturnValue_35, int32 Temp_int_Array_Index_Variable_33, int32 Temp_int_Array_Index_Variable_34, class ABP_RandomEvent_Radiation_C* CallFunc_Array_Get_Item_33, class ABP_FishingRod_C* CallFunc_Array_Get_Item_34, int32 Temp_int_Loop_Counter_Variable_36, bool CallFunc_Less_IntInt_ReturnValue_36, int32 CallFunc_Add_IntInt_ReturnValue_36, int32 Temp_int_Array_Index_Variable_35, int32 Temp_int_Array_Index_Variable_36, class ABP_VehicleSpawner_C* CallFunc_Array_Get_Item_35, class ABP_LootContainer_C* CallFunc_Array_Get_Item_36, int32 Temp_int_Loop_Counter_Variable_37, int32 Temp_int_Loop_Counter_Variable_38, bool CallFunc_Less_IntInt_ReturnValue_37, int32 CallFunc_Add_IntInt_ReturnValue_37, bool CallFunc_Less_IntInt_ReturnValue_38, int32 CallFunc_Add_IntInt_ReturnValue_38, int32 Temp_int_Array_Index_Variable_37, int32 Temp_int_Array_Index_Variable_38, class ABP_Keycard_Spawner_C* CallFunc_Array_Get_Item_37, class ABP_MainMeleeClass_C* CallFunc_Array_Get_Item_38, int32 Temp_int_Loop_Counter_Variable_39, bool CallFunc_Less_IntInt_ReturnValue_39, int32 CallFunc_Add_IntInt_ReturnValue_39, int32 Temp_int_Array_Index_Variable_39, int32 Temp_int_Loop_Counter_Variable_40, class AActor* CallFunc_Array_Get_Item_39, bool CallFunc_Less_IntInt_ReturnValue_40, int32 CallFunc_Add_IntInt_ReturnValue_40, int32 Temp_int_Loop_Counter_Variable_41, int32 Temp_int_Loop_Counter_Variable_42, bool CallFunc_Less_IntInt_ReturnValue_41, int32 CallFunc_Add_IntInt_ReturnValue_41, bool CallFunc_Less_IntInt_ReturnValue_42, int32 CallFunc_Add_IntInt_ReturnValue_42, int32 Temp_int_Array_Index_Variable_40, int32 Temp_int_Array_Index_Variable_41, class ABP_MPVendorVehicle_Spawner_C* CallFunc_Array_Get_Item_40, class AActor* CallFunc_Array_Get_Item_41, int32 Temp_int_Loop_Counter_Variable_43, bool CallFunc_Less_IntInt_ReturnValue_43, int32 CallFunc_Add_IntInt_ReturnValue_43, int32 Temp_int_Array_Index_Variable_42, class AActor* CallFunc_Array_Get_Item_42, int32 Temp_int_Loop_Counter_Variable_44, int32 Temp_int_Loop_Counter_Variable_45, bool CallFunc_Less_IntInt_ReturnValue_44, int32 CallFunc_Add_IntInt_ReturnValue_44, bool CallFunc_Less_IntInt_ReturnValue_45, int32 CallFunc_Add_IntInt_ReturnValue_45, int32 Temp_int_Array_Index_Variable_43, int32 Temp_int_Array_Index_Variable_44, class ABP_AISpawner_Master_C* CallFunc_Array_Get_Item_43, class AMaster_AirdropContainer_C* CallFunc_Array_Get_Item_44, int32 Temp_int_Array_Index_Variable_45, int32 Temp_int_Array_Index_Variable_46, class ABP_SkeletalMeshClass_C* CallFunc_Array_Get_Item_45, class ABP_PlayerMarker_C* CallFunc_Array_Get_Item_46, class AActor* CallFunc_Array_Get_Item_47, int32 CallFunc_Array_Length_ReturnValue_49, int32 Temp_int_Loop_Counter_Variable_46, bool CallFunc_Less_IntInt_ReturnValue_46, int32 CallFunc_Add_IntInt_ReturnValue_46, int32 Temp_int_Array_Index_Variable_47, class UW_PlayerMarker_C* CallFunc_Array_Get_Item_48, int32 Temp_int_Loop_Counter_Variable_47, int32 Temp_int_Loop_Counter_Variable_48, bool CallFunc_Less_IntInt_ReturnValue_47, int32 CallFunc_Add_IntInt_ReturnValue_47, bool CallFunc_Less_IntInt_ReturnValue_48, int32 CallFunc_Add_IntInt_ReturnValue_48, int32 Temp_int_Array_Index_Variable_48, class ABP_MasterQuestObject_C* CallFunc_Array_Get_Item_49, int32 Temp_int_Loop_Counter_Variable_49, int32 Temp_int_Array_Index_Variable_49, class ABP_StaticMeshClass_C* CallFunc_Array_Get_Item_50, bool CallFunc_Less_IntInt_ReturnValue_49, int32 CallFunc_Add_IntInt_ReturnValue_49)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "DestroyAllActors");

	Params::UGameFunctionLibrary_C_DestroyAllActors_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Get_Minimap_Component_ReturnValue = CallFunc_Get_Minimap_Component_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_3 = CallFunc_GetAllActorsOfClass_OutActors_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_4 = CallFunc_GetAllActorsOfClass_OutActors_4;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_5 = CallFunc_GetAllActorsOfClass_OutActors_5;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_6 = CallFunc_GetAllActorsOfClass_OutActors_6;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_7 = CallFunc_GetAllActorsOfClass_OutActors_7;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_8 = CallFunc_GetAllActorsOfClass_OutActors_8;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_9 = CallFunc_GetAllActorsOfClass_OutActors_9;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_10 = CallFunc_GetAllActorsOfClass_OutActors_10;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_11 = CallFunc_GetAllActorsOfClass_OutActors_11;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_12 = CallFunc_GetAllActorsOfClass_OutActors_12;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_13 = CallFunc_GetAllActorsOfClass_OutActors_13;
	Parms.CallFunc_Array_Length_ReturnValue_12 = CallFunc_Array_Length_ReturnValue_12;
	Parms.CallFunc_Array_Length_ReturnValue_13 = CallFunc_Array_Length_ReturnValue_13;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_14 = CallFunc_GetAllActorsOfClass_OutActors_14;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_15 = CallFunc_GetAllActorsOfClass_OutActors_15;
	Parms.CallFunc_Array_Length_ReturnValue_14 = CallFunc_Array_Length_ReturnValue_14;
	Parms.CallFunc_Array_Length_ReturnValue_15 = CallFunc_Array_Length_ReturnValue_15;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_16 = CallFunc_GetAllActorsOfClass_OutActors_16;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_17 = CallFunc_GetAllActorsOfClass_OutActors_17;
	Parms.CallFunc_Array_Length_ReturnValue_16 = CallFunc_Array_Length_ReturnValue_16;
	Parms.CallFunc_Array_Length_ReturnValue_17 = CallFunc_Array_Length_ReturnValue_17;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_18 = CallFunc_GetAllActorsOfClass_OutActors_18;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_19 = CallFunc_GetAllActorsOfClass_OutActors_19;
	Parms.CallFunc_Array_Length_ReturnValue_18 = CallFunc_Array_Length_ReturnValue_18;
	Parms.CallFunc_Array_Length_ReturnValue_19 = CallFunc_Array_Length_ReturnValue_19;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_20 = CallFunc_GetAllActorsOfClass_OutActors_20;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_20 = CallFunc_Array_Length_ReturnValue_20;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_21 = CallFunc_GetAllActorsOfClass_OutActors_21;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_22 = CallFunc_GetAllActorsOfClass_OutActors_22;
	Parms.CallFunc_Array_Length_ReturnValue_21 = CallFunc_Array_Length_ReturnValue_21;
	Parms.CallFunc_Array_Length_ReturnValue_22 = CallFunc_Array_Length_ReturnValue_22;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_23 = CallFunc_GetAllActorsOfClass_OutActors_23;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_24 = CallFunc_GetAllActorsOfClass_OutActors_24;
	Parms.CallFunc_Array_Length_ReturnValue_23 = CallFunc_Array_Length_ReturnValue_23;
	Parms.CallFunc_Array_Length_ReturnValue_24 = CallFunc_Array_Length_ReturnValue_24;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_25 = CallFunc_GetAllActorsOfClass_OutActors_25;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_26 = CallFunc_GetAllActorsOfClass_OutActors_26;
	Parms.CallFunc_Array_Length_ReturnValue_25 = CallFunc_Array_Length_ReturnValue_25;
	Parms.CallFunc_Array_Length_ReturnValue_26 = CallFunc_Array_Length_ReturnValue_26;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_27 = CallFunc_GetAllActorsOfClass_OutActors_27;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_28 = CallFunc_GetAllActorsOfClass_OutActors_28;
	Parms.CallFunc_Array_Length_ReturnValue_27 = CallFunc_Array_Length_ReturnValue_27;
	Parms.CallFunc_Array_Length_ReturnValue_28 = CallFunc_Array_Length_ReturnValue_28;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_29 = CallFunc_GetAllActorsOfClass_OutActors_29;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_30 = CallFunc_GetAllActorsOfClass_OutActors_30;
	Parms.CallFunc_Array_Length_ReturnValue_29 = CallFunc_Array_Length_ReturnValue_29;
	Parms.CallFunc_Array_Length_ReturnValue_30 = CallFunc_Array_Length_ReturnValue_30;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_31 = CallFunc_GetAllActorsOfClass_OutActors_31;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_32 = CallFunc_GetAllActorsOfClass_OutActors_32;
	Parms.CallFunc_Array_Length_ReturnValue_31 = CallFunc_Array_Length_ReturnValue_31;
	Parms.CallFunc_Array_Length_ReturnValue_32 = CallFunc_Array_Length_ReturnValue_32;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_33 = CallFunc_GetAllActorsOfClass_OutActors_33;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_34 = CallFunc_GetAllActorsOfClass_OutActors_34;
	Parms.CallFunc_Array_Length_ReturnValue_33 = CallFunc_Array_Length_ReturnValue_33;
	Parms.CallFunc_Array_Length_ReturnValue_34 = CallFunc_Array_Length_ReturnValue_34;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_35 = CallFunc_GetAllActorsOfClass_OutActors_35;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_36 = CallFunc_GetAllActorsOfClass_OutActors_36;
	Parms.CallFunc_Array_Length_ReturnValue_35 = CallFunc_Array_Length_ReturnValue_35;
	Parms.CallFunc_Array_Length_ReturnValue_36 = CallFunc_Array_Length_ReturnValue_36;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_37 = CallFunc_GetAllActorsOfClass_OutActors_37;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_38 = CallFunc_GetAllActorsOfClass_OutActors_38;
	Parms.CallFunc_Array_Length_ReturnValue_37 = CallFunc_Array_Length_ReturnValue_37;
	Parms.CallFunc_Array_Length_ReturnValue_38 = CallFunc_Array_Length_ReturnValue_38;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_39 = CallFunc_GetAllActorsOfClass_OutActors_39;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_40 = CallFunc_GetAllActorsOfClass_OutActors_40;
	Parms.CallFunc_Array_Length_ReturnValue_39 = CallFunc_Array_Length_ReturnValue_39;
	Parms.CallFunc_Array_Length_ReturnValue_40 = CallFunc_Array_Length_ReturnValue_40;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_41 = CallFunc_GetAllActorsOfClass_OutActors_41;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_42 = CallFunc_GetAllActorsOfClass_OutActors_42;
	Parms.CallFunc_Array_Length_ReturnValue_41 = CallFunc_Array_Length_ReturnValue_41;
	Parms.CallFunc_Array_Length_ReturnValue_42 = CallFunc_Array_Length_ReturnValue_42;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_43 = CallFunc_GetAllActorsOfClass_OutActors_43;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_44 = CallFunc_GetAllActorsOfClass_OutActors_44;
	Parms.CallFunc_Array_Length_ReturnValue_43 = CallFunc_Array_Length_ReturnValue_43;
	Parms.CallFunc_Array_Length_ReturnValue_44 = CallFunc_Array_Length_ReturnValue_44;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_45 = CallFunc_GetAllActorsOfClass_OutActors_45;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_46 = CallFunc_GetAllActorsOfClass_OutActors_46;
	Parms.CallFunc_Array_Length_ReturnValue_45 = CallFunc_Array_Length_ReturnValue_45;
	Parms.CallFunc_Array_Length_ReturnValue_46 = CallFunc_Array_Length_ReturnValue_46;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_47 = CallFunc_GetAllActorsOfClass_OutActors_47;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_48 = CallFunc_GetAllActorsOfClass_OutActors_48;
	Parms.CallFunc_Array_Length_ReturnValue_47 = CallFunc_Array_Length_ReturnValue_47;
	Parms.CallFunc_Array_Length_ReturnValue_48 = CallFunc_Array_Length_ReturnValue_48;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.Temp_int_Array_Index_Variable_10 = Temp_int_Array_Index_Variable_10;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.Temp_int_Array_Index_Variable_11 = Temp_int_Array_Index_Variable_11;
	Parms.Temp_int_Loop_Counter_Variable_10 = Temp_int_Loop_Counter_Variable_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_10 = CallFunc_Less_IntInt_ReturnValue_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.Temp_int_Loop_Counter_Variable_11 = Temp_int_Loop_Counter_Variable_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_11 = CallFunc_Less_IntInt_ReturnValue_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.Temp_int_Array_Index_Variable_12 = Temp_int_Array_Index_Variable_12;
	Parms.Temp_int_Loop_Counter_Variable_12 = Temp_int_Loop_Counter_Variable_12;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Less_IntInt_ReturnValue_12 = CallFunc_Less_IntInt_ReturnValue_12;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.Temp_int_Loop_Counter_Variable_13 = Temp_int_Loop_Counter_Variable_13;
	Parms.Temp_int_Array_Index_Variable_13 = Temp_int_Array_Index_Variable_13;
	Parms.CallFunc_Less_IntInt_ReturnValue_13 = CallFunc_Less_IntInt_ReturnValue_13;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.Temp_int_Loop_Counter_Variable_14 = Temp_int_Loop_Counter_Variable_14;
	Parms.CallFunc_Less_IntInt_ReturnValue_14 = CallFunc_Less_IntInt_ReturnValue_14;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;
	Parms.Temp_int_Array_Index_Variable_14 = Temp_int_Array_Index_Variable_14;
	Parms.Temp_int_Loop_Counter_Variable_15 = Temp_int_Loop_Counter_Variable_15;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Less_IntInt_ReturnValue_15 = CallFunc_Less_IntInt_ReturnValue_15;
	Parms.CallFunc_Add_IntInt_ReturnValue_15 = CallFunc_Add_IntInt_ReturnValue_15;
	Parms.Temp_int_Loop_Counter_Variable_16 = Temp_int_Loop_Counter_Variable_16;
	Parms.CallFunc_Less_IntInt_ReturnValue_16 = CallFunc_Less_IntInt_ReturnValue_16;
	Parms.CallFunc_Add_IntInt_ReturnValue_16 = CallFunc_Add_IntInt_ReturnValue_16;
	Parms.Temp_int_Array_Index_Variable_15 = Temp_int_Array_Index_Variable_15;
	Parms.Temp_int_Array_Index_Variable_16 = Temp_int_Array_Index_Variable_16;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.Temp_int_Loop_Counter_Variable_17 = Temp_int_Loop_Counter_Variable_17;
	Parms.CallFunc_Less_IntInt_ReturnValue_17 = CallFunc_Less_IntInt_ReturnValue_17;
	Parms.CallFunc_Add_IntInt_ReturnValue_17 = CallFunc_Add_IntInt_ReturnValue_17;
	Parms.Temp_int_Array_Index_Variable_17 = Temp_int_Array_Index_Variable_17;
	Parms.Temp_int_Loop_Counter_Variable_18 = Temp_int_Loop_Counter_Variable_18;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_Less_IntInt_ReturnValue_18 = CallFunc_Less_IntInt_ReturnValue_18;
	Parms.CallFunc_Add_IntInt_ReturnValue_18 = CallFunc_Add_IntInt_ReturnValue_18;
	Parms.Temp_int_Loop_Counter_Variable_19 = Temp_int_Loop_Counter_Variable_19;
	Parms.CallFunc_Less_IntInt_ReturnValue_19 = CallFunc_Less_IntInt_ReturnValue_19;
	Parms.CallFunc_Add_IntInt_ReturnValue_19 = CallFunc_Add_IntInt_ReturnValue_19;
	Parms.Temp_int_Array_Index_Variable_18 = Temp_int_Array_Index_Variable_18;
	Parms.Temp_int_Loop_Counter_Variable_20 = Temp_int_Loop_Counter_Variable_20;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_Less_IntInt_ReturnValue_20 = CallFunc_Less_IntInt_ReturnValue_20;
	Parms.CallFunc_Add_IntInt_ReturnValue_20 = CallFunc_Add_IntInt_ReturnValue_20;
	Parms.Temp_int_Array_Index_Variable_19 = Temp_int_Array_Index_Variable_19;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.Temp_int_Loop_Counter_Variable_21 = Temp_int_Loop_Counter_Variable_21;
	Parms.CallFunc_Less_IntInt_ReturnValue_21 = CallFunc_Less_IntInt_ReturnValue_21;
	Parms.CallFunc_Add_IntInt_ReturnValue_21 = CallFunc_Add_IntInt_ReturnValue_21;
	Parms.Temp_int_Array_Index_Variable_20 = Temp_int_Array_Index_Variable_20;
	Parms.Temp_int_Loop_Counter_Variable_22 = Temp_int_Loop_Counter_Variable_22;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_Less_IntInt_ReturnValue_22 = CallFunc_Less_IntInt_ReturnValue_22;
	Parms.CallFunc_Add_IntInt_ReturnValue_22 = CallFunc_Add_IntInt_ReturnValue_22;
	Parms.Temp_int_Loop_Counter_Variable_23 = Temp_int_Loop_Counter_Variable_23;
	Parms.CallFunc_Less_IntInt_ReturnValue_23 = CallFunc_Less_IntInt_ReturnValue_23;
	Parms.CallFunc_Add_IntInt_ReturnValue_23 = CallFunc_Add_IntInt_ReturnValue_23;
	Parms.Temp_int_Array_Index_Variable_21 = Temp_int_Array_Index_Variable_21;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.Temp_int_Array_Index_Variable_22 = Temp_int_Array_Index_Variable_22;
	Parms.Temp_int_Array_Index_Variable_23 = Temp_int_Array_Index_Variable_23;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.Temp_int_Loop_Counter_Variable_24 = Temp_int_Loop_Counter_Variable_24;
	Parms.CallFunc_Less_IntInt_ReturnValue_24 = CallFunc_Less_IntInt_ReturnValue_24;
	Parms.CallFunc_Add_IntInt_ReturnValue_24 = CallFunc_Add_IntInt_ReturnValue_24;
	Parms.Temp_int_Array_Index_Variable_24 = Temp_int_Array_Index_Variable_24;
	Parms.CallFunc_Array_Get_Item_24 = CallFunc_Array_Get_Item_24;
	Parms.Temp_int_Loop_Counter_Variable_25 = Temp_int_Loop_Counter_Variable_25;
	Parms.Temp_int_Loop_Counter_Variable_26 = Temp_int_Loop_Counter_Variable_26;
	Parms.CallFunc_Less_IntInt_ReturnValue_25 = CallFunc_Less_IntInt_ReturnValue_25;
	Parms.CallFunc_Add_IntInt_ReturnValue_25 = CallFunc_Add_IntInt_ReturnValue_25;
	Parms.CallFunc_Less_IntInt_ReturnValue_26 = CallFunc_Less_IntInt_ReturnValue_26;
	Parms.CallFunc_Add_IntInt_ReturnValue_26 = CallFunc_Add_IntInt_ReturnValue_26;
	Parms.Temp_int_Array_Index_Variable_25 = Temp_int_Array_Index_Variable_25;
	Parms.CallFunc_Array_Get_Item_25 = CallFunc_Array_Get_Item_25;
	Parms.Temp_int_Array_Index_Variable_26 = Temp_int_Array_Index_Variable_26;
	Parms.Temp_int_Array_Index_Variable_27 = Temp_int_Array_Index_Variable_27;
	Parms.CallFunc_Array_Get_Item_26 = CallFunc_Array_Get_Item_26;
	Parms.CallFunc_Array_Get_Item_27 = CallFunc_Array_Get_Item_27;
	Parms.Temp_int_Loop_Counter_Variable_27 = Temp_int_Loop_Counter_Variable_27;
	Parms.CallFunc_Less_IntInt_ReturnValue_27 = CallFunc_Less_IntInt_ReturnValue_27;
	Parms.CallFunc_Add_IntInt_ReturnValue_27 = CallFunc_Add_IntInt_ReturnValue_27;
	Parms.Temp_int_Array_Index_Variable_28 = Temp_int_Array_Index_Variable_28;
	Parms.CallFunc_Array_Get_Item_28 = CallFunc_Array_Get_Item_28;
	Parms.Temp_int_Loop_Counter_Variable_28 = Temp_int_Loop_Counter_Variable_28;
	Parms.Temp_int_Loop_Counter_Variable_29 = Temp_int_Loop_Counter_Variable_29;
	Parms.CallFunc_Less_IntInt_ReturnValue_28 = CallFunc_Less_IntInt_ReturnValue_28;
	Parms.CallFunc_Add_IntInt_ReturnValue_28 = CallFunc_Add_IntInt_ReturnValue_28;
	Parms.CallFunc_Less_IntInt_ReturnValue_29 = CallFunc_Less_IntInt_ReturnValue_29;
	Parms.CallFunc_Add_IntInt_ReturnValue_29 = CallFunc_Add_IntInt_ReturnValue_29;
	Parms.Temp_int_Array_Index_Variable_29 = Temp_int_Array_Index_Variable_29;
	Parms.Temp_int_Array_Index_Variable_30 = Temp_int_Array_Index_Variable_30;
	Parms.CallFunc_Array_Get_Item_29 = CallFunc_Array_Get_Item_29;
	Parms.CallFunc_Array_Get_Item_30 = CallFunc_Array_Get_Item_30;
	Parms.Temp_int_Loop_Counter_Variable_30 = Temp_int_Loop_Counter_Variable_30;
	Parms.CallFunc_Less_IntInt_ReturnValue_30 = CallFunc_Less_IntInt_ReturnValue_30;
	Parms.CallFunc_Add_IntInt_ReturnValue_30 = CallFunc_Add_IntInt_ReturnValue_30;
	Parms.Temp_int_Array_Index_Variable_31 = Temp_int_Array_Index_Variable_31;
	Parms.CallFunc_Array_Get_Item_31 = CallFunc_Array_Get_Item_31;
	Parms.Temp_int_Loop_Counter_Variable_31 = Temp_int_Loop_Counter_Variable_31;
	Parms.CallFunc_Less_IntInt_ReturnValue_31 = CallFunc_Less_IntInt_ReturnValue_31;
	Parms.CallFunc_Add_IntInt_ReturnValue_31 = CallFunc_Add_IntInt_ReturnValue_31;
	Parms.Temp_int_Array_Index_Variable_32 = Temp_int_Array_Index_Variable_32;
	Parms.Temp_int_Loop_Counter_Variable_32 = Temp_int_Loop_Counter_Variable_32;
	Parms.CallFunc_Array_Get_Item_32 = CallFunc_Array_Get_Item_32;
	Parms.CallFunc_Less_IntInt_ReturnValue_32 = CallFunc_Less_IntInt_ReturnValue_32;
	Parms.CallFunc_Add_IntInt_ReturnValue_32 = CallFunc_Add_IntInt_ReturnValue_32;
	Parms.Temp_int_Loop_Counter_Variable_33 = Temp_int_Loop_Counter_Variable_33;
	Parms.Temp_int_Loop_Counter_Variable_34 = Temp_int_Loop_Counter_Variable_34;
	Parms.CallFunc_Less_IntInt_ReturnValue_33 = CallFunc_Less_IntInt_ReturnValue_33;
	Parms.CallFunc_Add_IntInt_ReturnValue_33 = CallFunc_Add_IntInt_ReturnValue_33;
	Parms.CallFunc_Less_IntInt_ReturnValue_34 = CallFunc_Less_IntInt_ReturnValue_34;
	Parms.CallFunc_Add_IntInt_ReturnValue_34 = CallFunc_Add_IntInt_ReturnValue_34;
	Parms.Temp_int_Loop_Counter_Variable_35 = Temp_int_Loop_Counter_Variable_35;
	Parms.CallFunc_Less_IntInt_ReturnValue_35 = CallFunc_Less_IntInt_ReturnValue_35;
	Parms.CallFunc_Add_IntInt_ReturnValue_35 = CallFunc_Add_IntInt_ReturnValue_35;
	Parms.Temp_int_Array_Index_Variable_33 = Temp_int_Array_Index_Variable_33;
	Parms.Temp_int_Array_Index_Variable_34 = Temp_int_Array_Index_Variable_34;
	Parms.CallFunc_Array_Get_Item_33 = CallFunc_Array_Get_Item_33;
	Parms.CallFunc_Array_Get_Item_34 = CallFunc_Array_Get_Item_34;
	Parms.Temp_int_Loop_Counter_Variable_36 = Temp_int_Loop_Counter_Variable_36;
	Parms.CallFunc_Less_IntInt_ReturnValue_36 = CallFunc_Less_IntInt_ReturnValue_36;
	Parms.CallFunc_Add_IntInt_ReturnValue_36 = CallFunc_Add_IntInt_ReturnValue_36;
	Parms.Temp_int_Array_Index_Variable_35 = Temp_int_Array_Index_Variable_35;
	Parms.Temp_int_Array_Index_Variable_36 = Temp_int_Array_Index_Variable_36;
	Parms.CallFunc_Array_Get_Item_35 = CallFunc_Array_Get_Item_35;
	Parms.CallFunc_Array_Get_Item_36 = CallFunc_Array_Get_Item_36;
	Parms.Temp_int_Loop_Counter_Variable_37 = Temp_int_Loop_Counter_Variable_37;
	Parms.Temp_int_Loop_Counter_Variable_38 = Temp_int_Loop_Counter_Variable_38;
	Parms.CallFunc_Less_IntInt_ReturnValue_37 = CallFunc_Less_IntInt_ReturnValue_37;
	Parms.CallFunc_Add_IntInt_ReturnValue_37 = CallFunc_Add_IntInt_ReturnValue_37;
	Parms.CallFunc_Less_IntInt_ReturnValue_38 = CallFunc_Less_IntInt_ReturnValue_38;
	Parms.CallFunc_Add_IntInt_ReturnValue_38 = CallFunc_Add_IntInt_ReturnValue_38;
	Parms.Temp_int_Array_Index_Variable_37 = Temp_int_Array_Index_Variable_37;
	Parms.Temp_int_Array_Index_Variable_38 = Temp_int_Array_Index_Variable_38;
	Parms.CallFunc_Array_Get_Item_37 = CallFunc_Array_Get_Item_37;
	Parms.CallFunc_Array_Get_Item_38 = CallFunc_Array_Get_Item_38;
	Parms.Temp_int_Loop_Counter_Variable_39 = Temp_int_Loop_Counter_Variable_39;
	Parms.CallFunc_Less_IntInt_ReturnValue_39 = CallFunc_Less_IntInt_ReturnValue_39;
	Parms.CallFunc_Add_IntInt_ReturnValue_39 = CallFunc_Add_IntInt_ReturnValue_39;
	Parms.Temp_int_Array_Index_Variable_39 = Temp_int_Array_Index_Variable_39;
	Parms.Temp_int_Loop_Counter_Variable_40 = Temp_int_Loop_Counter_Variable_40;
	Parms.CallFunc_Array_Get_Item_39 = CallFunc_Array_Get_Item_39;
	Parms.CallFunc_Less_IntInt_ReturnValue_40 = CallFunc_Less_IntInt_ReturnValue_40;
	Parms.CallFunc_Add_IntInt_ReturnValue_40 = CallFunc_Add_IntInt_ReturnValue_40;
	Parms.Temp_int_Loop_Counter_Variable_41 = Temp_int_Loop_Counter_Variable_41;
	Parms.Temp_int_Loop_Counter_Variable_42 = Temp_int_Loop_Counter_Variable_42;
	Parms.CallFunc_Less_IntInt_ReturnValue_41 = CallFunc_Less_IntInt_ReturnValue_41;
	Parms.CallFunc_Add_IntInt_ReturnValue_41 = CallFunc_Add_IntInt_ReturnValue_41;
	Parms.CallFunc_Less_IntInt_ReturnValue_42 = CallFunc_Less_IntInt_ReturnValue_42;
	Parms.CallFunc_Add_IntInt_ReturnValue_42 = CallFunc_Add_IntInt_ReturnValue_42;
	Parms.Temp_int_Array_Index_Variable_40 = Temp_int_Array_Index_Variable_40;
	Parms.Temp_int_Array_Index_Variable_41 = Temp_int_Array_Index_Variable_41;
	Parms.CallFunc_Array_Get_Item_40 = CallFunc_Array_Get_Item_40;
	Parms.CallFunc_Array_Get_Item_41 = CallFunc_Array_Get_Item_41;
	Parms.Temp_int_Loop_Counter_Variable_43 = Temp_int_Loop_Counter_Variable_43;
	Parms.CallFunc_Less_IntInt_ReturnValue_43 = CallFunc_Less_IntInt_ReturnValue_43;
	Parms.CallFunc_Add_IntInt_ReturnValue_43 = CallFunc_Add_IntInt_ReturnValue_43;
	Parms.Temp_int_Array_Index_Variable_42 = Temp_int_Array_Index_Variable_42;
	Parms.CallFunc_Array_Get_Item_42 = CallFunc_Array_Get_Item_42;
	Parms.Temp_int_Loop_Counter_Variable_44 = Temp_int_Loop_Counter_Variable_44;
	Parms.Temp_int_Loop_Counter_Variable_45 = Temp_int_Loop_Counter_Variable_45;
	Parms.CallFunc_Less_IntInt_ReturnValue_44 = CallFunc_Less_IntInt_ReturnValue_44;
	Parms.CallFunc_Add_IntInt_ReturnValue_44 = CallFunc_Add_IntInt_ReturnValue_44;
	Parms.CallFunc_Less_IntInt_ReturnValue_45 = CallFunc_Less_IntInt_ReturnValue_45;
	Parms.CallFunc_Add_IntInt_ReturnValue_45 = CallFunc_Add_IntInt_ReturnValue_45;
	Parms.Temp_int_Array_Index_Variable_43 = Temp_int_Array_Index_Variable_43;
	Parms.Temp_int_Array_Index_Variable_44 = Temp_int_Array_Index_Variable_44;
	Parms.CallFunc_Array_Get_Item_43 = CallFunc_Array_Get_Item_43;
	Parms.CallFunc_Array_Get_Item_44 = CallFunc_Array_Get_Item_44;
	Parms.Temp_int_Array_Index_Variable_45 = Temp_int_Array_Index_Variable_45;
	Parms.Temp_int_Array_Index_Variable_46 = Temp_int_Array_Index_Variable_46;
	Parms.CallFunc_Array_Get_Item_45 = CallFunc_Array_Get_Item_45;
	Parms.CallFunc_Array_Get_Item_46 = CallFunc_Array_Get_Item_46;
	Parms.CallFunc_Array_Get_Item_47 = CallFunc_Array_Get_Item_47;
	Parms.CallFunc_Array_Length_ReturnValue_49 = CallFunc_Array_Length_ReturnValue_49;
	Parms.Temp_int_Loop_Counter_Variable_46 = Temp_int_Loop_Counter_Variable_46;
	Parms.CallFunc_Less_IntInt_ReturnValue_46 = CallFunc_Less_IntInt_ReturnValue_46;
	Parms.CallFunc_Add_IntInt_ReturnValue_46 = CallFunc_Add_IntInt_ReturnValue_46;
	Parms.Temp_int_Array_Index_Variable_47 = Temp_int_Array_Index_Variable_47;
	Parms.CallFunc_Array_Get_Item_48 = CallFunc_Array_Get_Item_48;
	Parms.Temp_int_Loop_Counter_Variable_47 = Temp_int_Loop_Counter_Variable_47;
	Parms.Temp_int_Loop_Counter_Variable_48 = Temp_int_Loop_Counter_Variable_48;
	Parms.CallFunc_Less_IntInt_ReturnValue_47 = CallFunc_Less_IntInt_ReturnValue_47;
	Parms.CallFunc_Add_IntInt_ReturnValue_47 = CallFunc_Add_IntInt_ReturnValue_47;
	Parms.CallFunc_Less_IntInt_ReturnValue_48 = CallFunc_Less_IntInt_ReturnValue_48;
	Parms.CallFunc_Add_IntInt_ReturnValue_48 = CallFunc_Add_IntInt_ReturnValue_48;
	Parms.Temp_int_Array_Index_Variable_48 = Temp_int_Array_Index_Variable_48;
	Parms.CallFunc_Array_Get_Item_49 = CallFunc_Array_Get_Item_49;
	Parms.Temp_int_Loop_Counter_Variable_49 = Temp_int_Loop_Counter_Variable_49;
	Parms.Temp_int_Array_Index_Variable_49 = Temp_int_Array_Index_Variable_49;
	Parms.CallFunc_Array_Get_Item_50 = CallFunc_Array_Get_Item_50;
	Parms.CallFunc_Less_IntInt_ReturnValue_49 = CallFunc_Less_IntInt_ReturnValue_49;
	Parms.CallFunc_Add_IntInt_ReturnValue_49 = CallFunc_Add_IntInt_ReturnValue_49;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.GetUDW
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Weather_C*    UDW                                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Weather_C*    CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::GetUDW(class UObject* __WorldContext, class AUltra_Dynamic_Weather_C** UDW, class AUltra_Dynamic_Weather_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "GetUDW");

	Params::UGameFunctionLibrary_C_GetUDW_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UDW != nullptr)
		*UDW = Parms.UDW;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.GetLevellingComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevellingComponent_C*       LevellingComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::GetLevellingComponent(class UObject* __WorldContext, class ULevellingComponent_C** LevellingComponent, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "GetLevellingComponent");

	Params::UGameFunctionLibrary_C_GetLevellingComponent_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (LevellingComponent != nullptr)
		*LevellingComponent = Parms.LevellingComponent;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.CastToController
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    Controller                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    K2Node_DynamicCast_AsBP_MPPlayer_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::CastToController(class UObject* __WorldContext, class ABP_MPPlayerController_C** Controller, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_MPPlayerController_C* K2Node_DynamicCast_AsBP_MPPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "CastToController");

	Params::UGameFunctionLibrary_C_CastToController_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_MPPlayer_Controller = K2Node_DynamicCast_AsBP_MPPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Controller != nullptr)
		*Controller = Parms.Controller;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.CastToCharacter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       Character                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::CastToCharacter(class UObject* __WorldContext, class ABP_PlayerCharacter_C** Character, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "CastToCharacter");

	Params::UGameFunctionLibrary_C_CastToCharacter_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function GameFunctionLibrary.GameFunctionLibrary_C.GetUDS
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        UDS                                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFunctionLibrary_C::GetUDS(class UObject* __WorldContext, class AUltra_Dynamic_Sky_C** UDS, class AUltra_Dynamic_Sky_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFunctionLibrary_C", "GetUDS");

	Params::UGameFunctionLibrary_C_GetUDS_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UDS != nullptr)
		*UDS = Parms.UDS;

}

}


