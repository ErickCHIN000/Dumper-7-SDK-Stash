#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C
// (Actor)

class UClass* ABP_Exotic_Delivery_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Exotic_Delivery_Interface_C");

	return Clss;
}


// BP_Exotic_Delivery_Interface_C BP_Exotic_Delivery_Interface.Default__BP_Exotic_Delivery_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Exotic_Delivery_Interface_C* ABP_Exotic_Delivery_Interface_C::GetDefaultObj()
{
	static class ABP_Exotic_Delivery_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Exotic_Delivery_Interface_C*>(ABP_Exotic_Delivery_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C.GetRedirectedInventoryComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent*         InventoryComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Exotic_Delivery_Interface_C::GetRedirectedInventoryComponent(class UInventoryComponent** InventoryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Delivery_Interface_C", "GetRedirectedInventoryComponent");

	Params::ABP_Exotic_Delivery_Interface_C_GetRedirectedInventoryComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InventoryComponent != nullptr)
		*InventoryComponent = Parms.InventoryComponent;

}


// Function BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Exotic_Delivery_Interface_C::Deployable_Interact(class AActor* Interactor, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Delivery_Interface_C", "Deployable_Interact");

	Params::ABP_Exotic_Delivery_Interface_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C.GenericAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Exotic_Delivery_Interface_C::GenericAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Delivery_Interface_C", "GenericAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Exotic_Delivery_Interface_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Delivery_Interface_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C.GenericActionWithCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Exotic_Delivery_Interface_C::GenericActionWithCharacter(class AIcarusPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Delivery_Interface_C", "GenericActionWithCharacter");

	Params::ABP_Exotic_Delivery_Interface_C_GenericActionWithCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C.OnReceivedPlayerLoadoutExtension
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemData>           Items                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_Exotic_Delivery_Interface_C::OnReceivedPlayerLoadoutExtension(TArray<struct FItemData>& Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Delivery_Interface_C", "OnReceivedPlayerLoadoutExtension");

	Params::ABP_Exotic_Delivery_Interface_C_OnReceivedPlayerLoadoutExtension_Params Parms{};

	Parms.Items = Items;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C.DropPodLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Exotic_Delivery_Interface_C::DropPodLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Delivery_Interface_C", "DropPodLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C.SpawnNewPod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Exotic_Delivery_Interface_C::SpawnNewPod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Delivery_Interface_C", "SpawnNewPod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C.CheckSpawnNewPod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Exotic_Delivery_Interface_C::CheckSpawnNewPod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Delivery_Interface_C", "CheckSpawnNewPod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C.ExecuteUbergraph_BP_Exotic_Delivery_Interface
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_GenericAction_C>CallFunc_GenericAction_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Exotic_Transport_Pod_C*  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           K2Node_CustomEvent_Items                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerDataComponent*        CallFunc_GetPlayerDataComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// TArray<struct FItemData>           CallFunc_ForceAddItems_RemainingItems                            (ReferenceParm, ContainsInstancedReference)

void ABP_Exotic_Delivery_Interface_C::ExecuteUbergraph_BP_Exotic_Delivery_Interface(int32 EntryPoint, TArray<struct FItemData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_GenericAction_C> CallFunc_GenericAction_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Exotic_Transport_Pod_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, class AIcarusPlayerCharacter* K2Node_Event_Character, TArray<struct FItemData>& K2Node_CustomEvent_Items, bool CallFunc_IsValid_ReturnValue_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, bool CallFunc_HasTag_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, TArray<struct FItemData>& K2Node_MakeArray_Array_1, TArray<struct FItemData>& CallFunc_ForceAddItems_RemainingItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Delivery_Interface_C", "ExecuteUbergraph_BP_Exotic_Delivery_Interface");

	Params::ABP_Exotic_Delivery_Interface_C_ExecuteUbergraph_BP_Exotic_Delivery_Interface_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GenericAction_self_CastInput = CallFunc_GenericAction_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_CustomEvent_Items = K2Node_CustomEvent_Items;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetPlayerDataComponent_ReturnValue = CallFunc_GetPlayerDataComponent_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_ForceAddItems_RemainingItems = CallFunc_ForceAddItems_RemainingItems;

	UObject::ProcessEvent(Func, &Parms);

}

}


