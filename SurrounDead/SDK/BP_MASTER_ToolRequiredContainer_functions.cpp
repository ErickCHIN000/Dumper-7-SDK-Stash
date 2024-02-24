#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C
// (Actor)

class UClass* ABP_MASTER_ToolRequiredContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MASTER_ToolRequiredContainer_C");

	return Clss;
}


// BP_MASTER_ToolRequiredContainer_C BP_MASTER_ToolRequiredContainer.Default__BP_MASTER_ToolRequiredContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MASTER_ToolRequiredContainer_C* ABP_MASTER_ToolRequiredContainer_C::GetDefaultObj()
{
	static class ABP_MASTER_ToolRequiredContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MASTER_ToolRequiredContainer_C*>(ABP_MASTER_ToolRequiredContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.ComponentsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorComponent*>     Components                                                       (Parm, OutParm, ContainsInstancedReference)

void ABP_MASTER_ToolRequiredContainer_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "ComponentsToSave");

	Params::ABP_MASTER_ToolRequiredContainer_C_ComponentsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Components != nullptr)
		*Components = std::move(Parms.Components);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.GetSettings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ChanceToProduceNoise                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Default_ChanceToProduceNoise                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DurationToHold                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::GetSettings(double* ChanceToProduceNoise, double* Default_ChanceToProduceNoise, double* DurationToHold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "GetSettings");

	Params::ABP_MASTER_ToolRequiredContainer_C_GetSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ChanceToProduceNoise != nullptr)
		*ChanceToProduceNoise = Parms.ChanceToProduceNoise;

	if (Default_ChanceToProduceNoise != nullptr)
		*Default_ChanceToProduceNoise = Parms.Default_ChanceToProduceNoise;

	if (DurationToHold != nullptr)
		*DurationToHold = Parms.DurationToHold;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.IsHeld?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Held_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::IsHeld_(bool* Held_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "IsHeld?");

	Params::ABP_MASTER_ToolRequiredContainer_C_IsHeld__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Held_ != nullptr)
		*Held_ = Parms.Held_;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_GetLootWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Result                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Valid_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_GetLootWidget(class UWidget** Result, bool* Valid_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_GetLootWidget");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_GetLootWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Valid_ != nullptr)
		*Valid_ = Parms.Valid_;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnContainersSwap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSIContainer_C*             Container1                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             Container2                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnContainersSwap(class UJSIContainer_C* Container1, class UJSIContainer_C* Container2, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnContainersSwap");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnContainersSwap_Params Parms{};

	Parms.Container1 = Container1;
	Parms.Container2 = Container2;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnItemDropped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnItemDropped(int32 ItemUID, int32 FromContainerUID, class AActor* ActorRef, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnItemDropped");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnItemDropped_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.ActorRef = ActorRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnItemRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        ToComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnItemRemoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* ToComponent, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnItemRemoved");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnItemRemoved_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.ToComponent = ToComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnItemAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        FromComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnItemAdded(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* FromComponent, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnItemAdded");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnItemAdded_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.FromComponent = FromComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnItemMoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnItemMoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnItemMoved");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnItemMoved_Params Parms{};

	Parms.ItemUID = ItemUID;
	Parms.FromContainerUID = FromContainerUID;
	Parms.TocontainerUID = TocontainerUID;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnMainContainerItemRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromContainerUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ContainerName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRepItemInfo                ItemRemovedInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnMainContainerItemRemoved(int32 FromContainerUID, int32 ItemUID, class FName ContainerName, const struct FRepItemInfo& ItemRemovedInfo, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnMainContainerItemRemoved");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnMainContainerItemRemoved_Params Parms{};

	Parms.FromContainerUID = FromContainerUID;
	Parms.ItemUID = ItemUID;
	Parms.ContainerName = ContainerName;
	Parms.ItemRemovedInfo = ItemRemovedInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnMainContainerItemAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToContainerName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRepItemInfo                ItemInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        FromMain                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorRef                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnMainContainerItemAdded(int32 TocontainerUID, int32 ItemUID, class FName ToContainerName, const struct FRepItemInfo& ItemInfo, class FName FromMain, bool* Result, class AActor** ActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnMainContainerItemAdded");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnMainContainerItemAdded_Params Parms{};

	Parms.TocontainerUID = TocontainerUID;
	Parms.ItemUID = ItemUID;
	Parms.ToContainerName = ToContainerName;
	Parms.ItemInfo = ItemInfo;
	Parms.FromMain = FromMain;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ActorRef != nullptr)
		*ActorRef = Parms.ActorRef;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnPickupAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRepItemInfo                Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              ItemUID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToContainer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnPickupAdded(const struct FRepItemInfo& Info, int32 ItemUID, int32 TocontainerUID, class FName ToContainer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnPickupAdded");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnPickupAdded_Params Parms{};

	Parms.Info = Info;
	Parms.ItemUID = ItemUID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.ToContainer = ToContainer;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnPickupEquipped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        ToContainerName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UID                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TocontainerUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRepItemInfo                Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnPickupEquipped(class AActor* ActorRef, class FName ToContainerName, int32 UID, int32 TocontainerUID, const struct FRepItemInfo& Info, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnPickupEquipped");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnPickupEquipped_Params Parms{};

	Parms.ActorRef = ActorRef;
	Parms.ToContainerName = ToContainerName;
	Parms.UID = UID;
	Parms.TocontainerUID = TocontainerUID;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnRequestDropItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRepItemInfo                ItemInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        ContainerName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorRef                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetDtRef_DTReference                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFItemInfo                  CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnRequestDropItem(const struct FRepItemInfo& ItemInfo, class FName ContainerName, class AActor** ActorRef, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, class UDataTable* CallFunc_GetDtRef_DTReference, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FFItemInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnRequestDropItem");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnRequestDropItem_Params Parms{};

	Parms.ItemInfo = ItemInfo;
	Parms.ContainerName = ContainerName;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetDtRef_DTReference = CallFunc_GetDtRef_DTReference;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ActorRef != nullptr)
		*ActorRef = Parms.ActorRef;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnItemConsumed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRepItemInfo                ConsumedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Remaining                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRepItemInfo                InsideOf                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        FromContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnItemConsumed(const struct FRepItemInfo& ConsumedItem, int32 Amount, int32 Remaining, const struct FRepItemInfo& InsideOf, class FName FromContainer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnItemConsumed");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnItemConsumed_Params Parms{};

	Parms.ConsumedItem = ConsumedItem;
	Parms.Amount = Amount;
	Parms.Remaining = Remaining;
	Parms.InsideOf = InsideOf;
	Parms.FromContainer = FromContainer;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnUpdateChamberUID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewUID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnUpdateChamberUID(int32 NewUID, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnUpdateChamberUID");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnUpdateChamberUID_Params Parms{};

	Parms.NewUID = NewUID;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigMP_OnTwoContainersSwap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FromContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToContainer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigMP_OnTwoContainersSwap(class FName FromContainer, class FName ToContainer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigMP_OnTwoContainersSwap");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigMP_OnTwoContainersSwap_Params Parms{};

	Parms.FromContainer = FromContainer;
	Parms.ToContainer = ToContainer;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.GetInteractOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableContext_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                Options                                                          (Parm, OutParm)
// TArray<class FText>                Stats                                                            (Parm, OutParm)

void ABP_MASTER_ToolRequiredContainer_C::GetInteractOptions(bool* EnableContext_, TArray<class FText>* Options, TArray<class FText>* Stats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "GetInteractOptions");

	Params::ABP_MASTER_ToolRequiredContainer_C_GetInteractOptions_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnableContext_ != nullptr)
		*EnableContext_ = Parms.EnableContext_;

	if (Options != nullptr)
		*Options = std::move(Parms.Options);

	if (Stats != nullptr)
		*Stats = std::move(Parms.Stats);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.OnRequestServerInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::OnRequestServerInteract(class AActor* Actor, int32 OptionIndex, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "OnRequestServerInteract");

	Params::ABP_MASTER_ToolRequiredContainer_C_OnRequestServerInteract_Params Parms{};

	Parms.Actor = Actor;
	Parms.OptionIndex = OptionIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.GetJigMultiplayerComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        JigComp                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::GetJigMultiplayerComponent(class UBP_JigMultiplayer_C** JigComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "GetJigMultiplayerComponent");

	Params::ABP_MASTER_ToolRequiredContainer_C_GetJigMultiplayerComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JigComp != nullptr)
		*JigComp = Parms.JigComp;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.GetItemInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                  Info                                                             (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_RandomStatsConfig        RandomStatsConfig                                                (Parm, OutParm, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::GetItemInfo(struct FFItemInfo* Info, struct FS_RandomStatsConfig* RandomStatsConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "GetItemInfo");

	Params::ABP_MASTER_ToolRequiredContainer_C_GetItemInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

	if (RandomStatsConfig != nullptr)
		*RandomStatsConfig = std::move(Parms.RandomStatsConfig);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigCanInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigCanInteract(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigCanInteract");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigCanInteract_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.JigSetCanInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanInteract                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnablePhysics                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "JigSetCanInteract");

	Params::ABP_MASTER_ToolRequiredContainer_C_JigSetCanInteract_Params Parms{};

	Parms.CanInteract = CanInteract;
	Parms.EnablePhysics = EnablePhysics;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.SetPickupCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::SetPickupCount(int32 NewCount, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "SetPickupCount");

	Params::ABP_MASTER_ToolRequiredContainer_C_SetPickupCount_Params Parms{};

	Parms.NewCount = NewCount;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.TraceForNoLootArea
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ouput                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::TraceForNoLootArea(bool* Ouput, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "TraceForNoLootArea");

	Params::ABP_MASTER_ToolRequiredContainer_C_TraceForNoLootArea_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ouput != nullptr)
		*Ouput = Parms.Ouput;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.SearchSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Spawn_                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::SearchSound(bool Spawn_, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "SearchSound");

	Params::ABP_MASTER_ToolRequiredContainer_C_SearchSound_Params Parms{};

	Parms.Spawn_ = Spawn_;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.HoldToInteract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevellingComponent_C*       CallFunc_GetLevellingComponent_LevellingComponent                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetGameHUD_HUD                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetHUD_HUD                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddXP_XPOutput                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetHUD_HUD_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPassiveSkillsComponent_C*   CallFunc_GetPassiveSkillsComponent_SkillsComponent               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPassiveSkillsComponent_C*   CallFunc_GetPassiveSkillsComponent_SkillsComponent_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInt_PassiveSkills_C>K2Node_DynamicCast_AsInt_Passive_Skills                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInt_PassiveSkills_C>K2Node_DynamicCast_AsInt_Passive_Skills_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::HoldToInteract(class ULevellingComponent_C* CallFunc_GetLevellingComponent_LevellingComponent, class AHUD_Game_C* CallFunc_GetGameHUD_HUD, class AHUD_Game_C* CallFunc_GetHUD_HUD, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_AddXP_XPOutput, int32 CallFunc_FTrunc_ReturnValue, class AHUD_Game_C* CallFunc_GetHUD_HUD_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, bool CallFunc_IsValid_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UPassiveSkillsComponent_C* CallFunc_GetPassiveSkillsComponent_SkillsComponent, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, class UPassiveSkillsComponent_C* CallFunc_GetPassiveSkillsComponent_SkillsComponent_1, TScriptInterface<class IInt_PassiveSkills_C> K2Node_DynamicCast_AsInt_Passive_Skills, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInt_PassiveSkills_C> K2Node_DynamicCast_AsInt_Passive_Skills_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "HoldToInteract");

	Params::ABP_MASTER_ToolRequiredContainer_C_HoldToInteract_Params Parms{};

	Parms.CallFunc_GetLevellingComponent_LevellingComponent = CallFunc_GetLevellingComponent_LevellingComponent;
	Parms.CallFunc_GetGameHUD_HUD = CallFunc_GetGameHUD_HUD;
	Parms.CallFunc_GetHUD_HUD = CallFunc_GetHUD_HUD;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_AddXP_XPOutput = CallFunc_AddXP_XPOutput;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetHUD_HUD_1 = CallFunc_GetHUD_HUD_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetPassiveSkillsComponent_SkillsComponent = CallFunc_GetPassiveSkillsComponent_SkillsComponent;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_GetPassiveSkillsComponent_SkillsComponent_1 = CallFunc_GetPassiveSkillsComponent_SkillsComponent_1;
	Parms.K2Node_DynamicCast_AsInt_Passive_Skills = K2Node_DynamicCast_AsInt_Passive_Skills;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsInt_Passive_Skills_1 = K2Node_DynamicCast_AsInt_Passive_Skills_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.TraceForActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ouput                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::TraceForActor(bool* Ouput, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "TraceForActor");

	Params::ABP_MASTER_ToolRequiredContainer_C_TraceForActor_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ouput != nullptr)
		*Ouput = Parms.Ouput;

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.DistanceOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::DistanceOutline(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "DistanceOutline");

	Params::ABP_MASTER_ToolRequiredContainer_C_DistanceOutline_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.NoiseEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD_Game_C*                 CallFunc_GetHUD_HUD                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_PlayerControllerInterface_C>K2Node_DynamicCast_AsBP_Player_Controller_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPassiveSkillsComponent_C*   CallFunc_GetPassiveSkillsComponent_SkillsComponent               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::NoiseEvent(class AHUD_Game_C* CallFunc_GetHUD_HUD, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBP_PlayerControllerInterface_C> K2Node_DynamicCast_AsBP_Player_Controller_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPassiveSkillsComponent_C* CallFunc_GetPassiveSkillsComponent_SkillsComponent, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "NoiseEvent");

	Params::ABP_MASTER_ToolRequiredContainer_C_NoiseEvent_Params Parms{};

	Parms.CallFunc_GetHUD_HUD = CallFunc_GetHUD_HUD;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_Interface = K2Node_DynamicCast_AsBP_Player_Controller_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetPassiveSkillsComponent_SkillsComponent = CallFunc_GetPassiveSkillsComponent_SkillsComponent;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.SetInspected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Inspected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class AHUD_Game_C*                 CallFunc_GetHUD_HUD                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::SetInspected(class FText InText, bool Inspected, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class AHUD_Game_C* CallFunc_GetHUD_HUD, class FText K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "SetInspected");

	Params::ABP_MASTER_ToolRequiredContainer_C_SetInspected_Params Parms{};

	Parms.InText = InText;
	Parms.Inspected = Inspected;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetHUD_HUD = CallFunc_GetHUD_HUD;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.CheckDistanceFromActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_JigCharacterInterface_C>K2Node_DynamicCast_AsBP_Jig_Character_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnInteractActorOverDistance_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::CheckDistanceFromActor(TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnInteractActorOverDistance_Result, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "CheckDistanceFromActor");

	Params::ABP_MASTER_ToolRequiredContainer_C_CheckDistanceFromActor_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Jig_Character_Interface = K2Node_DynamicCast_AsBP_Jig_Character_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_OnInteractActorOverDistance_Result = CallFunc_OnInteractActorOverDistance_Result;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.SetInteractDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::SetInteractDistance(class AActor* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "SetInteractDistance");

	Params::ABP_MASTER_ToolRequiredContainer_C_SetInteractDistance_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.ActorSaved
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::ActorSaved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "ActorSaved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.OnExecuteInteract_Dialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InteractingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::OnExecuteInteract_Dialogue(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "OnExecuteInteract_Dialogue");

	Params::ABP_MASTER_ToolRequiredContainer_C_OnExecuteInteract_Dialogue_Params Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.OnServerExecuteInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ByActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::OnServerExecuteInteract(int32 OptionIndex, class AActor* ByActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "OnServerExecuteInteract");

	Params::ABP_MASTER_ToolRequiredContainer_C_OnServerExecuteInteract_Params Parms{};

	Parms.OptionIndex = OptionIndex;
	Parms.ByActor = ByActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.SetInteractOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::SetInteractOption(int32 OptionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "SetInteractOption");

	Params::ABP_MASTER_ToolRequiredContainer_C_SetInteractOption_Params Parms{};

	Parms.OptionIndex = OptionIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.ActorPreSave
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::ActorPreSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "ActorPreSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.ActorLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::ActorLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "ActorLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsBeyondLastLayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LayerIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSeen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");

	Params::ABP_MASTER_ToolRequiredContainer_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature_Params Parms{};

	Parms.bIsBeyondLastLayer = bIsBeyondLastLayer;
	Parms.LayerIndex = LayerIndex;
	Parms.bIsSeen = bIsSeen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.PauseInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::PauseInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "PauseInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InteractingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::OnBeginInteract(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "OnBeginInteract");

	Params::ABP_MASTER_ToolRequiredContainer_C_OnBeginInteract_Params Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.OnEndInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::OnEndInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "OnEndInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.OnExecuteInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InteractingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::OnExecuteInteract(class AActor* InteractingActor, int32 OptionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "OnExecuteInteract");

	Params::ABP_MASTER_ToolRequiredContainer_C_OnExecuteInteract_Params Parms{};

	Parms.InteractingActor = InteractingActor;
	Parms.OptionIndex = OptionIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.Event_Outline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::Event_Outline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "Event_Outline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.OpenContainer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::OpenContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "OpenContainer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.Event_HoldToInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::Event_HoldToInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "Event_HoldToInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.OnStopExecuteInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InteractingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::OnStopExecuteInteract(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "OnStopExecuteInteract");

	Params::ABP_MASTER_ToolRequiredContainer_C_OnStopExecuteInteract_Params Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.OnExecuteInteractEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::OnExecuteInteractEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "OnExecuteInteractEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.ExecuteUbergraph_BP_MASTER_ToolRequiredContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractingActor_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OptionIndex_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ByActor                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OptionIndex_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsBeyondLastLayer                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_LayerIndex                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSeen                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TraceForNoLootArea_Ouput                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetHUD_HUD                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetHUD_HUD_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetHUD_HUD_2                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetGameHUD_HUD                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Append_Text_Return_Value                                (None)
// class AActor*                      K2Node_Event_InteractingActor_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractingActor_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OptionIndex                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ServerFindItemID_Result                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ServerFindItemID_UniqueServerID                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UPassiveSkillsComponent_C*   CallFunc_GetPassiveSkillsComponent_SkillsComponent               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_JigCharacterInterface_C>K2Node_DynamicCast_AsBP_Jig_Character_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_JigCharacterInterface_C>K2Node_DynamicCast_AsBP_Jig_Character_Interface_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractingActor                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Player_C>K2Node_DynamicCast_AsBPI_Player                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_3                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestServerData_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_SetupInventoryWidget_InventoryWidgetRef                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddJigWidgetToContent_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInventoryVisible__Result                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_RefillTimer_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MASTER_ToolRequiredContainer_C::ExecuteUbergraph_BP_MASTER_ToolRequiredContainer(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, class AActor* K2Node_Event_InteractingActor_3, int32 K2Node_Event_OptionIndex_2, class AActor* K2Node_Event_ByActor, int32 K2Node_Event_OptionIndex_1, bool Temp_bool_IsClosed_Variable, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, bool CallFunc_TraceForNoLootArea_Ouput, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_GetBoolCVar_ReturnValue_1, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, class AHUD_Game_C* CallFunc_GetHUD_HUD, class AHUD_Game_C* CallFunc_GetHUD_HUD_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AHUD_Game_C* CallFunc_GetHUD_HUD_2, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class AHUD_Game_C* CallFunc_GetGameHUD_HUD, class FText CallFunc_Append_Text_Return_Value, class AActor* K2Node_Event_InteractingActor_2, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, class AActor* K2Node_Event_InteractingActor_1, int32 K2Node_Event_OptionIndex, class UBP_JigMultiplayer_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_ServerFindItemID_Result, int32 CallFunc_ServerFindItemID_UniqueServerID, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UPassiveSkillsComponent_C* CallFunc_GetPassiveSkillsComponent_SkillsComponent, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_Event_InteractingActor, bool CallFunc_GetBoolCVar_ReturnValue_3, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_3, bool CallFunc_RequestServerData_Result, class UUserWidget* CallFunc_SetupInventoryWidget_InventoryWidgetRef, bool CallFunc_AddJigWidgetToContent_Result, bool CallFunc_IsInventoryVisible__Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue_4, double K2Node_VariableSet_RefillTimer_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "ExecuteUbergraph_BP_MASTER_ToolRequiredContainer");

	Params::ABP_MASTER_ToolRequiredContainer_C_ExecuteUbergraph_BP_MASTER_ToolRequiredContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_InteractingActor_3 = K2Node_Event_InteractingActor_3;
	Parms.K2Node_Event_OptionIndex_2 = K2Node_Event_OptionIndex_2;
	Parms.K2Node_Event_ByActor = K2Node_Event_ByActor;
	Parms.K2Node_Event_OptionIndex_1 = K2Node_Event_OptionIndex_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bIsBeyondLastLayer = K2Node_ComponentBoundEvent_bIsBeyondLastLayer;
	Parms.K2Node_ComponentBoundEvent_LayerIndex = K2Node_ComponentBoundEvent_LayerIndex;
	Parms.K2Node_ComponentBoundEvent_bIsSeen = K2Node_ComponentBoundEvent_bIsSeen;
	Parms.CallFunc_TraceForNoLootArea_Ouput = CallFunc_TraceForNoLootArea_Ouput;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetBoolCVar_ReturnValue_1 = CallFunc_GetBoolCVar_ReturnValue_1;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_1 = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_GetHUD_HUD = CallFunc_GetHUD_HUD;
	Parms.CallFunc_GetHUD_HUD_1 = CallFunc_GetHUD_HUD_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetHUD_HUD_2 = CallFunc_GetHUD_HUD_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue_2 = CallFunc_GetBoolCVar_ReturnValue_2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_GetGameHUD_HUD = CallFunc_GetGameHUD_HUD;
	Parms.CallFunc_Append_Text_Return_Value = CallFunc_Append_Text_Return_Value;
	Parms.K2Node_Event_InteractingActor_2 = K2Node_Event_InteractingActor_2;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.K2Node_Event_InteractingActor_1 = K2Node_Event_InteractingActor_1;
	Parms.K2Node_Event_OptionIndex = K2Node_Event_OptionIndex;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_ServerFindItemID_Result = CallFunc_ServerFindItemID_Result;
	Parms.CallFunc_ServerFindItemID_UniqueServerID = CallFunc_ServerFindItemID_UniqueServerID;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetPassiveSkillsComponent_SkillsComponent = CallFunc_GetPassiveSkillsComponent_SkillsComponent;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Jig_Character_Interface = K2Node_DynamicCast_AsBP_Jig_Character_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Jig_Character_Interface_1 = K2Node_DynamicCast_AsBP_Jig_Character_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_InteractingActor = K2Node_Event_InteractingActor;
	Parms.CallFunc_GetBoolCVar_ReturnValue_3 = CallFunc_GetBoolCVar_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBPI_Player = K2Node_DynamicCast_AsBPI_Player;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_SetTimer_ReturnValue_2 = CallFunc_K2_SetTimer_ReturnValue_2;
	Parms.CallFunc_K2_SetTimer_ReturnValue_3 = CallFunc_K2_SetTimer_ReturnValue_3;
	Parms.CallFunc_RequestServerData_Result = CallFunc_RequestServerData_Result;
	Parms.CallFunc_SetupInventoryWidget_InventoryWidgetRef = CallFunc_SetupInventoryWidget_InventoryWidgetRef;
	Parms.CallFunc_AddJigWidgetToContent_Result = CallFunc_AddJigWidgetToContent_Result;
	Parms.CallFunc_IsInventoryVisible__Result = CallFunc_IsInventoryVisible__Result;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue_4 = CallFunc_GetBoolCVar_ReturnValue_4;
	Parms.K2Node_VariableSet_RefillTimer_ImplicitCast = K2Node_VariableSet_RefillTimer_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MASTER_ToolRequiredContainer.BP_MASTER_ToolRequiredContainer_C.OpenedObject__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MASTER_ToolRequiredContainer_C::OpenedObject__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MASTER_ToolRequiredContainer_C", "OpenedObject__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


