#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponMaterialWear_03_Rare.BP_WeaponMaterialWear_03_Rare_C
// (None)

class UClass* UBP_WeaponMaterialWear_03_Rare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponMaterialWear_03_Rare_C");

	return Clss;
}


// BP_WeaponMaterialWear_03_Rare_C BP_WeaponMaterialWear_03_Rare.Default__BP_WeaponMaterialWear_03_Rare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WeaponMaterialWear_03_Rare_C* UBP_WeaponMaterialWear_03_Rare_C::GetDefaultObj()
{
	static class UBP_WeaponMaterialWear_03_Rare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WeaponMaterialWear_03_Rare_C*>(UBP_WeaponMaterialWear_03_Rare_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponMaterialWear_03_Rare.BP_WeaponMaterialWear_03_Rare_C.OnInitializeBalanceState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InventoryActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryBalanceStateComponent*InventoryBalanceState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponMaterialWear_03_Rare_C::OnInitializeBalanceState(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponMaterialWear_03_Rare_C", "OnInitializeBalanceState");

	Params::UBP_WeaponMaterialWear_03_Rare_C_OnInitializeBalanceState_Params Parms{};

	Parms.InventoryActor = InventoryActor;
	Parms.InventoryBalanceState = InventoryBalanceState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMaterialWear_03_Rare.BP_WeaponMaterialWear_03_Rare_C.OnInitializeComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InventoryActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryBalanceStateComponent*InventoryBalanceState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponMaterialWear_03_Rare_C::OnInitializeComponent(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponMaterialWear_03_Rare_C", "OnInitializeComponent");

	Params::UBP_WeaponMaterialWear_03_Rare_C_OnInitializeComponent_Params Parms{};

	Parms.InventoryActor = InventoryActor;
	Parms.InventoryBalanceState = InventoryBalanceState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMaterialWear_03_Rare.BP_WeaponMaterialWear_03_Rare_C.OnBeginPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InventoryActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryBalanceStateComponent*InventoryBalanceState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponMaterialWear_03_Rare_C::OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponMaterialWear_03_Rare_C", "OnBeginPlay");

	Params::UBP_WeaponMaterialWear_03_Rare_C_OnBeginPlay_Params Parms{};

	Parms.InventoryActor = InventoryActor;
	Parms.InventoryBalanceState = InventoryBalanceState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMaterialWear_03_Rare.BP_WeaponMaterialWear_03_Rare_C.ExecuteUbergraph_BP_WeaponMaterialWear_03_Rare
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InventoryActor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryBalanceStateComponent*K2Node_Event_InventoryBalanceState                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InventoryActor2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryBalanceStateComponent*K2Node_Event_InventoryBalanceState2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InventoryActor1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryBalanceStateComponent*K2Node_Event_InventoryBalanceState1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponMaterialWear_03_Rare_C::ExecuteUbergraph_BP_WeaponMaterialWear_03_Rare(int32 EntryPoint, class AActor* K2Node_Event_InventoryActor, class UInventoryBalanceStateComponent* K2Node_Event_InventoryBalanceState, class AActor* K2Node_Event_InventoryActor2, class UInventoryBalanceStateComponent* K2Node_Event_InventoryBalanceState2, class AActor* K2Node_Event_InventoryActor1, class UInventoryBalanceStateComponent* K2Node_Event_InventoryBalanceState1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponMaterialWear_03_Rare_C", "ExecuteUbergraph_BP_WeaponMaterialWear_03_Rare");

	Params::UBP_WeaponMaterialWear_03_Rare_C_ExecuteUbergraph_BP_WeaponMaterialWear_03_Rare_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InventoryActor = K2Node_Event_InventoryActor;
	Parms.K2Node_Event_InventoryBalanceState = K2Node_Event_InventoryBalanceState;
	Parms.K2Node_Event_InventoryActor2 = K2Node_Event_InventoryActor2;
	Parms.K2Node_Event_InventoryBalanceState2 = K2Node_Event_InventoryBalanceState2;
	Parms.K2Node_Event_InventoryActor1 = K2Node_Event_InventoryActor1;
	Parms.K2Node_Event_InventoryBalanceState1 = K2Node_Event_InventoryBalanceState1;

	UObject::ProcessEvent(Func, &Parms);

}

}


