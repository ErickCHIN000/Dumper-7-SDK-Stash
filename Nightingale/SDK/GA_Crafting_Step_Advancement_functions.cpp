#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C
// (None)

class UClass* UGA_Crafting_Step_Advancement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Crafting_Step_Advancement_C");

	return Clss;
}


// GA_Crafting_Step_Advancement_C GA_Crafting_Step_Advancement.Default__GA_Crafting_Step_Advancement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Crafting_Step_Advancement_C* UGA_Crafting_Step_Advancement_C::GetDefaultObj()
{
	static class UGA_Crafting_Step_Advancement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Crafting_Step_Advancement_C*>(UGA_Crafting_Step_Advancement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.FireStepCompletedDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingComponent_C*     CraftingComponent                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CraftingController                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Advancement_C::FireStepCompletedDelegate(class UBP_CraftingComponent_C* CraftingComponent, class AController* CraftingController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_MathExpression_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "FireStepCompletedDelegate");

	Params::UGA_Crafting_Step_Advancement_C_FireStepCompletedDelegate_Params Parms{};

	Parms.CraftingComponent = CraftingComponent;
	Parms.CraftingController = CraftingController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.HandleStationEffectRemoval
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InProgressStepCount                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentInProgressStepHandle                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentInProgressStepIndex                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CurrentInProgressRecipeHandle                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStepDefinitionFromHandle_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_Definition CallFunc_GetStepDefinitionFromHandle_ReturnValue                 (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetStepDefinitionFromHandle_Success_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_Definition CallFunc_GetStepDefinitionFromHandle_ReturnValue_1               (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftingStepsForRecipe_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetCraftingStepsForRecipe_RecipeSteps                   (ReferenceParm)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Advancement_C::HandleStationEffectRemoval(int32 InProgressStepCount, const struct FDataTableRowHandle& CurrentInProgressStepHandle, int32 CurrentInProgressStepIndex, const struct FCraftingRecipeReference& CurrentInProgressRecipeHandle, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GetStepDefinitionFromHandle_Success, const struct FS_Crafting_Step_Definition& CallFunc_GetStepDefinitionFromHandle_ReturnValue, bool CallFunc_GetStepDefinitionFromHandle_Success_1, const struct FS_Crafting_Step_Definition& CallFunc_GetStepDefinitionFromHandle_ReturnValue_1, bool CallFunc_GetCraftingStepsForRecipe_Success, TArray<struct FDataTableRowHandle>& CallFunc_GetCraftingStepsForRecipe_RecipeSteps, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "HandleStationEffectRemoval");

	Params::UGA_Crafting_Step_Advancement_C_HandleStationEffectRemoval_Params Parms{};

	Parms.InProgressStepCount = InProgressStepCount;
	Parms.CurrentInProgressStepHandle = CurrentInProgressStepHandle;
	Parms.CurrentInProgressStepIndex = CurrentInProgressStepIndex;
	Parms.CurrentInProgressRecipeHandle = CurrentInProgressRecipeHandle;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetStepDefinitionFromHandle_Success = CallFunc_GetStepDefinitionFromHandle_Success;
	Parms.CallFunc_GetStepDefinitionFromHandle_ReturnValue = CallFunc_GetStepDefinitionFromHandle_ReturnValue;
	Parms.CallFunc_GetStepDefinitionFromHandle_Success_1 = CallFunc_GetStepDefinitionFromHandle_Success_1;
	Parms.CallFunc_GetStepDefinitionFromHandle_ReturnValue_1 = CallFunc_GetStepDefinitionFromHandle_ReturnValue_1;
	Parms.CallFunc_GetCraftingStepsForRecipe_Success = CallFunc_GetCraftingStepsForRecipe_Success;
	Parms.CallFunc_GetCraftingStepsForRecipe_RecipeSteps = CallFunc_GetCraftingStepsForRecipe_RecipeSteps;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.EndCraft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCraftStatusByID_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Advancement_C::EndCraft(bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetCraftStatusByID_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "EndCraft");

	Params::UGA_Crafting_Step_Advancement_C_EndCraft_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetCraftStatusByID_Success = CallFunc_SetCraftStatusByID_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.OnAdvance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Advancement_C::OnAdvance(bool* Success, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "OnAdvance");

	Params::UGA_Crafting_Step_Advancement_C_OnAdvance_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.InitializeAbilityFromEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeAbilityFromEvent_Success                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftForID_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCraftForID_CraftInProgressData                       (HasGetValueTypeHash)
// bool                               CallFunc_GetStepDefinitionFromHandle_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_Definition CallFunc_GetStepDefinitionFromHandle_ReturnValue                 (ContainsInstancedReference, HasGetValueTypeHash)

void UGA_Crafting_Step_Advancement_C::InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, bool CallFunc_InitializeAbilityFromEvent_Success, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_GetStepDefinitionFromHandle_Success, const struct FS_Crafting_Step_Definition& CallFunc_GetStepDefinitionFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "InitializeAbilityFromEvent");

	Params::UGA_Crafting_Step_Advancement_C_InitializeAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;
	Parms.CallFunc_InitializeAbilityFromEvent_Success = CallFunc_InitializeAbilityFromEvent_Success;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCraftForID_Success = CallFunc_GetCraftForID_Success;
	Parms.CallFunc_GetCraftForID_CraftInProgressData = CallFunc_GetCraftForID_CraftInProgressData;
	Parms.CallFunc_GetStepDefinitionFromHandle_Success = CallFunc_GetStepDefinitionFromHandle_Success;
	Parms.CallFunc_GetStepDefinitionFromHandle_ReturnValue = CallFunc_GetStepDefinitionFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.OnPostAdvance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Advancement_C::OnPostAdvance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "OnPostAdvance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.StepTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Advancement_C::StepTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "StepTransition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.FireEndCraft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      EndCraftActor                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               bAttemptEndCraftOnCrafter                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InstigatingController                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorPresentAtCraftingStation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromBool_ReturnValue                      (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue(None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Advancement_C::FireEndCraft(class AActor* EndCraftActor, bool bAttemptEndCraftOnCrafter, class AActor* InstigatingController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorPresentAtCraftingStation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "FireEndCraft");

	Params::UGA_Crafting_Step_Advancement_C_FireEndCraft_Params Parms{};

	Parms.EndCraftActor = EndCraftActor;
	Parms.bAttemptEndCraftOnCrafter = bAttemptEndCraftOnCrafter;
	Parms.InstigatingController = InstigatingController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ActorPresentAtCraftingStation_ReturnValue = CallFunc_ActorPresentAtCraftingStation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_AbilityPayloadFromBool_ReturnValue = CallFunc_AbilityPayloadFromBool_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue = CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.CheckForEndCraft
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> RecipeSteps                                                      (Edit, BlueprintVisible)
// int32                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Crafting_Step_Advancement_C::CheckForEndCraft(const TArray<struct FDataTableRowHandle>& RecipeSteps, int32 K2Node_MathExpression_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "CheckForEndCraft");

	Params::UGA_Crafting_Step_Advancement_C_CheckForEndCraft_Params Parms{};

	Parms.RecipeSteps = RecipeSteps;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.CheckForAdvance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCraftStatusByID_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Crafting_Step_Advancement_C::CheckForAdvance(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_SetCraftStatusByID_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "CheckForAdvance");

	Params::UGA_Crafting_Step_Advancement_C_CheckForAdvance_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_SetCraftStatusByID_Success = CallFunc_SetCraftStatusByID_Success;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.OnAbilityEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Advancement_C::OnAbilityEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "OnAbilityEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.DoEndAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CancelAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Advancement_C::DoEndAbility(bool CancelAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "DoEndAbility");

	Params::UGA_Crafting_Step_Advancement_C_DoEndAbility_Params Parms{};

	Parms.CancelAbility = CancelAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.ProcessEndStep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewStepHandle                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              NewStepIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue (None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentStepIndexForCraft_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Advancement_C::ProcessEndStep(const struct FDataTableRowHandle& NewStepHandle, int32 NewStepIndex, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_SetCurrentStepIndexForCraft_Success, int32 K2Node_MathExpression_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "ProcessEndStep");

	Params::UGA_Crafting_Step_Advancement_C_ProcessEndStep_Params Parms{};

	Parms.NewStepHandle = NewStepHandle;
	Parms.NewStepIndex = NewStepIndex;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_1 = CallFunc_MakeLiteralBool_ReturnValue_1;
	Parms.CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue = CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SetCurrentStepIndexForCraft_Success = CallFunc_SetCurrentStepIndexForCraft_Success;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.CleanupData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicTypedStructs        K2Node_MakeStruct_DynamicTypedStructs                            (None)
// bool                               CallFunc_SetStepData_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Advancement_C::CleanupData(bool CallFunc_IsValid_ReturnValue, const struct FDynamicTypedStructs& K2Node_MakeStruct_DynamicTypedStructs, bool CallFunc_SetStepData_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "CleanupData");

	Params::UGA_Crafting_Step_Advancement_C_CleanupData_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_DynamicTypedStructs = K2Node_MakeStruct_DynamicTypedStructs;
	Parms.CallFunc_SetStepData_Success = CallFunc_SetStepData_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Advancement_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "K2_OnEndAbility");

	Params::UGA_Crafting_Step_Advancement_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Crafting_Step_Advancement_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Crafting_Step_Advancement_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.PreAdvance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Advancement_C::PreAdvance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "PreAdvance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.Advance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Advancement_C::Advance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "Advance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.PostAdvance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Advancement_C::PostAdvance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "PostAdvance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C.ExecuteUbergraph_GA_Crafting_Step_Advancement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_CheckForAdvance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForEndCraft_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnAdvance_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Advancement_C::ExecuteUbergraph_GA_Crafting_Step_Advancement(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_CheckForAdvance_ReturnValue, bool CallFunc_CheckForEndCraft_ReturnValue, bool CallFunc_OnAdvance_Success, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Advancement_C", "ExecuteUbergraph_GA_Crafting_Step_Advancement");

	Params::UGA_Crafting_Step_Advancement_C_ExecuteUbergraph_GA_Crafting_Step_Advancement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_CheckForAdvance_ReturnValue = CallFunc_CheckForAdvance_ReturnValue;
	Parms.CallFunc_CheckForEndCraft_ReturnValue = CallFunc_CheckForEndCraft_ReturnValue;
	Parms.CallFunc_OnAdvance_Success = CallFunc_OnAdvance_Success;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


