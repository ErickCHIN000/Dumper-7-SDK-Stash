#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_StartCraftItem.GA_StartCraftItem_C
// (None)

class UClass* UGA_StartCraftItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_StartCraftItem_C");

	return Clss;
}


// GA_StartCraftItem_C GA_StartCraftItem.Default__GA_StartCraftItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_StartCraftItem_C* UGA_StartCraftItem_C::GetDefaultObj()
{
	static class UGA_StartCraftItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_StartCraftItem_C*>(UGA_StartCraftItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_StartCraftItem.GA_StartCraftItem_C.SendEssenceTelemetry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     ExpendedEntries                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ANWXPlayerState*             PlayerState                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEssenceCountsFromEntries_T0Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEssenceCountsFromEntries_T1Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEssenceCountsFromEntries_T2Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEssenceCountsFromEntries_T3Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEssenceCountsFromEntries_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_StartCraftItem_C::SendEssenceTelemetry(TArray<struct FInventoryEntry>& ExpendedEntries, class ANWXPlayerState* PlayerState, int32 CallFunc_GetEssenceCountsFromEntries_T0Count, int32 CallFunc_GetEssenceCountsFromEntries_T1Count, int32 CallFunc_GetEssenceCountsFromEntries_T2Count, int32 CallFunc_GetEssenceCountsFromEntries_T3Count, bool CallFunc_GetEssenceCountsFromEntries_ReturnValue, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "SendEssenceTelemetry");

	Params::UGA_StartCraftItem_C_SendEssenceTelemetry_Params Parms{};

	Parms.ExpendedEntries = ExpendedEntries;
	Parms.PlayerState = PlayerState;
	Parms.CallFunc_GetEssenceCountsFromEntries_T0Count = CallFunc_GetEssenceCountsFromEntries_T0Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_T1Count = CallFunc_GetEssenceCountsFromEntries_T1Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_T2Count = CallFunc_GetEssenceCountsFromEntries_T2Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_T3Count = CallFunc_GetEssenceCountsFromEntries_T3Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_ReturnValue = CallFunc_GetEssenceCountsFromEntries_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.ShouldDebugComplete
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_StartCraftItem_C::ShouldDebugComplete(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsStateActive_ReturnValue, bool CallFunc_CanUseSupportCommands_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "ShouldDebugComplete");

	Params::UGA_StartCraftItem_C_ShouldDebugComplete_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsStateActive_ReturnValue = CallFunc_IsStateActive_ReturnValue;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue = CallFunc_CanUseSupportCommands_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.ValidateQuantityRequested
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              QuantityRequested                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ValidatedQuantity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       MetaTags                                                         (Edit, BlueprintVisible)
// bool                               CallFunc_IsRecipeMultiCraftable_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_StartCraftItem_C::ValidateQuantityRequested(const struct FCraftingRecipeReference& Recipe, int32 QuantityRequested, int32* ValidatedQuantity, const struct FGameplayTagContainer& MetaTags, bool CallFunc_IsRecipeMultiCraftable_Success, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "ValidateQuantityRequested");

	Params::UGA_StartCraftItem_C_ValidateQuantityRequested_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.QuantityRequested = QuantityRequested;
	Parms.MetaTags = MetaTags;
	Parms.CallFunc_IsRecipeMultiCraftable_Success = CallFunc_IsRecipeMultiCraftable_Success;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidatedQuantity != nullptr)
		*ValidatedQuantity = Parms.ValidatedQuantity;

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.GetConsumedMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_StartCraftItem_C::GetConsumedMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "GetConsumedMaterials");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.FireStationActivationEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingStep_ReturnValue           (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_StartCraftItem_C::FireStationActivationEvent(const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "FireStationActivationEvent");

	Params::UGA_StartCraftItem_C_FireStationActivationEvent_Params Parms{};

	Parms.CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue = CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.FireCrafterActivationEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingStep_ReturnValue           (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_StartCraftItem_C::FireCrafterActivationEvent(const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "FireCrafterActivationEvent");

	Params::UGA_StartCraftItem_C_FireCrafterActivationEvent_Params Parms{};

	Parms.CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue = CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.FireStepActivationEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_StartCraftItem_C::FireStepActivationEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "FireStepActivationEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.GetRecipeSteps
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<struct FDataTableRowHandle> UGA_StartCraftItem_C::GetRecipeSteps(const struct FCraftingRecipeReference& RecipeReference, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "GetRecipeSteps");

	Params::UGA_StartCraftItem_C_GetRecipeSteps_Params Parms{};

	Parms.RecipeReference = RecipeReference;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.GetRequiredItemQuantitiesForRecipe
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     UsedMaterials                                                    (Parm, OutParm)
// TArray<int32>                      UsedQuantities                                                   (Parm, OutParm)
// int32                              OccuranceCount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGuid, int32>          OccurancesMap                                                    (Edit, BlueprintVisible)
// TMap<struct FGuid, int32>          CalculatedQuantityMap                                            (Edit, BlueprintVisible)
// TArray<int32>                      Quantities                                                       (Edit, BlueprintVisible)
// TArray<struct FInventoryEntry>     NewInputCounts                                                   (Edit, BlueprintVisible)
// struct FInventoryEntry             CurrentItemEntry                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_MathExpression_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGuid, int32>          CallFunc_GetRequiredInputQuantitiesForRecipe_OutQuantitiesRequired(None)
// TArray<struct FInventoryEntry>     CallFunc_GetRequiredInputQuantitiesForRecipe_OutSlotItems        (ReferenceParm)
// enum class EGetResult              CallFunc_GetRequiredInputQuantitiesForRecipe_Branches            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_StartCraftItem_C::GetRequiredItemQuantitiesForRecipe(TArray<struct FInventoryEntry>* UsedMaterials, TArray<int32>* UsedQuantities, int32 OccuranceCount, TMap<struct FGuid, int32> OccurancesMap, TMap<struct FGuid, int32> CalculatedQuantityMap, const TArray<int32>& Quantities, const TArray<struct FInventoryEntry>& NewInputCounts, const struct FInventoryEntry& CurrentItemEntry, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 K2Node_MathExpression_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 K2Node_MathExpression_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, TMap<struct FGuid, int32> CallFunc_GetRequiredInputQuantitiesForRecipe_OutQuantitiesRequired, TArray<struct FInventoryEntry>& CallFunc_GetRequiredInputQuantitiesForRecipe_OutSlotItems, enum class EGetResult CallFunc_GetRequiredInputQuantitiesForRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "GetRequiredItemQuantitiesForRecipe");

	Params::UGA_StartCraftItem_C_GetRequiredItemQuantitiesForRecipe_Params Parms{};

	Parms.OccuranceCount = OccuranceCount;
	Parms.OccurancesMap = OccurancesMap;
	Parms.CalculatedQuantityMap = CalculatedQuantityMap;
	Parms.Quantities = Quantities;
	Parms.NewInputCounts = NewInputCounts;
	Parms.CurrentItemEntry = CurrentItemEntry;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.K2Node_MathExpression_ReturnValue_1 = K2Node_MathExpression_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetRequiredInputQuantitiesForRecipe_OutQuantitiesRequired = CallFunc_GetRequiredInputQuantitiesForRecipe_OutQuantitiesRequired;
	Parms.CallFunc_GetRequiredInputQuantitiesForRecipe_OutSlotItems = CallFunc_GetRequiredInputQuantitiesForRecipe_OutSlotItems;
	Parms.CallFunc_GetRequiredInputQuantitiesForRecipe_Branches = CallFunc_GetRequiredInputQuantitiesForRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (UsedMaterials != nullptr)
		*UsedMaterials = std::move(Parms.UsedMaterials);

	if (UsedQuantities != nullptr)
		*UsedQuantities = std::move(Parms.UsedQuantities);

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.InitializeEventFromData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCraftingRecipeInstancedFromTargetData_CrafterUniqueID(ZeroConstructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeInstancedFromTargetData_RecipeReference(HasGetValueTypeHash)
// int32                              CallFunc_GetCraftingRecipeInstancedFromTargetData_Quantity       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetCraftingRecipeInstancedFromTargetData_InputParts     (ReferenceParm)
// bool                               CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsSelected (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsChanged  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*K2Node_DynamicCast_AsBP_Crafting_Station_Component               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldDebugComplete_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ValidateQuantityRequested_ValidatedQuantity             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_ValidateCraftingInputEntries_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_ValidateCraftingInputEntries_ReturnValue                (ReferenceParm)
// class UBP_CraftingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_StartCraftItem_C::InitializeEventFromData(struct FGameplayEventData& EventData, bool* Success, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetCraftingRecipeInstancedFromTargetData_CrafterUniqueID, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeInstancedFromTargetData_RecipeReference, int32 CallFunc_GetCraftingRecipeInstancedFromTargetData_Quantity, TArray<struct FInventoryEntry>& CallFunc_GetCraftingRecipeInstancedFromTargetData_InputParts, bool CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsSelected, bool CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsChanged, class UBP_CraftingStationComponent_C* K2Node_DynamicCast_AsBP_Crafting_Station_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldDebugComplete_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_ValidateQuantityRequested_ValidatedQuantity, enum class EGetResult CallFunc_ValidateCraftingInputEntries_Branches, TArray<struct FInventoryEntry>& CallFunc_ValidateCraftingInputEntries_ReturnValue, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "InitializeEventFromData");

	Params::UGA_StartCraftItem_C_InitializeEventFromData_Params Parms{};

	Parms.EventData = EventData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_CrafterUniqueID = CallFunc_GetCraftingRecipeInstancedFromTargetData_CrafterUniqueID;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_RecipeReference = CallFunc_GetCraftingRecipeInstancedFromTargetData_RecipeReference;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_Quantity = CallFunc_GetCraftingRecipeInstancedFromTargetData_Quantity;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_InputParts = CallFunc_GetCraftingRecipeInstancedFromTargetData_InputParts;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsSelected = CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsSelected;
	Parms.CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsChanged = CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsChanged;
	Parms.K2Node_DynamicCast_AsBP_Crafting_Station_Component = K2Node_DynamicCast_AsBP_Crafting_Station_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ShouldDebugComplete_ReturnValue = CallFunc_ShouldDebugComplete_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_ValidateQuantityRequested_ValidatedQuantity = CallFunc_ValidateQuantityRequested_ValidatedQuantity;
	Parms.CallFunc_ValidateCraftingInputEntries_Branches = CallFunc_ValidateCraftingInputEntries_Branches;
	Parms.CallFunc_ValidateCraftingInputEntries_ReturnValue = CallFunc_ValidateCraftingInputEntries_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MakeLiteralString_ReturnValue_1 = CallFunc_MakeLiteralString_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.MakeInputMaterialsArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FItemDataReference>  InputMaterialItemIDs                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      InputMaterialItemQuantities                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FS_ItemWithQuantity> ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<struct FS_ItemWithQuantity> ConstructedArray                                                 (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemWithQuantity         K2Node_MakeStruct_S_ItemWithQuantity                             (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<struct FS_ItemWithQuantity> UGA_StartCraftItem_C::MakeInputMaterialsArray(TArray<struct FItemDataReference>& InputMaterialItemIDs, TArray<int32>& InputMaterialItemQuantities, const TArray<struct FS_ItemWithQuantity>& ConstructedArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FItemDataReference& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item_1, const struct FS_ItemWithQuantity& K2Node_MakeStruct_S_ItemWithQuantity, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "MakeInputMaterialsArray");

	Params::UGA_StartCraftItem_C_MakeInputMaterialsArray_Params Parms{};

	Parms.InputMaterialItemIDs = InputMaterialItemIDs;
	Parms.InputMaterialItemQuantities = InputMaterialItemQuantities;
	Parms.ConstructedArray = ConstructedArray;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_S_ItemWithQuantity = K2Node_MakeStruct_S_ItemWithQuantity;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.CanActivateAbilityFromEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanCraftRecipe_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_StartCraftItem_C::CanActivateAbilityFromEvent(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_MathExpression_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_CanCraftRecipe_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "CanActivateAbilityFromEvent");

	Params::UGA_StartCraftItem_C_CanActivateAbilityFromEvent_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_CanCraftRecipe_ReturnValue = CallFunc_CanCraftRecipe_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_StartCraftItem_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_StartCraftItem_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_StartCraftItem_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "K2_OnEndAbility");

	Params::UGA_StartCraftItem_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_StartCraftItem.GA_StartCraftItem_C.ExecuteUbergraph_GA_StartCraftItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_Definition CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_InitializeEventFromData_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               CallFunc_CanActivateAbilityFromEvent_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromBool_ReturnValue                      (None)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue (None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// TArray<struct FDataTableRowHandle> CallFunc_GetRecipeSteps_ReturnValue                              (ReferenceParm)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryFindRecipeVariant_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_TryFindRecipeVariant_ReturnValue                        (HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_NewGuid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue(None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData_1                            (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemovePartsFromInventory_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetActiveCraftingSessionId_SessionId                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGuid, int32>          CallFunc_GetRequiredInputQuantitiesForRecipe_OutQuantitiesRequired(None)
// TArray<struct FInventoryEntry>     CallFunc_GetRequiredInputQuantitiesForRecipe_OutSlotItems        (ReferenceParm)
// enum class EGetResult              CallFunc_GetRequiredInputQuantitiesForRecipe_Branches            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_StartCraftItem_C::ExecuteUbergraph_GA_StartCraftItem(int32 EntryPoint, const struct FS_Crafting_Step_Definition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_InitializeEventFromData_Success, bool CallFunc_IsValid_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_BreakSoftObjectPath_PathString, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_CanActivateAbilityFromEvent_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, TArray<struct FDataTableRowHandle>& CallFunc_GetRecipeSteps_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, enum class EGetResult CallFunc_TryFindRecipeVariant_Branches, const struct FCraftingRecipeReference& CallFunc_TryFindRecipeVariant_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_MathExpression_ReturnValue, const struct FGuid& CallFunc_NewGuid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_RemovePartsFromInventory_Success, const struct FGuid& CallFunc_GetActiveCraftingSessionId_SessionId, int32 CallFunc_SendGameplayEventToActor_ReturnValue_1, TMap<struct FGuid, int32> CallFunc_GetRequiredInputQuantitiesForRecipe_OutQuantitiesRequired, TArray<struct FInventoryEntry>& CallFunc_GetRequiredInputQuantitiesForRecipe_OutSlotItems, enum class EGetResult CallFunc_GetRequiredInputQuantitiesForRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StartCraftItem_C", "ExecuteUbergraph_GA_StartCraftItem");

	Params::UGA_StartCraftItem_C_ExecuteUbergraph_GA_StartCraftItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_InitializeEventFromData_Success = CallFunc_InitializeEventFromData_Success;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_CanActivateAbilityFromEvent_ReturnValue = CallFunc_CanActivateAbilityFromEvent_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_AbilityPayloadFromBool_ReturnValue = CallFunc_AbilityPayloadFromBool_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_1 = CallFunc_MakeLiteralBool_ReturnValue_1;
	Parms.CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue = CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_GetRecipeSteps_ReturnValue = CallFunc_GetRecipeSteps_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_TryFindRecipeVariant_Branches = CallFunc_TryFindRecipeVariant_Branches;
	Parms.CallFunc_TryFindRecipeVariant_ReturnValue = CallFunc_TryFindRecipeVariant_ReturnValue;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_NewGuid_ReturnValue = CallFunc_NewGuid_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue = CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData_1 = K2Node_MakeStruct_GameplayEventData_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;
	Parms.CallFunc_RemovePartsFromInventory_Success = CallFunc_RemovePartsFromInventory_Success;
	Parms.CallFunc_GetActiveCraftingSessionId_SessionId = CallFunc_GetActiveCraftingSessionId_SessionId;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue_1 = CallFunc_SendGameplayEventToActor_ReturnValue_1;
	Parms.CallFunc_GetRequiredInputQuantitiesForRecipe_OutQuantitiesRequired = CallFunc_GetRequiredInputQuantitiesForRecipe_OutQuantitiesRequired;
	Parms.CallFunc_GetRequiredInputQuantitiesForRecipe_OutSlotItems = CallFunc_GetRequiredInputQuantitiesForRecipe_OutSlotItems;
	Parms.CallFunc_GetRequiredInputQuantitiesForRecipe_Branches = CallFunc_GetRequiredInputQuantitiesForRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


