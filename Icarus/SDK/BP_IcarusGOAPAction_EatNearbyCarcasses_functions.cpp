#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C
// (None)

class UClass* UBP_IcarusGOAPAction_EatNearbyCarcasses_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_EatNearbyCarcasses_C");

	return Clss;
}


// BP_IcarusGOAPAction_EatNearbyCarcasses_C BP_IcarusGOAPAction_EatNearbyCarcasses.Default__BP_IcarusGOAPAction_EatNearbyCarcasses_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_EatNearbyCarcasses_C* UBP_IcarusGOAPAction_EatNearbyCarcasses_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_EatNearbyCarcasses_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_EatNearbyCarcasses_C*>(UBP_IcarusGOAPAction_EatNearbyCarcasses_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.GetCorpseMoveLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      InActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WorldLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IcarusGOAPAction_EatNearbyCarcasses_C::GetCorpseMoveLocation(class AActor* InActor, struct FVector* WorldLocation, const struct FVector& Temp_wildcard_Variable, class AActor* CallFunc_GetAttachParentActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& Temp_wildcard_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatNearbyCarcasses_C", "GetCorpseMoveLocation");

	Params::UBP_IcarusGOAPAction_EatNearbyCarcasses_C_GetCorpseMoveLocation_Params Parms{};

	Parms.InActor = InActor;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

	if (WorldLocation != nullptr)
		*WorldLocation = std::move(Parms.WorldLocation);

}


// Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.IsPointUnderwater
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                     InLocation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUnderwater                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingleForObjects_OutHit                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingleForObjects_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPAction_EatNearbyCarcasses_C::IsPointUnderwater(const struct FVector& InLocation, bool* IsUnderwater, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatNearbyCarcasses_C", "IsPointUnderwater");

	Params::UBP_IcarusGOAPAction_EatNearbyCarcasses_C_IsPointUnderwater_Params Parms{};

	Parms.InLocation = InLocation;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LineTraceSingleForObjects_OutHit = CallFunc_LineTraceSingleForObjects_OutHit;
	Parms.CallFunc_LineTraceSingleForObjects_ReturnValue = CallFunc_LineTraceSingleForObjects_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUnderwater != nullptr)
		*IsUnderwater = Parms.IsUnderwater;

}


// Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.ActionReset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionReset_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EatNearbyCarcasses_C::ActionReset(bool Interrupted, bool CallFunc_ActionReset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatNearbyCarcasses_C", "ActionReset");

	Params::UBP_IcarusGOAPAction_EatNearbyCarcasses_C_ActionReset_Params Parms{};

	Parms.Interrupted = Interrupted;
	Parms.CallFunc_ActionReset_ReturnValue = CallFunc_ActionReset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.GOAPAnimNotify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GOAPAnimNotify_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EatNearbyCarcasses_C::GOAPAnimNotify(const class FString& NotifyName, class AIcarusNPCGOAPController* Controller, bool CallFunc_GOAPAnimNotify_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatNearbyCarcasses_C", "GOAPAnimNotify");

	Params::UBP_IcarusGOAPAction_EatNearbyCarcasses_C_GOAPAnimNotify_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Controller = Controller;
	Parms.CallFunc_GOAPAnimNotify_ReturnValue = CallFunc_GOAPAnimNotify_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.EatFromCorpse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              FoodEaten                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemSlot                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCorpseValid_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGOAPMotivationsRowHandle   CallFunc_MakeGOAPMotivations_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMotivationValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateMotivationValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CompleteInteraction_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueriesRowHandle        CallFunc_MakeLiteralTagQueries_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FItemDynamicData            CallFunc_GetItemProperty_DynamicData                             (None)
// enum class EDataValid              CallFunc_GetItemProperty_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindFirstItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_RemoveItem_ReturnValue                                  (ContainsInstancedReference)

void UBP_IcarusGOAPAction_EatNearbyCarcasses_C::EatFromCorpse(class AIcarusNPCGOAPController* Controller, bool Return, int32 FoodEaten, int32 ItemSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCorpseValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FGOAPMotivationsRowHandle& CallFunc_MakeGOAPMotivations_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_GetMotivationValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Min_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, bool CallFunc_CompleteInteraction_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FItemDynamicData& CallFunc_GetItemProperty_DynamicData, enum class EDataValid CallFunc_GetItemProperty_Paths, int32 CallFunc_FindFirstItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemData& CallFunc_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatNearbyCarcasses_C", "EatFromCorpse");

	Params::UBP_IcarusGOAPAction_EatNearbyCarcasses_C_EatFromCorpse_Params Parms{};

	Parms.Controller = Controller;
	Parms.Return = Return;
	Parms.FoodEaten = FoodEaten;
	Parms.ItemSlot = ItemSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsCorpseValid_ReturnValue = CallFunc_IsCorpseValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeGOAPMotivations_ReturnValue = CallFunc_MakeGOAPMotivations_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetMotivationValue_ReturnValue = CallFunc_GetMotivationValue_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_UpdateMotivationValue_ReturnValue = CallFunc_UpdateMotivationValue_ReturnValue;
	Parms.CallFunc_CompleteInteraction_ReturnValue = CallFunc_CompleteInteraction_ReturnValue;
	Parms.CallFunc_MakeLiteralTagQueries_ReturnValue = CallFunc_MakeLiteralTagQueries_ReturnValue;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetItemProperty_DynamicData = CallFunc_GetItemProperty_DynamicData;
	Parms.CallFunc_GetItemProperty_Paths = CallFunc_GetItemProperty_Paths;
	Parms.CallFunc_FindFirstItem_ReturnValue = CallFunc_FindFirstItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.IsCorpseValid
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABP_GOAP_Corpse_C*           Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAISetup                    CallFunc_GetAISetupStruct_AISetup                                (None)
// enum class EValid                  CallFunc_GetAISetupStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRewards                CallFunc_GetItemRewardsStruct_ItemRewards                        (None)
// enum class EValid                  CallFunc_GetItemRewardsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemRewardEntry            CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetItemTags_ReturnValue                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagQueriesRowHandle        CallFunc_MakeLiteralTagQueries_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocationWithinSpawnBlockerRadius_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPointUnderwater_IsUnderwater                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindFirstItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EatNearbyCarcasses_C::IsCorpseValid(class ABP_GOAP_Corpse_C* Target, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemRewards& CallFunc_GetItemRewardsStruct_ItemRewards, enum class EValid CallFunc_GetItemRewardsStruct_Paths, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FItemRewardEntry& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, bool CallFunc_IsLocationWithinSpawnBlockerRadius_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_IsPointUnderwater_IsUnderwater, int32 CallFunc_FindFirstItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatNearbyCarcasses_C", "IsCorpseValid");

	Params::UBP_IcarusGOAPAction_EatNearbyCarcasses_C_IsCorpseValid_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAISetupStruct_AISetup = CallFunc_GetAISetupStruct_AISetup;
	Parms.CallFunc_GetAISetupStruct_Paths = CallFunc_GetAISetupStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemRewardsStruct_ItemRewards = CallFunc_GetItemRewardsStruct_ItemRewards;
	Parms.CallFunc_GetItemRewardsStruct_Paths = CallFunc_GetItemRewardsStruct_Paths;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetItemTags_ReturnValue = CallFunc_GetItemTags_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeLiteralTagQueries_ReturnValue = CallFunc_MakeLiteralTagQueries_ReturnValue;
	Parms.CallFunc_IsLocationWithinSpawnBlockerRadius_ReturnValue = CallFunc_IsLocationWithinSpawnBlockerRadius_ReturnValue;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_IsPointUnderwater_IsUnderwater = CallFunc_IsPointUnderwater_IsUnderwater;
	Parms.CallFunc_FindFirstItem_ReturnValue = CallFunc_FindFirstItem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              MaxDistance                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_GOAP_Corpse_C*>   CallFunc_GetActorsOfClassInWorld_OutActors                       (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCorpseValid_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GOAP_Corpse_C*           K2Node_DynamicCast_AsBP_GOAP_Corpse                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCorpseValid_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectReachablePointAtLocation_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EatNearbyCarcasses_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, float MaxDistance, TArray<class ABP_GOAP_Corpse_C*>& CallFunc_GetActorsOfClassInWorld_OutActors, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCorpseValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CheckContextualPreconditions_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsCorpseValid_ReturnValue_1, const struct FVector& CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint, bool CallFunc_ProjectReachablePointAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatNearbyCarcasses_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_EatNearbyCarcasses_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.MaxDistance = MaxDistance;
	Parms.CallFunc_GetActorsOfClassInWorld_OutActors = CallFunc_GetActorsOfClassInWorld_OutActors;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsCorpseValid_ReturnValue = CallFunc_IsCorpseValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_GOAP_Corpse = K2Node_DynamicCast_AsBP_GOAP_Corpse;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_IsCorpseValid_ReturnValue_1 = CallFunc_IsCorpseValid_ReturnValue_1;
	Parms.CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint = CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint;
	Parms.CallFunc_ProjectReachablePointAtLocation_ReturnValue = CallFunc_ProjectReachablePointAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.GetInteractLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    ForController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFLODTile*                   Tile                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SearchRadius                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFLODFISMComponent*          CurrentFISM                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      NearbyInstances                                                  (Edit, BlueprintVisible)
// class AIcarusNPCGOAPController*    Controller                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_GOAP_Corpse_C*>   CallFunc_GetActorsOfClassInWorld_OutActors                       (ReferenceParm)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCorpseMoveLocation_WorldLocation                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectReachablePointAtLocation_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GOAP_Corpse_C*           K2Node_DynamicCast_AsBP_GOAP_Corpse                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCorpseValid_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPAction_EatNearbyCarcasses_C::GetInteractLocation(class AIcarusNPCGOAPController* ForController, struct FVector* OutLocation, bool* Success, class AFLODTile* Tile, float SearchRadius, class UFLODFISMComponent* CurrentFISM, const TArray<int32>& NearbyInstances, class AIcarusNPCGOAPController* Controller, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ABP_GOAP_Corpse_C*>& CallFunc_GetActorsOfClassInWorld_OutActors, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_GetCorpseMoveLocation_WorldLocation, const struct FVector& CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint, bool CallFunc_ProjectReachablePointAtLocation_ReturnValue, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCorpseValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatNearbyCarcasses_C", "GetInteractLocation");

	Params::UBP_IcarusGOAPAction_EatNearbyCarcasses_C_GetInteractLocation_Params Parms{};

	Parms.ForController = ForController;
	Parms.Tile = Tile;
	Parms.SearchRadius = SearchRadius;
	Parms.CurrentFISM = CurrentFISM;
	Parms.NearbyInstances = NearbyInstances;
	Parms.Controller = Controller;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorsOfClassInWorld_OutActors = CallFunc_GetActorsOfClassInWorld_OutActors;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCorpseMoveLocation_WorldLocation = CallFunc_GetCorpseMoveLocation_WorldLocation;
	Parms.CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint = CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint;
	Parms.CallFunc_ProjectReachablePointAtLocation_ReturnValue = CallFunc_ProjectReachablePointAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_GOAP_Corpse = K2Node_DynamicCast_AsBP_GOAP_Corpse;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsCorpseValid_ReturnValue = CallFunc_IsCorpseValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.ExecutionComplete
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ExecutionComplete_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EatNearbyCarcasses_C::ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_ExecutionComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatNearbyCarcasses_C", "ExecutionComplete");

	Params::UBP_IcarusGOAPAction_EatNearbyCarcasses_C_ExecutionComplete_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_ExecutionComplete_ReturnValue = CallFunc_ExecutionComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


