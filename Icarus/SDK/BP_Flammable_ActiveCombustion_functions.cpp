#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C
// (None)

class UClass* UBP_Flammable_ActiveCombustion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Flammable_ActiveCombustion_C");

	return Clss;
}


// BP_Flammable_ActiveCombustion_C BP_Flammable_ActiveCombustion.Default__BP_Flammable_ActiveCombustion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Flammable_ActiveCombustion_C* UBP_Flammable_ActiveCombustion_C::GetDefaultObj()
{
	static class UBP_Flammable_ActiveCombustion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Flammable_ActiveCombustion_C*>(UBP_Flammable_ActiveCombustion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.CanPropagateToTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FFlammableTargetIgnite      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetDeployableFoundation_IsDeployableFoundation     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetHeldByPlayer_IsOwningPlayer                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Flammable_ActiveCombustion_C::CanPropagateToTarget(const struct FFlammableTargetIgnite& Target, bool CallFunc_IsTargetDeployableFoundation_IsDeployableFoundation, bool CallFunc_IsTargetHeldByPlayer_IsOwningPlayer, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "CanPropagateToTarget");

	Params::UBP_Flammable_ActiveCombustion_C_CanPropagateToTarget_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_IsTargetDeployableFoundation_IsDeployableFoundation = CallFunc_IsTargetDeployableFoundation_IsDeployableFoundation;
	Parms.CallFunc_IsTargetHeldByPlayer_IsOwningPlayer = CallFunc_IsTargetHeldByPlayer_IsOwningPlayer;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.IsTargetDeployableFoundation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FFlammableTargetIgnite      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               IsDeployableFoundation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeployableBase_C*        K2Node_DynamicCast_AsBP_Deployable_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Flammable_ActiveCombustion_C::IsTargetDeployableFoundation(const struct FFlammableTargetIgnite& Target, bool* IsDeployableFoundation, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "IsTargetDeployableFoundation");

	Params::UBP_Flammable_ActiveCombustion_C_IsTargetDeployableFoundation_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Deployable_Base = K2Node_DynamicCast_AsBP_Deployable_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDeployableFoundation != nullptr)
		*IsDeployableFoundation = Parms.IsDeployableFoundation;

}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.IsTargetHeldByPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FFlammableTargetIgnite      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               IsOwningPlayer                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Flammable_ActiveCombustion_C::IsTargetHeldByPlayer(const struct FFlammableTargetIgnite& Target, bool* IsOwningPlayer, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "IsTargetHeldByPlayer");

	Params::UBP_Flammable_ActiveCombustion_C_IsTargetHeldByPlayer_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Item = K2Node_DynamicCast_AsIcarus_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOwningPlayer != nullptr)
		*IsOwningPlayer = Parms.IsOwningPlayer;

}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.GetLocalBounds
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBoxSphereBounds            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCapsuleComponent*>   CallFunc_GetComponentsByTag_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCapsuleComponent*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            K2Node_MakeStruct_BoxSphereBounds                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            K2Node_MakeStruct_BoxSphereBounds_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FBoxSphereBounds UBP_Flammable_ActiveCombustion_C::GetLocalBounds(class AActor* CallFunc_GetOwner_ReturnValue, TArray<class UCapsuleComponent*>& CallFunc_GetComponentsByTag_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UCapsuleComponent* CallFunc_Array_Get_Item, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "GetLocalBounds");

	Params::UBP_Flammable_ActiveCombustion_C_GetLocalBounds_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_BoxSphereBounds = K2Node_MakeStruct_BoxSphereBounds;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_MakeStruct_BoxSphereBounds_1 = K2Node_MakeStruct_BoxSphereBounds_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.CanPropagate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EFlammablePropagationTypePropagationType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Flammable_ActiveCombustion_C::CanPropagate(enum class EFlammablePropagationType PropagationType, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "CanPropagate");

	Params::UBP_Flammable_ActiveCombustion_C_CanPropagate_Params Parms{};

	Parms.PropagationType = PropagationType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.OnFlammableInstanceAttached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_ActiveCombustion_C::OnFlammableInstanceAttached(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "OnFlammableInstanceAttached");

	Params::UBP_Flammable_ActiveCombustion_C_OnFlammableInstanceAttached_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.OnFlammableInstanceDetached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_ActiveCombustion_C::OnFlammableInstanceDetached(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "OnFlammableInstanceDetached");

	Params::UBP_Flammable_ActiveCombustion_C_OnFlammableInstanceDetached_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.OnFlammableInstanceState_Combusting_Enter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_ActiveCombustion_C::OnFlammableInstanceState_Combusting_Enter(class UFlammableInstance* Instance, class UFlammableState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "OnFlammableInstanceState_Combusting_Enter");

	Params::UBP_Flammable_ActiveCombustion_C_OnFlammableInstanceState_Combusting_Enter_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.OnFlammableInstanceState_Combusting_Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_ActiveCombustion_C::OnFlammableInstanceState_Combusting_Exit(class UFlammableInstance* Instance, class UFlammableState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "OnFlammableInstanceState_Combusting_Exit");

	Params::UBP_Flammable_ActiveCombustion_C_OnFlammableInstanceState_Combusting_Exit_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.OnActiveStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Flammable_ActiveCombustion_C::OnActiveStateChanged(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "OnActiveStateChanged");

	Params::UBP_Flammable_ActiveCombustion_C_OnActiveStateChanged_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Flammable_ActiveCombustion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.ExecuteUbergraph_BP_Flammable_ActiveCombustion
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFlammableInstance*          K2Node_Event_Instance_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_Event_Instance                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             CallFunc_GetFlammableState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             CallFunc_GetFlammableState_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UFlammableInstance*          K2Node_CustomEvent_Instance_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             K2Node_CustomEvent_State_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_CustomEvent_Instance                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             K2Node_CustomEvent_State                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeneratorComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActivateGenerator_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SkeletalItem_Wood_Flare_C*K2Node_DynamicCast_AsBP_Skeletal_Item_Wood_Flare                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeneratorComponent*         CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SkeletalItem_Wood_Flare_C*K2Node_DynamicCast_AsBP_Skeletal_Item_Wood_Flare_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsActive                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeneratorComponent*         CallFunc_GetTrait_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFlammableTargetExtinguish  CallFunc_MakeFlammableTargetExtinguishFromActor_ReturnValue      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FFlammableTarget            CallFunc_FlammableTargetExtinguishToFlammableTarget_ReturnValue  (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_TryExtinguishFlammableTarget_OutFlammableInstance       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFireExtinguishResult   CallFunc_TryExtinguishFlammableTarget_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_GetFlammableInstanceFromTarget_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlammableTargetIgnite      CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class ABP_SkeletalItem_LightBase_C*K2Node_DynamicCast_AsBP_Skeletal_Item_Light_Base                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlammableTarget            CallFunc_FlammableTargetIgniteToFlammableTarget_ReturnValue      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_GetFlammableInstanceFromTarget_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_TryIgniteFlammableTarget_OutInstance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryIgniteFlammableTarget_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentState_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Flammable_ActiveCombustion_C::ExecuteUbergraph_BP_Flammable_ActiveCombustion(int32 EntryPoint, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFlammableInstance* K2Node_Event_Instance_1, class UFlammableInstance* K2Node_Event_Instance, class UFlammableState* CallFunc_GetFlammableState_ReturnValue, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFlammableInstance* K2Node_CustomEvent_Instance_1, class UFlammableState* K2Node_CustomEvent_State_1, class UFlammableInstance* K2Node_CustomEvent_Instance, class UFlammableState* K2Node_CustomEvent_State, class AActor* CallFunc_GetOwner_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ActivateGenerator_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABP_SkeletalItem_Wood_Flare_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Wood_Flare, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class ABP_SkeletalItem_Wood_Flare_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Wood_Flare_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue_1, bool K2Node_CustomEvent_IsActive, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, enum class EValid CallFunc_GetTrait_Paths_2, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_2, const struct FFlammableTargetExtinguish& CallFunc_MakeFlammableTargetExtinguishFromActor_ReturnValue, const struct FFlammableTarget& CallFunc_FlammableTargetExtinguishToFlammableTarget_ReturnValue, class UFlammableInstance* CallFunc_TryExtinguishFlammableTarget_OutFlammableInstance, enum class EFireExtinguishResult CallFunc_TryExtinguishFlammableTarget_ReturnValue, class UFlammableInstance* CallFunc_GetFlammableInstanceFromTarget_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCurrentState_ReturnValue, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue, class ABP_SkeletalItem_LightBase_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Light_Base, bool K2Node_DynamicCast_bSuccess_2, const struct FFlammableTarget& CallFunc_FlammableTargetIgniteToFlammableTarget_ReturnValue, class UFlammableInstance* CallFunc_GetFlammableInstanceFromTarget_ReturnValue_1, class UFlammableInstance* CallFunc_TryIgniteFlammableTarget_OutInstance, bool CallFunc_TryIgniteFlammableTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCurrentState_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_ActiveCombustion_C", "ExecuteUbergraph_BP_Flammable_ActiveCombustion");

	Params::UBP_Flammable_ActiveCombustion_C_ExecuteUbergraph_BP_Flammable_ActiveCombustion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Instance_1 = K2Node_Event_Instance_1;
	Parms.K2Node_Event_Instance = K2Node_Event_Instance;
	Parms.CallFunc_GetFlammableState_ReturnValue = CallFunc_GetFlammableState_ReturnValue;
	Parms.CallFunc_GetFlammableState_ReturnValue_1 = CallFunc_GetFlammableState_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Instance_1 = K2Node_CustomEvent_Instance_1;
	Parms.K2Node_CustomEvent_State_1 = K2Node_CustomEvent_State_1;
	Parms.K2Node_CustomEvent_Instance = K2Node_CustomEvent_Instance;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_ActivateGenerator_ReturnValue = CallFunc_ActivateGenerator_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBP_Skeletal_Item_Wood_Flare = K2Node_DynamicCast_AsBP_Skeletal_Item_Wood_Flare;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Skeletal_Item_Wood_Flare_1 = K2Node_DynamicCast_AsBP_Skeletal_Item_Wood_Flare_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CustomEvent_IsActive = K2Node_CustomEvent_IsActive;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_GetTrait_Paths_2 = CallFunc_GetTrait_Paths_2;
	Parms.CallFunc_GetTrait_ReturnValue_2 = CallFunc_GetTrait_ReturnValue_2;
	Parms.CallFunc_MakeFlammableTargetExtinguishFromActor_ReturnValue = CallFunc_MakeFlammableTargetExtinguishFromActor_ReturnValue;
	Parms.CallFunc_FlammableTargetExtinguishToFlammableTarget_ReturnValue = CallFunc_FlammableTargetExtinguishToFlammableTarget_ReturnValue;
	Parms.CallFunc_TryExtinguishFlammableTarget_OutFlammableInstance = CallFunc_TryExtinguishFlammableTarget_OutFlammableInstance;
	Parms.CallFunc_TryExtinguishFlammableTarget_ReturnValue = CallFunc_TryExtinguishFlammableTarget_ReturnValue;
	Parms.CallFunc_GetFlammableInstanceFromTarget_ReturnValue = CallFunc_GetFlammableInstanceFromTarget_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsCurrentState_ReturnValue = CallFunc_IsCurrentState_ReturnValue;
	Parms.CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue = CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Skeletal_Item_Light_Base = K2Node_DynamicCast_AsBP_Skeletal_Item_Light_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_FlammableTargetIgniteToFlammableTarget_ReturnValue = CallFunc_FlammableTargetIgniteToFlammableTarget_ReturnValue;
	Parms.CallFunc_GetFlammableInstanceFromTarget_ReturnValue_1 = CallFunc_GetFlammableInstanceFromTarget_ReturnValue_1;
	Parms.CallFunc_TryIgniteFlammableTarget_OutInstance = CallFunc_TryIgniteFlammableTarget_OutInstance;
	Parms.CallFunc_TryIgniteFlammableTarget_ReturnValue = CallFunc_TryIgniteFlammableTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsCurrentState_ReturnValue_1 = CallFunc_IsCurrentState_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


