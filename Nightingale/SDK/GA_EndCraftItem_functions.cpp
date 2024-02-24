#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_EndCraftItem.GA_EndCraftItem_C
// (None)

class UClass* UGA_EndCraftItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_EndCraftItem_C");

	return Clss;
}


// GA_EndCraftItem_C GA_EndCraftItem.Default__GA_EndCraftItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_EndCraftItem_C* UGA_EndCraftItem_C::GetDefaultObj()
{
	static class UGA_EndCraftItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_EndCraftItem_C*>(UGA_EndCraftItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_EndCraftItem.GA_EndCraftItem_C.HandleDebugGrant
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_EndCraftItem_C::HandleDebugGrant(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsStateActive_ReturnValue, bool CallFunc_CanUseSupportCommands_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "HandleDebugGrant");

	Params::UGA_EndCraftItem_C_HandleDebugGrant_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsStateActive_ReturnValue = CallFunc_IsStateActive_ReturnValue;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue = CallFunc_CanUseSupportCommands_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.Client_PredictCraftCompletedData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Crafting_CraftInProgress CraftData                                                        (Parm, OutParm, HasGetValueTypeHash)
// struct FDynamicTypedStructs        K2Node_MakeStruct_DynamicTypedStructs                            (None)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress K2Node_MakeStruct_S_Crafting_CraftInProgress                     (HasGetValueTypeHash)

void UGA_EndCraftItem_C::Client_PredictCraftCompletedData(struct FS_Crafting_CraftInProgress* CraftData, const struct FDynamicTypedStructs& K2Node_MakeStruct_DynamicTypedStructs, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FS_Crafting_CraftInProgress& K2Node_MakeStruct_S_Crafting_CraftInProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "Client_PredictCraftCompletedData");

	Params::UGA_EndCraftItem_C_Client_PredictCraftCompletedData_Params Parms{};

	Parms.K2Node_MakeStruct_DynamicTypedStructs = K2Node_MakeStruct_DynamicTypedStructs;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.K2Node_MakeStruct_S_Crafting_CraftInProgress = K2Node_MakeStruct_S_Crafting_CraftInProgress;

	UObject::ProcessEvent(Func, &Parms);

	if (CraftData != nullptr)
		*CraftData = std::move(Parms.CraftData);

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.InventoryEntriesToInstanceIDs
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     InventoryEntries                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FGuid>               ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<struct FGuid>               InstanceIds                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<struct FGuid> UGA_EndCraftItem_C::InventoryEntriesToInstanceIDs(TArray<struct FInventoryEntry>& InventoryEntries, const TArray<struct FGuid>& InstanceIds, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "InventoryEntriesToInstanceIDs");

	Params::UGA_EndCraftItem_C_InventoryEntriesToInstanceIDs_Params Parms{};

	Parms.InventoryEntries = InventoryEntries;
	Parms.InstanceIds = InstanceIds;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.GetCraftedItemsFromProcessedData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UItemProcessingDataAsset*>ProcessedData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FGuid>               GrantedInstances                                                 (Parm, OutParm)
// TArray<struct FInventoryEntry>     GrantedEntries                                                   (Parm, OutParm)
// struct FGuid                       CurrentInstanceID                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>Backpack                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FGuid>               CurrentInstances                                                 (Edit, BlueprintVisible)
// TArray<struct FInventoryEntry>     CurrentGrantedItems                                              (Edit, BlueprintVisible)
// class UItemProcessingDataAsset*    CurrentProcessedDatum                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CraftedInstances                                                 (Edit, BlueprintVisible)
// TArray<struct FInventoryEntry>     CraftedItems                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItem_Entry                                           (None)
// bool                               CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>K2Node_DynamicCast_AsItem_Container_Provider                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetDefaultContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCraft_Result_Instances_DataAsset*K2Node_DynamicCast_AsCraft_Result_Instances_Data_Asset           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCrafting_Result_Items_DataAsset*K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemProcessingDataAsset*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EndCraftItem_C::GetCraftedItemsFromProcessedData(TArray<class UItemProcessingDataAsset*>& ProcessedData, TArray<struct FGuid>* GrantedInstances, TArray<struct FInventoryEntry>* GrantedEntries, const struct FGuid& CurrentInstanceID, TScriptInterface<class IItemContainer> Backpack, const TArray<struct FGuid>& CurrentInstances, const TArray<struct FInventoryEntry>& CurrentGrantedItems, class UItemProcessingDataAsset* CurrentProcessedDatum, const TArray<struct FGuid>& CraftedInstances, const TArray<struct FInventoryEntry>& CraftedItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGuid& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UCraft_Result_Instances_DataAsset* K2Node_DynamicCast_AsCraft_Result_Instances_Data_Asset, bool K2Node_DynamicCast_bSuccess_1, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, class UCrafting_Result_Items_DataAsset* K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset, bool K2Node_DynamicCast_bSuccess_2, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UItemProcessingDataAsset* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "GetCraftedItemsFromProcessedData");

	Params::UGA_EndCraftItem_C_GetCraftedItemsFromProcessedData_Params Parms{};

	Parms.ProcessedData = ProcessedData;
	Parms.CurrentInstanceID = CurrentInstanceID;
	Parms.Backpack = Backpack;
	Parms.CurrentInstances = CurrentInstances;
	Parms.CurrentGrantedItems = CurrentGrantedItems;
	Parms.CurrentProcessedDatum = CurrentProcessedDatum;
	Parms.CraftedInstances = CraftedInstances;
	Parms.CraftedItems = CraftedItems;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetItem_Entry = CallFunc_GetItem_Entry;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Container_Provider = K2Node_DynamicCast_AsItem_Container_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDefaultContainer_ReturnValue = CallFunc_GetDefaultContainer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsCraft_Result_Instances_Data_Asset = K2Node_DynamicCast_AsCraft_Result_Instances_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset = K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (GrantedInstances != nullptr)
		*GrantedInstances = std::move(Parms.GrantedInstances);

	if (GrantedEntries != nullptr)
		*GrantedEntries = std::move(Parms.GrantedEntries);

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.ApplyCraftingSuccessEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CrafterPresentAtStation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EndCraftItem_C::ApplyCraftingSuccessEffect(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_CrafterPresentAtStation_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool K2Node_MathExpression_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "ApplyCraftingSuccessEffect");

	Params::UGA_EndCraftItem_C_ApplyCraftingSuccessEffect_Params Parms{};

	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_CrafterPresentAtStation_ReturnValue = CallFunc_CrafterPresentAtStation_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.CrafterPresentAtStation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectQuery        K2Node_MakeStruct_GameplayEffectQuery                            (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_GetActiveEffects_ReturnValue                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_EndCraftItem_C::CrafterPresentAtStation(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectQuery& K2Node_MakeStruct_GameplayEffectQuery, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "CrafterPresentAtStation");

	Params::UGA_EndCraftItem_C_CrafterPresentAtStation_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEffectQuery = K2Node_MakeStruct_GameplayEffectQuery;
	Parms.CallFunc_GetActiveEffects_ReturnValue = CallFunc_GetActiveEffects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.EndCraftAbilityIsValid
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_EndCraftItem_C::EndCraftAbilityIsValid(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "EndCraftAbilityIsValid");

	Params::UGA_EndCraftItem_C_EndCraftAbilityIsValid_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.DoNextQuantity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         RestartStep                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CurrentCraft                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue (None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftForID_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCraftForID_CraftInProgressData                       (HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentStepIndexForCraft_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_EndCraftItem_C::DoNextQuantity(const struct FDataTableRowHandle& RestartStep, const struct FS_Crafting_CraftInProgress& CurrentCraft, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_SetCurrentStepIndexForCraft_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "DoNextQuantity");

	Params::UGA_EndCraftItem_C_DoNextQuantity_Params Parms{};

	Parms.RestartStep = RestartStep;
	Parms.CurrentCraft = CurrentCraft;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_1 = CallFunc_MakeLiteralBool_ReturnValue_1;
	Parms.CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue = CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;
	Parms.CallFunc_GetCraftForID_Success = CallFunc_GetCraftForID_Success;
	Parms.CallFunc_GetCraftForID_CraftInProgressData = CallFunc_GetCraftForID_CraftInProgressData;
	Parms.CallFunc_SetCurrentStepIndexForCraft_Success = CallFunc_SetCurrentStepIndexForCraft_Success;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.HandleQuantityIteration
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllQuantitiesFinished                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    RecipeHandle                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              NewQuantity                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentQuantity                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CurrentCraft                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CrafterPresentAtStation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCraftStatusByID_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CrafterPresentAtStation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCraftStatusByID_Success_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCraftStatusByID_Success_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentQuantityByID_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftForID_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCraftForID_CraftInProgressData                       (HasGetValueTypeHash)

void UGA_EndCraftItem_C::HandleQuantityIteration(bool* AllQuantitiesFinished, const struct FCraftingRecipeReference& RecipeHandle, int32 NewQuantity, int32 CurrentQuantity, const struct FS_Crafting_CraftInProgress& CurrentCraft, bool CallFunc_K2_HasAuthority_ReturnValue, int32 K2Node_MathExpression_ReturnValue, bool CallFunc_CrafterPresentAtStation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SetCraftStatusByID_Success, bool CallFunc_CrafterPresentAtStation_ReturnValue_1, bool CallFunc_SetCraftStatusByID_Success_1, bool CallFunc_SetCraftStatusByID_Success_2, bool CallFunc_SetCurrentQuantityByID_Success, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "HandleQuantityIteration");

	Params::UGA_EndCraftItem_C_HandleQuantityIteration_Params Parms{};

	Parms.RecipeHandle = RecipeHandle;
	Parms.NewQuantity = NewQuantity;
	Parms.CurrentQuantity = CurrentQuantity;
	Parms.CurrentCraft = CurrentCraft;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_CrafterPresentAtStation_ReturnValue = CallFunc_CrafterPresentAtStation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SetCraftStatusByID_Success = CallFunc_SetCraftStatusByID_Success;
	Parms.CallFunc_CrafterPresentAtStation_ReturnValue_1 = CallFunc_CrafterPresentAtStation_ReturnValue_1;
	Parms.CallFunc_SetCraftStatusByID_Success_1 = CallFunc_SetCraftStatusByID_Success_1;
	Parms.CallFunc_SetCraftStatusByID_Success_2 = CallFunc_SetCraftStatusByID_Success_2;
	Parms.CallFunc_SetCurrentQuantityByID_Success = CallFunc_SetCurrentQuantityByID_Success;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCraftForID_Success = CallFunc_GetCraftForID_Success;
	Parms.CallFunc_GetCraftForID_CraftInProgressData = CallFunc_GetCraftForID_CraftInProgressData;

	UObject::ProcessEvent(Func, &Parms);

	if (AllQuantitiesFinished != nullptr)
		*AllQuantitiesFinished = Parms.AllQuantitiesFinished;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.HoldGrantForInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetCraftStatusByID_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EndCraftItem_C::HoldGrantForInteraction(bool CallFunc_SetCraftStatusByID_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "HoldGrantForInteraction");

	Params::UGA_EndCraftItem_C_HoldGrantForInteraction_Params Parms{};

	Parms.CallFunc_SetCraftStatusByID_Success = CallFunc_SetCraftStatusByID_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.ProcessGrantRequest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bContinue                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CraftingCharacter                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CrafterPresentAtStation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EndCraftItem_C::ProcessGrantRequest(bool* bContinue, class APawn* CraftingCharacter, bool K2Node_MathExpression_ReturnValue, bool CallFunc_CrafterPresentAtStation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "ProcessGrantRequest");

	Params::UGA_EndCraftItem_C_ProcessGrantRequest_Params Parms{};

	Parms.CraftingCharacter = CraftingCharacter;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_CrafterPresentAtStation_ReturnValue = CallFunc_CrafterPresentAtStation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bContinue != nullptr)
		*bContinue = Parms.bContinue;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.RequestRemoveCraftInProgressData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveCraftInProgressData_bSuccess                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EndCraftItem_C::RequestRemoveCraftInProgressData(bool CallFunc_RemoveCraftInProgressData_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "RequestRemoveCraftInProgressData");

	Params::UGA_EndCraftItem_C_RequestRemoveCraftInProgressData_Params Parms{};

	Parms.CallFunc_RemoveCraftInProgressData_bSuccess = CallFunc_RemoveCraftInProgressData_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.SetCraftingOutputs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftingOutputs_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCraftingResultObject*>CallFunc_GetCraftingOutputs_Results                              (ReferenceParm)

bool UGA_EndCraftItem_C::SetCraftingOutputs(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetCraftingOutputs_Success, TArray<class UCraftingResultObject*>& CallFunc_GetCraftingOutputs_Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "SetCraftingOutputs");

	Params::UGA_EndCraftItem_C_SetCraftingOutputs_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCraftingOutputs_Success = CallFunc_GetCraftingOutputs_Success;
	Parms.CallFunc_GetCraftingOutputs_Results = CallFunc_GetCraftingOutputs_Results;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.DetermineCraftQuality
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentQuality                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EndCraftItem_C::DetermineCraftQuality(enum class EItemQuality* Quality, double CurrentQuality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "DetermineCraftQuality");

	Params::UGA_EndCraftItem_C_DetermineCraftQuality_Params Parms{};

	Parms.CurrentQuality = CurrentQuality;

	UObject::ProcessEvent(Func, &Parms);

	if (Quality != nullptr)
		*Quality = Parms.Quality;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.DEBUG_GenerateCraftOutputText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_ItemWithQuantity> Output                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        OutputText                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemWithQuantity         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UGA_EndCraftItem_C::DEBUG_GenerateCraftOutputText(TArray<struct FS_ItemWithQuantity>& Output, class FText OutputText, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Array_Length_ReturnValue, const struct FS_ItemWithQuantity& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "DEBUG_GenerateCraftOutputText");

	Params::UGA_EndCraftItem_C_DEBUG_GenerateCraftOutputText_Params Parms{};

	Parms.Output = Output;
	Parms.OutputText = OutputText;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.GrantCraftingOutput
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ResultIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentQuantity                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      NewProcessingContext                                             (Edit, BlueprintVisible)
// TArray<class UItemProcessingDataAsset*>ItemProcessingAssets                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// class UObject*                     CurrentRequest                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CurrentResultItem                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCraftingResultObject*       CurrentOutput                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCraftingResultObject*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryCreateCraftingContext_Branches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      CallFunc_TryCreateCraftingContext_ReturnValue                    (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemProcessingObjectInterface>K2Node_DynamicCast_AsItem_Processing_Object_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecuteAction_bSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>CallFunc_ExecuteAction_ReturnValue                               (ReferenceParm, ContainsInstancedReference)
// TArray<struct FGuid>               CallFunc_GetCraftedItemsFromProcessedData_GrantedInstances       (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_GetCraftedItemsFromProcessedData_GrantedEntries         (ReferenceParm)

bool UGA_EndCraftItem_C::GrantCraftingOutput(int32 ResultIndex, int32 CurrentQuantity, const struct FItemProcessingContext& NewProcessingContext, const TArray<class UItemProcessingDataAsset*>& ItemProcessingAssets, class UObject* CurrentRequest, class UObject* CurrentResultItem, class UCraftingResultObject* CurrentOutput, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCraftingResultObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EGetResult CallFunc_TryCreateCraftingContext_Branches, const struct FItemProcessingContext& CallFunc_TryCreateCraftingContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IItemProcessingObjectInterface> K2Node_DynamicCast_AsItem_Processing_Object_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ExecuteAction_bSuccess, TArray<class UItemProcessingDataAsset*>& CallFunc_ExecuteAction_ReturnValue, TArray<struct FGuid>& CallFunc_GetCraftedItemsFromProcessedData_GrantedInstances, TArray<struct FInventoryEntry>& CallFunc_GetCraftedItemsFromProcessedData_GrantedEntries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "GrantCraftingOutput");

	Params::UGA_EndCraftItem_C_GrantCraftingOutput_Params Parms{};

	Parms.ResultIndex = ResultIndex;
	Parms.CurrentQuantity = CurrentQuantity;
	Parms.NewProcessingContext = NewProcessingContext;
	Parms.ItemProcessingAssets = ItemProcessingAssets;
	Parms.CurrentRequest = CurrentRequest;
	Parms.CurrentResultItem = CurrentResultItem;
	Parms.CurrentOutput = CurrentOutput;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TryCreateCraftingContext_Branches = CallFunc_TryCreateCraftingContext_Branches;
	Parms.CallFunc_TryCreateCraftingContext_ReturnValue = CallFunc_TryCreateCraftingContext_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsItem_Processing_Object_Interface = K2Node_DynamicCast_AsItem_Processing_Object_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ExecuteAction_bSuccess = CallFunc_ExecuteAction_bSuccess;
	Parms.CallFunc_ExecuteAction_ReturnValue = CallFunc_ExecuteAction_ReturnValue;
	Parms.CallFunc_GetCraftedItemsFromProcessedData_GrantedInstances = CallFunc_GetCraftedItemsFromProcessedData_GrantedInstances;
	Parms.CallFunc_GetCraftedItemsFromProcessedData_GrantedEntries = CallFunc_GetCraftedItemsFromProcessedData_GrantedEntries;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.InitializeEventFromData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                LookedUpPlayerState                                              (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              StartingCurrentCraftQuantity                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartingCraftQuantityClaimed                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_MathExpression_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftForID_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCraftForID_CraftInProgressData                       (HasGetValueTypeHash)
// bool                               CallFunc_HandleDebugGrant_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CrafterPresentAtStation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_MathExpression_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerStateSystems_C>K2Node_DynamicCast_AsBPI_Player_State_Systems                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetBPPlayerController_Player_Controller                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerStateFromId_PlayerState                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_MathExpression_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftingStepsForRecipe_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetCraftingStepsForRecipe_RecipeSteps                   (ReferenceParm)
// class UBP_CraftingComponent_C*     CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCraftingOutputs_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolFromAbilityPayload_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AbilityPayloadHasBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolFromAbilityPayload_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCraftingRecipeInstancedFromTargetData_CrafterUniqueID(ZeroConstructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeInstancedFromTargetData_RecipeReference(HasGetValueTypeHash)
// int32                              CallFunc_GetCraftingRecipeInstancedFromTargetData_Quantity       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetCraftingRecipeInstancedFromTargetData_InputParts     (ReferenceParm)
// bool                               CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsSelected (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsChanged  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*K2Node_DynamicCast_AsBP_Crafting_Station_Component               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EndCraftItem_C::InitializeEventFromData(struct FGameplayEventData& EventData, bool* Success, class APlayerState* LookedUpPlayerState, int32 StartingCurrentCraftQuantity, int32 StartingCraftQuantityClaimed, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_MathExpression_ReturnValue, int32 K2Node_MathExpression_ReturnValue_1, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_HandleDebugGrant_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_CrafterPresentAtStation_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_MathExpression_ReturnValue_2, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 K2Node_MathExpression_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_PlayerStateSystems_C> K2Node_DynamicCast_AsBPI_Player_State_Systems, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerController_C* CallFunc_GetBPPlayerController_Player_Controller, class APlayerState* CallFunc_GetPlayerStateFromId_PlayerState, int32 K2Node_MathExpression_ReturnValue_4, int32 CallFunc_Clamp_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_GetCraftingStepsForRecipe_Success, TArray<struct FDataTableRowHandle>& CallFunc_GetCraftingStepsForRecipe_RecipeSteps, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_SetCraftingOutputs_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetBoolFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasBool_ReturnValue, bool CallFunc_GetBoolFromAbilityPayload_ReturnValue_1, const class FString& CallFunc_GetCraftingRecipeInstancedFromTargetData_CrafterUniqueID, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeInstancedFromTargetData_RecipeReference, int32 CallFunc_GetCraftingRecipeInstancedFromTargetData_Quantity, TArray<struct FInventoryEntry>& CallFunc_GetCraftingRecipeInstancedFromTargetData_InputParts, bool CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsSelected, bool CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsChanged, class UBP_CraftingStationComponent_C* K2Node_DynamicCast_AsBP_Crafting_Station_Component, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "InitializeEventFromData");

	Params::UGA_EndCraftItem_C_InitializeEventFromData_Params Parms{};

	Parms.EventData = EventData;
	Parms.LookedUpPlayerState = LookedUpPlayerState;
	Parms.StartingCurrentCraftQuantity = StartingCurrentCraftQuantity;
	Parms.StartingCraftQuantityClaimed = StartingCraftQuantityClaimed;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue_1 = K2Node_MathExpression_ReturnValue_1;
	Parms.CallFunc_GetCraftForID_Success = CallFunc_GetCraftForID_Success;
	Parms.CallFunc_GetCraftForID_CraftInProgressData = CallFunc_GetCraftForID_CraftInProgressData;
	Parms.CallFunc_HandleDebugGrant_ReturnValue = CallFunc_HandleDebugGrant_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_CrafterPresentAtStation_ReturnValue = CallFunc_CrafterPresentAtStation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_MathExpression_ReturnValue_2 = K2Node_MathExpression_ReturnValue_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue_3 = K2Node_MathExpression_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_State_Systems = K2Node_DynamicCast_AsBPI_Player_State_Systems;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBPPlayerController_Player_Controller = CallFunc_GetBPPlayerController_Player_Controller;
	Parms.CallFunc_GetPlayerStateFromId_PlayerState = CallFunc_GetPlayerStateFromId_PlayerState;
	Parms.K2Node_MathExpression_ReturnValue_4 = K2Node_MathExpression_ReturnValue_4;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetCraftingStepsForRecipe_Success = CallFunc_GetCraftingStepsForRecipe_Success;
	Parms.CallFunc_GetCraftingStepsForRecipe_RecipeSteps = CallFunc_GetCraftingStepsForRecipe_RecipeSteps;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_SetCraftingOutputs_ReturnValue = CallFunc_SetCraftingOutputs_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBoolFromAbilityPayload_ReturnValue = CallFunc_GetBoolFromAbilityPayload_ReturnValue;
	Parms.CallFunc_AbilityPayloadHasBool_ReturnValue = CallFunc_AbilityPayloadHasBool_ReturnValue;
	Parms.CallFunc_GetBoolFromAbilityPayload_ReturnValue_1 = CallFunc_GetBoolFromAbilityPayload_ReturnValue_1;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_CrafterUniqueID = CallFunc_GetCraftingRecipeInstancedFromTargetData_CrafterUniqueID;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_RecipeReference = CallFunc_GetCraftingRecipeInstancedFromTargetData_RecipeReference;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_Quantity = CallFunc_GetCraftingRecipeInstancedFromTargetData_Quantity;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_InputParts = CallFunc_GetCraftingRecipeInstancedFromTargetData_InputParts;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsSelected = CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsSelected;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsChanged = CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsChanged;
	Parms.K2Node_DynamicCast_AsBP_Crafting_Station_Component = K2Node_DynamicCast_AsBP_Crafting_Station_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_EndCraftItem_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_EndCraftItem_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.ExecuteEndCraftItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_EndCraftItem_C::ExecuteEndCraftItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "ExecuteEndCraftItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EndCraftItem_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "K2_OnEndAbility");

	Params::UGA_EndCraftItem_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.Execute_IterateCraftingQueue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_EndCraftItem_C::Execute_IterateCraftingQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "Execute_IterateCraftingQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.ExecuteUbergraph_GA_EndCraftItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_InitializeEventFromData_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EndCraftAbilityIsValid_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EndCraftAbilityIsValid_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CrafterPresentAtStation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleQuantityIteration_AllQuantitiesFinished           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoNextQuantity_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CrafterPresentAtStation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProcessGrantRequest_bContinue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindCraftForID_BP_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindCraftForID_BP_CraftInProgressIndex                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GrantCraftingOutput_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EndCraftItem_C::ExecuteUbergraph_GA_EndCraftItem(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_InitializeEventFromData_Success, const class FString& CallFunc_MakeLiteralString_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_EndCraftAbilityIsValid_ReturnValue, bool CallFunc_EndCraftAbilityIsValid_ReturnValue_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_CrafterPresentAtStation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HandleQuantityIteration_AllQuantitiesFinished, bool CallFunc_DoNextQuantity_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_CrafterPresentAtStation_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool K2Node_MathExpression_ReturnValue, bool CallFunc_ProcessGrantRequest_bContinue, bool K2Node_MathExpression_ReturnValue_1, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue_1, bool CallFunc_K2_HasAuthority_ReturnValue_2, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, bool CallFunc_K2_HasAuthority_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_GrantCraftingOutput_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "ExecuteUbergraph_GA_EndCraftItem");

	Params::UGA_EndCraftItem_C_ExecuteUbergraph_GA_EndCraftItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_InitializeEventFromData_Success = CallFunc_InitializeEventFromData_Success;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_EndCraftAbilityIsValid_ReturnValue = CallFunc_EndCraftAbilityIsValid_ReturnValue;
	Parms.CallFunc_EndCraftAbilityIsValid_ReturnValue_1 = CallFunc_EndCraftAbilityIsValid_ReturnValue_1;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_CrafterPresentAtStation_ReturnValue = CallFunc_CrafterPresentAtStation_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HandleQuantityIteration_AllQuantitiesFinished = CallFunc_HandleQuantityIteration_AllQuantitiesFinished;
	Parms.CallFunc_DoNextQuantity_ReturnValue = CallFunc_DoNextQuantity_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_CrafterPresentAtStation_ReturnValue_1 = CallFunc_CrafterPresentAtStation_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_ProcessGrantRequest_bContinue = CallFunc_ProcessGrantRequest_bContinue;
	Parms.K2Node_MathExpression_ReturnValue_1 = K2Node_MathExpression_ReturnValue_1;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_HasAuthority_ReturnValue_1 = CallFunc_K2_HasAuthority_ReturnValue_1;
	Parms.CallFunc_K2_HasAuthority_ReturnValue_2 = CallFunc_K2_HasAuthority_ReturnValue_2;
	Parms.CallFunc_FindCraftForID_BP_Success = CallFunc_FindCraftForID_BP_Success;
	Parms.CallFunc_FindCraftForID_BP_CraftInProgressIndex = CallFunc_FindCraftForID_BP_CraftInProgressIndex;
	Parms.CallFunc_K2_HasAuthority_ReturnValue_3 = CallFunc_K2_HasAuthority_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GrantCraftingOutput_ReturnValue = CallFunc_GrantCraftingOutput_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.UI_HandleCraftingResult__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Crafting_Success                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Crafting_Recipe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InventoryEntryArray      Updated_Item_Counts                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_InventoryEntryArray      Predicted_Results                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Failure_Reason                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Force_Close_Menu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EndCraftItem_C::UI_HandleCraftingResult__DelegateSignature(bool Crafting_Success, class FName Crafting_Recipe, int32 Quantity, enum class EItemQuality Quality, const struct FS_InventoryEntryArray& Updated_Item_Counts, const struct FS_InventoryEntryArray& Predicted_Results, bool Failure_Reason, bool Force_Close_Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "UI_HandleCraftingResult__DelegateSignature");

	Params::UGA_EndCraftItem_C_UI_HandleCraftingResult__DelegateSignature_Params Parms{};

	Parms.Crafting_Success = Crafting_Success;
	Parms.Crafting_Recipe = Crafting_Recipe;
	Parms.Quantity = Quantity;
	Parms.Quality = Quality;
	Parms.Updated_Item_Counts = Updated_Item_Counts;
	Parms.Predicted_Results = Predicted_Results;
	Parms.Failure_Reason = Failure_Reason;
	Parms.Force_Close_Menu = Force_Close_Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_EndCraftItem.GA_EndCraftItem_C.LoadOutputCalculation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeResult       Output                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_EndCraftItem_C::LoadOutputCalculation__DelegateSignature(const struct FCraftingRecipeResult& Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EndCraftItem_C", "LoadOutputCalculation__DelegateSignature");

	Params::UGA_EndCraftItem_C_LoadOutputCalculation__DelegateSignature_Params Parms{};

	Parms.Output = Output;

	UObject::ProcessEvent(Func, &Parms);

}

}


