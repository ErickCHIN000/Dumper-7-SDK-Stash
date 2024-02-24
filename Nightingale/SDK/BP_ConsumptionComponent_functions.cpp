#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConsumptionComponent.BP_ConsumptionComponent_C
// (None)

class UClass* UBP_ConsumptionComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConsumptionComponent_C");

	return Clss;
}


// BP_ConsumptionComponent_C BP_ConsumptionComponent.Default__BP_ConsumptionComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConsumptionComponent_C* UBP_ConsumptionComponent_C::GetDefaultObj()
{
	static class UBP_ConsumptionComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConsumptionComponent_C*>(UBP_ConsumptionComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.GetAssetTagForGameplayEffectHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CombinedTags                                                     (Parm, OutParm)
// class UGameplayEffect*             CallFunc_GetGameplayEffectFromActiveEffectHandle_ReturnValue     (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumptionComponent_C::GetAssetTagForGameplayEffectHandle(struct FActiveGameplayEffectHandle& ActiveHandle, struct FGameplayTagContainer* CombinedTags, class UGameplayEffect* CallFunc_GetGameplayEffectFromActiveEffectHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "GetAssetTagForGameplayEffectHandle");

	Params::UBP_ConsumptionComponent_C_GetAssetTagForGameplayEffectHandle_Params Parms{};

	Parms.ActiveHandle = ActiveHandle;
	Parms.CallFunc_GetGameplayEffectFromActiveEffectHandle_ReturnValue = CallFunc_GetGameplayEffectFromActiveEffectHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CombinedTags != nullptr)
		*CombinedTags = std::move(Parms.CombinedTags);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.InitializeGameplayEffectMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActiveGameplayEffectHandle LCurrentActiveGameplayEffect                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       LCombinedTags                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetAssetTagForGameplayEffectHandle_CombinedTags         (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_GetActiveEffectsWithAllTags_ReturnValue                 (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumptionComponent_C::InitializeGameplayEffectMap(const struct FActiveGameplayEffectHandle& LCurrentActiveGameplayEffect, const struct FGameplayTagContainer& LCombinedTags, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FGameplayTagContainer& CallFunc_GetAssetTagForGameplayEffectHandle_CombinedTags, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_2, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "InitializeGameplayEffectMap");

	Params::UBP_ConsumptionComponent_C_InitializeGameplayEffectMap_Params Parms{};

	Parms.LCurrentActiveGameplayEffect = LCurrentActiveGameplayEffect;
	Parms.LCombinedTags = LCombinedTags;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetAssetTagForGameplayEffectHandle_CombinedTags = CallFunc_GetAssetTagForGameplayEffectHandle_CombinedTags;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetActiveEffectsWithAllTags_ReturnValue = CallFunc_GetActiveEffectsWithAllTags_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.OnRep_FoodSlots
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumptionComponent_C::OnRep_FoodSlots(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "OnRep_FoodSlots");

	Params::UBP_ConsumptionComponent_C_OnRep_FoodSlots_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.OnPlayerDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumptionComponent_C::OnPlayerDied(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "OnPlayerDied");

	Params::UBP_ConsumptionComponent_C_OnPlayerDied_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.GetBestFoodSlotToOverrideIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              FoodSlotIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   LChosenStartTime                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              LChosenIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_DateTimeMaxValue_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFoodSlot                   CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DateTimeDateTime_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumptionComponent_C::GetBestFoodSlotToOverrideIndex(int32* FoodSlotIndex, const struct FDateTime& LChosenStartTime, int32 LChosenIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDateTime& CallFunc_DateTimeMaxValue_ReturnValue, const struct FFoodSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_DateTimeDateTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "GetBestFoodSlotToOverrideIndex");

	Params::UBP_ConsumptionComponent_C_GetBestFoodSlotToOverrideIndex_Params Parms{};

	Parms.LChosenStartTime = LChosenStartTime;
	Parms.LChosenIndex = LChosenIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_DateTimeMaxValue_ReturnValue = CallFunc_DateTimeMaxValue_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_DateTimeDateTime_ReturnValue = CallFunc_Less_DateTimeDateTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoodSlotIndex != nullptr)
		*FoodSlotIndex = Parms.FoodSlotIndex;

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.AddFoodToSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              LSelectedIndex                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UGameplayEffect> LFoodBuffGameplayEffectClass                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UGameplayEffect> Temp_class_Variable                                              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UGameplayEffect> Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UGameplayEffect> Temp_class_Variable_2                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UGameplayEffect> K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            (None)
// int32                              CallFunc_GetBestFoodSlotToOverrideIndex_FoodSlotIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_ApplyAttributeValuesToSpec_OutHandle                    (None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompareSlot_FoundSameType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CompareSlot_SameTypeSlotIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumptionComponent_C::AddFoodToSlot(const struct FInventoryEntry& InventoryEntry, int32 LSelectedIndex, TSubclassOf<class UGameplayEffect> LFoodBuffGameplayEffectClass, int32 Temp_int_Variable, TSubclassOf<class UGameplayEffect> Temp_class_Variable, TSubclassOf<class UGameplayEffect> Temp_class_Variable_1, TSubclassOf<class UGameplayEffect> Temp_class_Variable_2, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, TSubclassOf<class UGameplayEffect> K2Node_Select_Default, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, int32 CallFunc_GetBestFoodSlotToOverrideIndex_FoodSlotIndex, const struct FGameplayEffectSpecHandle& CallFunc_ApplyAttributeValuesToSpec_OutHandle, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_CompareSlot_FoundSameType, int32 CallFunc_CompareSlot_SameTypeSlotIndex, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "AddFoodToSlot");

	Params::UBP_ConsumptionComponent_C_AddFoodToSlot_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.LSelectedIndex = LSelectedIndex;
	Parms.LFoodBuffGameplayEffectClass = LFoodBuffGameplayEffectClass;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_GetBestFoodSlotToOverrideIndex_FoodSlotIndex = CallFunc_GetBestFoodSlotToOverrideIndex_FoodSlotIndex;
	Parms.CallFunc_ApplyAttributeValuesToSpec_OutHandle = CallFunc_ApplyAttributeValuesToSpec_OutHandle;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_CompareSlot_FoundSameType = CallFunc_CompareSlot_FoundSameType;
	Parms.CallFunc_CompareSlot_SameTypeSlotIndex = CallFunc_CompareSlot_SameTypeSlotIndex;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.ProcessFoodSlots
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActiveGameplayEffectHandle CurrentSlotEffect                                                (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentSlotIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFoodSlot                   CurrentSlot                                                      (Edit, BlueprintVisible)
// float                              TimeSinceTimer                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFoodSlot                   CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumptionComponent_C::ProcessFoodSlots(const struct FActiveGameplayEffectHandle& CurrentSlotEffect, int32 CurrentSlotIndex, const struct FFoodSlot& CurrentSlot, float TimeSinceTimer, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFoodSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "ProcessFoodSlots");

	Params::UBP_ConsumptionComponent_C_ProcessFoodSlots_Params Parms{};

	Parms.CurrentSlotEffect = CurrentSlotEffect;
	Parms.CurrentSlotIndex = CurrentSlotIndex;
	Parms.CurrentSlot = CurrentSlot;
	Parms.TimeSinceTimer = TimeSinceTimer;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue = CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.IsSameFoodItem
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry1                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryEntry             InventoryEntry2                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsSameFood                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_TryGetItemCharacteristicTags_CharacteristicTags         (None)
// enum class EGetResult              CallFunc_TryGetItemCharacteristicTags_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_TryGetItemCharacteristicTags_CharacteristicTags_1       (None)
// enum class EGetResult              CallFunc_TryGetItemCharacteristicTags_Branches_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTagContainer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemDataReference_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumptionComponent_C::IsSameFoodItem(const struct FInventoryEntry& InventoryEntry1, const struct FInventoryEntry& InventoryEntry2, bool* IsSameFood, const struct FGameplayTagContainer& CallFunc_TryGetItemCharacteristicTags_CharacteristicTags, enum class EGetResult CallFunc_TryGetItemCharacteristicTags_Branches, const struct FGameplayTagContainer& CallFunc_TryGetItemCharacteristicTags_CharacteristicTags_1, enum class EGetResult CallFunc_TryGetItemCharacteristicTags_Branches_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_GameplayTagContainer_ReturnValue, bool CallFunc_EqualEqual_FItemDataReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "IsSameFoodItem");

	Params::UBP_ConsumptionComponent_C_IsSameFoodItem_Params Parms{};

	Parms.InventoryEntry1 = InventoryEntry1;
	Parms.InventoryEntry2 = InventoryEntry2;
	Parms.CallFunc_TryGetItemCharacteristicTags_CharacteristicTags = CallFunc_TryGetItemCharacteristicTags_CharacteristicTags;
	Parms.CallFunc_TryGetItemCharacteristicTags_Branches = CallFunc_TryGetItemCharacteristicTags_Branches;
	Parms.CallFunc_TryGetItemCharacteristicTags_CharacteristicTags_1 = CallFunc_TryGetItemCharacteristicTags_CharacteristicTags_1;
	Parms.CallFunc_TryGetItemCharacteristicTags_Branches_1 = CallFunc_TryGetItemCharacteristicTags_Branches_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_GameplayTagContainer_ReturnValue = CallFunc_EqualEqual_GameplayTagContainer_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemDataReference_ReturnValue = CallFunc_EqualEqual_FItemDataReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSameFood != nullptr)
		*IsSameFood = Parms.IsSameFood;

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.Get Total Food Effect Duration
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_BaselineAttributeValuesCallFunc_TryGetItemDataBaselineAttributeValues_OutData           (None)
// enum class EGetResult              CallFunc_TryGetItemDataBaselineAttributeValues_Branches          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumptionComponent_C::Get_Total_Food_Effect_Duration(const struct FInventoryEntry& InventoryEntry, float* Duration, const struct FGameplayAttribute& Temp_struct_Variable, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_BaselineAttributeValues& CallFunc_TryGetItemDataBaselineAttributeValues_OutData, enum class EGetResult CallFunc_TryGetItemDataBaselineAttributeValues_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "Get Total Food Effect Duration");

	Params::UBP_ConsumptionComponent_C_Get_Total_Food_Effect_Duration_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataBaselineAttributeValues_OutData = CallFunc_TryGetItemDataBaselineAttributeValues_OutData;
	Parms.CallFunc_TryGetItemDataBaselineAttributeValues_Branches = CallFunc_TryGetItemDataBaselineAttributeValues_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.OverwriteSlot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              SlotToOverwrite                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFoodSlot                   K2Node_MakeStruct_FoodSlot                                       (None)

void UBP_ConsumptionComponent_C::OverwriteSlot(const struct FInventoryEntry& InventoryEntry, int32 SlotToOverwrite, const struct FDateTime& CallFunc_UtcNow_ReturnValue, const struct FFoodSlot& K2Node_MakeStruct_FoodSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "OverwriteSlot");

	Params::UBP_ConsumptionComponent_C_OverwriteSlot_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.SlotToOverwrite = SlotToOverwrite;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.K2Node_MakeStruct_FoodSlot = K2Node_MakeStruct_FoodSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.ClearSlot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FoodSlotIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFoodSlot                   K2Node_MakeStruct_FoodSlot                                       (None)

void UBP_ConsumptionComponent_C::ClearSlot(int32 FoodSlotIndex, const struct FFoodSlot& K2Node_MakeStruct_FoodSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "ClearSlot");

	Params::UBP_ConsumptionComponent_C_ClearSlot_Params Parms{};

	Parms.FoodSlotIndex = FoodSlotIndex;
	Parms.K2Node_MakeStruct_FoodSlot = K2Node_MakeStruct_FoodSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.CompareSlot
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               FoundSameType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SameTypeSlotIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentSlotIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFoodSlot                   CurrentSlot                                                      (Edit, BlueprintVisible)
// bool                               LFoundSameType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSameFoodItem_isSameFood                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFoodSlot                   CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumptionComponent_C::CompareSlot(const struct FInventoryEntry& InventoryEntry, bool* FoundSameType, int32* SameTypeSlotIndex, int32 CurrentSlotIndex, const struct FFoodSlot& CurrentSlot, bool LFoundSameType, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsSameFoodItem_isSameFood, const struct FFoodSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "CompareSlot");

	Params::UBP_ConsumptionComponent_C_CompareSlot_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.CurrentSlotIndex = CurrentSlotIndex;
	Parms.CurrentSlot = CurrentSlot;
	Parms.LFoundSameType = LFoundSameType;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsSameFoodItem_isSameFood = CallFunc_IsSameFoodItem_isSameFood;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundSameType != nullptr)
		*FoundSameType = Parms.FoundSameType;

	if (SameTypeSlotIndex != nullptr)
		*SameTypeSlotIndex = Parms.SameTypeSlotIndex;

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.GetFoodSlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFoodSlot>           FoodSlots                                                        (Parm, OutParm)

void UBP_ConsumptionComponent_C::GetFoodSlots(TArray<struct FFoodSlot>* FoodSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "GetFoodSlots");

	Params::UBP_ConsumptionComponent_C_GetFoodSlots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FoodSlots != nullptr)
		*FoodSlots = std::move(Parms.FoodSlots);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ConsumptionComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.OnGasDataPersisted_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ConsumptionComponent_C::OnGasDataPersisted_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "OnGasDataPersisted_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.InitializeUI_Client
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ConsumptionComponent_C::InitializeUI_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "InitializeUI_Client");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.ExecuteUbergraph_BP_ConsumptionComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPersistentGASDataComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumptionComponent_C::ExecuteUbergraph_BP_ConsumptionComponent(int32 EntryPoint, class UPersistentGASDataComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "ExecuteUbergraph_BP_ConsumptionComponent");

	Params::UBP_ConsumptionComponent_C_ExecuteUbergraph_BP_ConsumptionComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConsumptionComponent.BP_ConsumptionComponent_C.OnFoodSlotsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ConsumptionComponent_C::OnFoodSlotsChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumptionComponent_C", "OnFoodSlotsChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


