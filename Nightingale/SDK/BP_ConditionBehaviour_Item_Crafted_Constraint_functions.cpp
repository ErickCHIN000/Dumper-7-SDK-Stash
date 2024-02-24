#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_Item_Crafted_Constraint.BP_ConditionBehaviour_Item_Crafted_Constraint_C
// (None)

class UClass* UBP_ConditionBehaviour_Item_Crafted_Constraint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_Item_Crafted_Constraint_C");

	return Clss;
}


// BP_ConditionBehaviour_Item_Crafted_Constraint_C BP_ConditionBehaviour_Item_Crafted_Constraint.Default__BP_ConditionBehaviour_Item_Crafted_Constraint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_Item_Crafted_Constraint_C* UBP_ConditionBehaviour_Item_Crafted_Constraint_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_Item_Crafted_Constraint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_Item_Crafted_Constraint_C*>(UBP_ConditionBehaviour_Item_Crafted_Constraint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_Item_Crafted_Constraint.BP_ConditionBehaviour_Item_Crafted_Constraint_C.OnCraftedItemReceived
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FInventoryEntry             ReceivedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              ReceivedRecipeQuantity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_IsItemRelevantForConstraint_OutBranch                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Item_Crafted_Constraint_C::OnCraftedItemReceived(const struct FCraftingRecipeReference& RecipeReference, const struct FInventoryEntry& ReceivedItem, int32 ReceivedRecipeQuantity, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, enum class EGetResult CallFunc_IsItemRelevantForConstraint_OutBranch, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Crafted_Constraint_C", "OnCraftedItemReceived");

	Params::UBP_ConditionBehaviour_Item_Crafted_Constraint_C_OnCraftedItemReceived_Params Parms{};

	Parms.RecipeReference = RecipeReference;
	Parms.ReceivedItem = ReceivedItem;
	Parms.ReceivedRecipeQuantity = ReceivedRecipeQuantity;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.CallFunc_IsItemRelevantForConstraint_OutBranch = CallFunc_IsItemRelevantForConstraint_OutBranch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Item_Crafted_Constraint.BP_ConditionBehaviour_Item_Crafted_Constraint_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Description                                                      (Parm, OutParm)
// struct FItemConstraintPresentationDataCallFunc_GetItemConstraintUIData_OutPresentationData             (None)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_ConditionBehaviour_Item_Crafted_Constraint_C::GetDebugText(class FText* Description, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Crafted_Constraint_C", "GetDebugText");

	Params::UBP_ConditionBehaviour_Item_Crafted_Constraint_C_GetDebugText_Params Parms{};

	Parms.CallFunc_GetItemConstraintUIData_OutPresentationData = CallFunc_GetItemConstraintUIData_OutPresentationData;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_ConditionBehaviour_Item_Crafted_Constraint.BP_ConditionBehaviour_Item_Crafted_Constraint_C.OnConditionRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Item_Crafted_Constraint_C::OnConditionRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Crafted_Constraint_C", "OnConditionRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Item_Crafted_Constraint.BP_ConditionBehaviour_Item_Crafted_Constraint_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Item_Crafted_Constraint_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Crafted_Constraint_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Item_Crafted_Constraint.BP_ConditionBehaviour_Item_Crafted_Constraint_C.InitializeFromPersistence
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FConditionPersistentData    UpdatedProgressData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ConditionBehaviour_Item_Crafted_Constraint_C::InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Crafted_Constraint_C", "InitializeFromPersistence");

	Params::UBP_ConditionBehaviour_Item_Crafted_Constraint_C_InitializeFromPersistence_Params Parms{};

	Parms.UpdatedProgressData = UpdatedProgressData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Item_Crafted_Constraint.BP_ConditionBehaviour_Item_Crafted_Constraint_C.ExecuteUbergraph_BP_ConditionBehaviour_Item_Crafted_Constraint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    K2Node_Event_UpdatedProgressData                                 (ConstParm, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Item_Crafted_Constraint_C::ExecuteUbergraph_BP_ConditionBehaviour_Item_Crafted_Constraint(int32 EntryPoint, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Crafted_Constraint_C", "ExecuteUbergraph_BP_ConditionBehaviour_Item_Crafted_Constraint");

	Params::UBP_ConditionBehaviour_Item_Crafted_Constraint_C_ExecuteUbergraph_BP_ConditionBehaviour_Item_Crafted_Constraint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetConditionPlayerState_PlayerState = CallFunc_GetConditionPlayerState_PlayerState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_UpdatedProgressData = K2Node_Event_UpdatedProgressData;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


