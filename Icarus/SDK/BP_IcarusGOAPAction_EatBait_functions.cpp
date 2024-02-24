#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C
// (None)

class UClass* UBP_IcarusGOAPAction_EatBait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_EatBait_C");

	return Clss;
}


// BP_IcarusGOAPAction_EatBait_C BP_IcarusGOAPAction_EatBait.Default__BP_IcarusGOAPAction_EatBait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_EatBait_C* UBP_IcarusGOAPAction_EatBait_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_EatBait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_EatBait_C*>(UBP_IcarusGOAPAction_EatBait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.GetBestBaitQueryForController
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagQueriesEnum             BaitQuery                                                        (Parm, OutParm, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsHerbivore                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsCarnivore                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       PawnGameplayTags                                                 (Edit, BlueprintVisible)
// struct FTagQueriesEnum             HerbivoreQuery                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FTagQueriesEnum             CarnivoreQuery                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer                    (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueriesEnum             K2Node_Select_Default                                            (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueriesEnum             K2Node_Select_Default_1                                          (HasGetValueTypeHash)
// struct FTagQueriesRowHandle        CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueriesRowHandle        CallFunc_StructToRowHandle_ReturnValue_1                         (NoDestructor, HasGetValueTypeHash)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries_1                        (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPAction_EatBait_C::GetBestBaitQueryForController(class AIcarusNPCGOAPController* Controller, struct FTagQueriesEnum* BaitQuery, bool* Success, bool IsHerbivore, bool IsCarnivore, const struct FGameplayTagContainer& PawnGameplayTags, const struct FTagQueriesEnum& HerbivoreQuery, const struct FTagQueriesEnum& CarnivoreQuery, bool Temp_bool_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool Temp_bool_Variable_1, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTagQueriesEnum& K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, const struct FTagQueriesEnum& K2Node_Select_Default_1, const struct FTagQueriesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FTagQueriesRowHandle& CallFunc_StructToRowHandle_ReturnValue_1, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries_1, enum class EValid CallFunc_GetTagQueriesStruct_Paths_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatBait_C", "GetBestBaitQueryForController");

	Params::UBP_IcarusGOAPAction_EatBait_C_GetBestBaitQueryForController_Params Parms{};

	Parms.Controller = Controller;
	Parms.IsHerbivore = IsHerbivore;
	Parms.IsCarnivore = IsCarnivore;
	Parms.PawnGameplayTags = PawnGameplayTags;
	Parms.HerbivoreQuery = HerbivoreQuery;
	Parms.CarnivoreQuery = CarnivoreQuery;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer = CallFunc_GetGameplayTagContainer_OutContainer;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue = CallFunc_GetGameplayTagContainer_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_StructToRowHandle_ReturnValue_1 = CallFunc_StructToRowHandle_ReturnValue_1;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries_1 = CallFunc_GetTagQueriesStruct_TagQueries_1;
	Parms.CallFunc_GetTagQueriesStruct_Paths_1 = CallFunc_GetTagQueriesStruct_Paths_1;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue_1 = CallFunc_DoesContainerMatchTagQuery_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (BaitQuery != nullptr)
		*BaitQuery = std::move(Parms.BaitQuery);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.GetNearestRelevantBaitItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    ForController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipPathCheck                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 BaitItem                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PathEnd                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxDistance                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagQueriesEnum             CallFunc_GetBestBaitQueryForController_BaitQuery                 (HasGetValueTypeHash)
// bool                               CallFunc_GetBestBaitQueryForController_Success                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagQueriesRowHandle        CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AIcarusItem*>         CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors           (ReferenceParm)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDeployableComponent*        CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectReachablePointAtLocation_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPAction_EatBait_C::GetNearestRelevantBaitItem(class AIcarusNPCGOAPController* ForController, bool SkipPathCheck, class AIcarusItem** BaitItem, struct FVector* PathEnd, float MaxDistance, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTagQueriesEnum& CallFunc_GetBestBaitQueryForController_BaitQuery, bool CallFunc_GetBestBaitQueryForController_Success, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AIcarusItem*>& CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& Temp_wildcard_Variable, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UDeployableComponent* CallFunc_GetTrait_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint, bool CallFunc_ProjectReachablePointAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatBait_C", "GetNearestRelevantBaitItem");

	Params::UBP_IcarusGOAPAction_EatBait_C_GetNearestRelevantBaitItem_Params Parms{};

	Parms.ForController = ForController;
	Parms.SkipPathCheck = SkipPathCheck;
	Parms.MaxDistance = MaxDistance;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetBestBaitQueryForController_BaitQuery = CallFunc_GetBestBaitQueryForController_BaitQuery;
	Parms.CallFunc_GetBestBaitQueryForController_Success = CallFunc_GetBestBaitQueryForController_Success;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors = CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Item = K2Node_DynamicCast_AsIcarus_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint = CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint;
	Parms.CallFunc_ProjectReachablePointAtLocation_ReturnValue = CallFunc_ProjectReachablePointAtLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BaitItem != nullptr)
		*BaitItem = Parms.BaitItem;

	if (PathEnd != nullptr)
		*PathEnd = std::move(Parms.PathEnd);

}


// Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.GOAPAnimNotify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GOAPAnimNotify_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EatBait_C::GOAPAnimNotify(const class FString& NotifyName, class AIcarusNPCGOAPController* Controller, bool CallFunc_GOAPAnimNotify_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatBait_C", "GOAPAnimNotify");

	Params::UBP_IcarusGOAPAction_EatBait_C_GOAPAnimNotify_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Controller = Controller;
	Parms.CallFunc_GOAPAnimNotify_ReturnValue = CallFunc_GOAPAnimNotify_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.EatBait
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              FoodEaten                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemSlot                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusNPCGOAPCharacter*     CallFunc_GetNPCCharacter_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_GOAPBaitInterface_C>K2Node_DynamicCast_AsBP_GOAPBait_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifierStatesRowHandle    CallFunc_GetModifierToApplyOnConsume_Modifier                    (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetModifierToApplyOnConsume_Lifetime                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGOAPMotivationsRowHandle   CallFunc_MakeGOAPMotivations_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateMotivationValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPAction_EatBait_C::EatBait(class AIcarusNPCGOAPController* Controller, bool Return, int32 FoodEaten, int32 ItemSlot, bool CallFunc_IsValid_ReturnValue, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue, TScriptInterface<class IBP_GOAPBaitInterface_C> K2Node_DynamicCast_AsBP_GOAPBait_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FModifierStatesRowHandle& CallFunc_GetModifierToApplyOnConsume_Modifier, float CallFunc_GetModifierToApplyOnConsume_Lifetime, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_IsRowHandleValid_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FGOAPMotivationsRowHandle& CallFunc_MakeGOAPMotivations_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatBait_C", "EatBait");

	Params::UBP_IcarusGOAPAction_EatBait_C_EatBait_Params Parms{};

	Parms.Controller = Controller;
	Parms.Return = Return;
	Parms.FoodEaten = FoodEaten;
	Parms.ItemSlot = ItemSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNPCCharacter_ReturnValue = CallFunc_GetNPCCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_GOAPBait_Interface = K2Node_DynamicCast_AsBP_GOAPBait_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetModifierToApplyOnConsume_Modifier = CallFunc_GetModifierToApplyOnConsume_Modifier;
	Parms.CallFunc_GetModifierToApplyOnConsume_Lifetime = CallFunc_GetModifierToApplyOnConsume_Lifetime;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeGOAPMotivations_ReturnValue = CallFunc_MakeGOAPMotivations_ReturnValue;
	Parms.CallFunc_UpdateMotivationValue_ReturnValue = CallFunc_UpdateMotivationValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 CallFunc_GetNearestRelevantBaitItem_BaitItem                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetNearestRelevantBaitItem_PathEnd                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EatBait_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, class AIcarusItem* CallFunc_GetNearestRelevantBaitItem_BaitItem, const struct FVector& CallFunc_GetNearestRelevantBaitItem_PathEnd, bool CallFunc_CheckContextualPreconditions_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatBait_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_EatBait_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_GetNearestRelevantBaitItem_BaitItem = CallFunc_GetNearestRelevantBaitItem_BaitItem;
	Parms.CallFunc_GetNearestRelevantBaitItem_PathEnd = CallFunc_GetNearestRelevantBaitItem_PathEnd;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.GetInteractLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    ForController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusNPCGOAPController*    Controller                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 CallFunc_GetNearestRelevantBaitItem_BaitItem                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetNearestRelevantBaitItem_PathEnd                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPAction_EatBait_C::GetInteractLocation(class AIcarusNPCGOAPController* ForController, struct FVector* OutLocation, bool* Success, class AIcarusNPCGOAPController* Controller, class AIcarusItem* CallFunc_GetNearestRelevantBaitItem_BaitItem, const struct FVector& CallFunc_GetNearestRelevantBaitItem_PathEnd, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatBait_C", "GetInteractLocation");

	Params::UBP_IcarusGOAPAction_EatBait_C_GetInteractLocation_Params Parms{};

	Parms.ForController = ForController;
	Parms.Controller = Controller;
	Parms.CallFunc_GetNearestRelevantBaitItem_BaitItem = CallFunc_GetNearestRelevantBaitItem_BaitItem;
	Parms.CallFunc_GetNearestRelevantBaitItem_PathEnd = CallFunc_GetNearestRelevantBaitItem_PathEnd;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


