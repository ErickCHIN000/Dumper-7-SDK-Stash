#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConsumableComponent.BP_ConsumableComponent_C
// (None)

class UClass* UBP_ConsumableComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConsumableComponent_C");

	return Clss;
}


// BP_ConsumableComponent_C BP_ConsumableComponent.Default__BP_ConsumableComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConsumableComponent_C* UBP_ConsumableComponent_C::GetDefaultObj()
{
	static class UBP_ConsumableComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConsumableComponent_C*>(UBP_ConsumableComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConsumableComponent.BP_ConsumableComponent_C.GetStatusEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FStatusEffectLevel>  StatusEffects                                                    (Parm, OutParm)

void UBP_ConsumableComponent_C::GetStatusEffects(TArray<struct FStatusEffectLevel>* StatusEffects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumableComponent_C", "GetStatusEffects");

	Params::UBP_ConsumableComponent_C_GetStatusEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StatusEffects != nullptr)
		*StatusEffects = std::move(Parms.StatusEffects);

}


// Function BP_ConsumableComponent.BP_ConsumableComponent_C.GetGameplayEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>              GameplayEffects                                                  (Parm, OutParm)

void UBP_ConsumableComponent_C::GetGameplayEffects(TArray<class UClass*>* GameplayEffects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumableComponent_C", "GetGameplayEffects");

	Params::UBP_ConsumableComponent_C_GetGameplayEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GameplayEffects != nullptr)
		*GameplayEffects = std::move(Parms.GameplayEffects);

}


// Function BP_ConsumableComponent.BP_ConsumableComponent_C.GetOrCacheAttachParent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerCharacter*         Parent                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerCharacter*         K2Node_DynamicCast_AsNWXPlayer_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumableComponent_C::GetOrCacheAttachParent(class ANWXPlayerCharacter** Parent, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumableComponent_C", "GetOrCacheAttachParent");

	Params::UBP_ConsumableComponent_C_GetOrCacheAttachParent_Params Parms{};

	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Character = K2Node_DynamicCast_AsNWXPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Parent != nullptr)
		*Parent = Parms.Parent;

}


// Function BP_ConsumableComponent.BP_ConsumableComponent_C.GetOrCacheInventoryComponent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponentBase*     InventoryComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class ANWXPlayerCharacter*         CallFunc_GetOrCacheAttachParent_Parent                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumableComponent_C::GetOrCacheInventoryComponent(class UInventoryComponentBase** InventoryComponent, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ANWXPlayerCharacter* CallFunc_GetOrCacheAttachParent_Parent, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumableComponent_C", "GetOrCacheInventoryComponent");

	Params::UBP_ConsumableComponent_C_GetOrCacheInventoryComponent_Params Parms{};

	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetOrCacheAttachParent_Parent = CallFunc_GetOrCacheAttachParent_Parent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryComponent != nullptr)
		*InventoryComponent = Parms.InventoryComponent;

}


// Function BP_ConsumableComponent.BP_ConsumableComponent_C.GetConsumableAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerCharacter*         CallFunc_GetOrCacheAttachParent_Parent                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetConsumableAmount_Amount                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumableComponent_C::GetConsumableAmount(int32* Amount, class ANWXPlayerCharacter* CallFunc_GetOrCacheAttachParent_Parent, int32 CallFunc_GetConsumableAmount_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumableComponent_C", "GetConsumableAmount");

	Params::UBP_ConsumableComponent_C_GetConsumableAmount_Params Parms{};

	Parms.CallFunc_GetOrCacheAttachParent_Parent = CallFunc_GetOrCacheAttachParent_Parent;
	Parms.CallFunc_GetConsumableAmount_Amount = CallFunc_GetConsumableAmount_Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function BP_ConsumableComponent.BP_ConsumableComponent_C.RemoveFromInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerCharacter*         CallFunc_GetOrCacheAttachParent_Parent                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEquippableItemUtilityInterface>K2Node_DynamicCast_AsEquippable_Item_Utility_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumableComponent_C::RemoveFromInventory(class ANWXPlayerCharacter* CallFunc_GetOrCacheAttachParent_Parent, bool CallFunc_IsServer_ReturnValue, TScriptInterface<class IEquippableItemUtilityInterface> K2Node_DynamicCast_AsEquippable_Item_Utility_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumableComponent_C", "RemoveFromInventory");

	Params::UBP_ConsumableComponent_C_RemoveFromInventory_Params Parms{};

	Parms.CallFunc_GetOrCacheAttachParent_Parent = CallFunc_GetOrCacheAttachParent_Parent;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsEquippable_Item_Utility_Interface = K2Node_DynamicCast_AsEquippable_Item_Utility_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConsumableComponent.BP_ConsumableComponent_C.ApplyConsumableEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerCharacter*         CallFunc_GetOrCacheAttachParent_Parent                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetOrCacheInventoryComponent_InventoryComponent         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>K2Node_DynamicCast_AsItem_Container_Provider                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetDefaultContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItem_Entry                                           (None)
// bool                               CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConsumableComponent_C::ApplyConsumableEffects(class ANWXPlayerCharacter* CallFunc_GetOrCacheAttachParent_Parent, class UInventoryComponentBase* CallFunc_GetOrCacheInventoryComponent_InventoryComponent, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumableComponent_C", "ApplyConsumableEffects");

	Params::UBP_ConsumableComponent_C_ApplyConsumableEffects_Params Parms{};

	Parms.CallFunc_GetOrCacheAttachParent_Parent = CallFunc_GetOrCacheAttachParent_Parent;
	Parms.CallFunc_GetOrCacheInventoryComponent_InventoryComponent = CallFunc_GetOrCacheInventoryComponent_InventoryComponent;
	Parms.K2Node_DynamicCast_AsItem_Container_Provider = K2Node_DynamicCast_AsItem_Container_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDefaultContainer_ReturnValue = CallFunc_GetDefaultContainer_ReturnValue;
	Parms.CallFunc_GetItem_Entry = CallFunc_GetItem_Entry;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConsumableComponent.BP_ConsumableComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ConsumableComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumableComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConsumableComponent.BP_ConsumableComponent_C.ExecuteUbergraph_BP_ConsumableComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetInstanceID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             K2Node_DynamicCast_AsEquippable_Item                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)

void UBP_ConsumableComponent_C::ExecuteUbergraph_BP_ConsumableComponent(int32 EntryPoint, const struct FGuid& CallFunc_GetInstanceID_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AEquippableItem* K2Node_DynamicCast_AsEquippable_Item, bool K2Node_DynamicCast_bSuccess, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumableComponent_C", "ExecuteUbergraph_BP_ConsumableComponent");

	Params::UBP_ConsumableComponent_C_ExecuteUbergraph_BP_ConsumableComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstanceID_ReturnValue = CallFunc_GetInstanceID_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsEquippable_Item = K2Node_DynamicCast_AsEquippable_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConsumableComponent.BP_ConsumableComponent_C.ConsumableEffectsApplied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ConsumableComponent_C::ConsumableEffectsApplied__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConsumableComponent_C", "ConsumableEffectsApplied__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


