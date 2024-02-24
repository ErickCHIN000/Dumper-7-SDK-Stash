#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RewardBehaviour_VisitingCard.BP_RewardBehaviour_VisitingCard_C
// (None)

class UClass* UBP_RewardBehaviour_VisitingCard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RewardBehaviour_VisitingCard_C");

	return Clss;
}


// BP_RewardBehaviour_VisitingCard_C BP_RewardBehaviour_VisitingCard.Default__BP_RewardBehaviour_VisitingCard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RewardBehaviour_VisitingCard_C* UBP_RewardBehaviour_VisitingCard_C::GetDefaultObj()
{
	static class UBP_RewardBehaviour_VisitingCard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RewardBehaviour_VisitingCard_C*>(UBP_RewardBehaviour_VisitingCard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RewardBehaviour_VisitingCard.BP_RewardBehaviour_VisitingCard_C.InventoryCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             VisitingCard                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               RewardVisitingCard                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               VisitingCardFound                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetPlayerRealmCards_RealmCardsArray                     (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// struct FGameplayTagContainer       CallFunc_GetItemTraitsFromEntry_Traits                           (None)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_VisitingCard_C::InventoryCheck(class APlayerState* PlayerState, const struct FInventoryEntry& VisitingCard, bool* RewardVisitingCard, bool VisitingCardFound, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetPlayerRealmCards_RealmCardsArray, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_VisitingCard_C", "InventoryCheck");

	Params::UBP_RewardBehaviour_VisitingCard_C_InventoryCheck_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.VisitingCard = VisitingCard;
	Parms.VisitingCardFound = VisitingCardFound;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerRealmCards_RealmCardsArray = CallFunc_GetPlayerRealmCards_RealmCardsArray;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemTraitsFromEntry_Traits = CallFunc_GetItemTraitsFromEntry_Traits;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RewardVisitingCard != nullptr)
		*RewardVisitingCard = Parms.RewardVisitingCard;

}


// Function BP_RewardBehaviour_VisitingCard.BP_RewardBehaviour_VisitingCard_C.RewardVisitingCard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                LPlayerState                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          LItemReference                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    LPlayerInventory                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             LRealmCard                                                       (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InventoryCheck_RewardVisitingCard                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_CreateNPCAddressRealmCardForThisDeploy_OutInventoryEntry(None)
// enum class EGetResult              CallFunc_CreateNPCAddressRealmCardForThisDeploy_Branches         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_AddItemToCorrectContainer_OutContainerAddedTo           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_AddItemToCorrectContainer_OutAmountAdded                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItemToCorrectContainer_OutModifiedInstances          (ReferenceParm)
// bool                               CallFunc_AddItemToCorrectContainer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_VisitingCard_C::RewardVisitingCard(class APlayerState* PlayerState, class APlayerState* LPlayerState, const struct FItemDataReference& LItemReference, class UBP_InventoryComponent_C* LPlayerInventory, const struct FInventoryEntry& LRealmCard, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_InventoryComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_InventoryCheck_RewardVisitingCard, const struct FInventoryEntry& CallFunc_CreateNPCAddressRealmCardForThisDeploy_OutInventoryEntry, enum class EGetResult CallFunc_CreateNPCAddressRealmCardForThisDeploy_Branches, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IItemContainer> CallFunc_AddItemToCorrectContainer_OutContainerAddedTo, int32 CallFunc_AddItemToCorrectContainer_OutAmountAdded, TArray<struct FGuid>& CallFunc_AddItemToCorrectContainer_OutModifiedInstances, bool CallFunc_AddItemToCorrectContainer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_VisitingCard_C", "RewardVisitingCard");

	Params::UBP_RewardBehaviour_VisitingCard_C_RewardVisitingCard_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.LPlayerState = LPlayerState;
	Parms.LItemReference = LItemReference;
	Parms.LPlayerInventory = LPlayerInventory;
	Parms.LRealmCard = LRealmCard;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_InventoryCheck_RewardVisitingCard = CallFunc_InventoryCheck_RewardVisitingCard;
	Parms.CallFunc_CreateNPCAddressRealmCardForThisDeploy_OutInventoryEntry = CallFunc_CreateNPCAddressRealmCardForThisDeploy_OutInventoryEntry;
	Parms.CallFunc_CreateNPCAddressRealmCardForThisDeploy_Branches = CallFunc_CreateNPCAddressRealmCardForThisDeploy_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddItemToCorrectContainer_OutContainerAddedTo = CallFunc_AddItemToCorrectContainer_OutContainerAddedTo;
	Parms.CallFunc_AddItemToCorrectContainer_OutAmountAdded = CallFunc_AddItemToCorrectContainer_OutAmountAdded;
	Parms.CallFunc_AddItemToCorrectContainer_OutModifiedInstances = CallFunc_AddItemToCorrectContainer_OutModifiedInstances;
	Parms.CallFunc_AddItemToCorrectContainer_ReturnValue = CallFunc_AddItemToCorrectContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_VisitingCard.BP_RewardBehaviour_VisitingCard_C.ApplyReward
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SenderContextObject                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_VisitingCard_C::ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_VisitingCard_C", "ApplyReward");

	Params::UBP_RewardBehaviour_VisitingCard_C_ApplyReward_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.SenderContextObject = SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_VisitingCard.BP_RewardBehaviour_VisitingCard_C.ExecuteUbergraph_BP_RewardBehaviour_VisitingCard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_Event_PlayerState                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_SenderContextObject                                 (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_VisitingCard_C::ExecuteUbergraph_BP_RewardBehaviour_VisitingCard(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_VisitingCard_C", "ExecuteUbergraph_BP_RewardBehaviour_VisitingCard");

	Params::UBP_RewardBehaviour_VisitingCard_C_ExecuteUbergraph_BP_RewardBehaviour_VisitingCard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerState = K2Node_Event_PlayerState;
	Parms.K2Node_Event_SenderContextObject = K2Node_Event_SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


