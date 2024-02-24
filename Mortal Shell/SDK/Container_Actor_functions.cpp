#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Container_Actor.Container_Actor_C
// (Actor)

class UClass* AContainer_Actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Container_Actor_C");

	return Clss;
}


// Container_Actor_C Container_Actor.Default__Container_Actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AContainer_Actor_C* AContainer_Actor_C::GetDefaultObj()
{
	static class AContainer_Actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AContainer_Actor_C*>(AContainer_Actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Container_Actor.Container_Actor_C.ContainerLooted
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class APlayerState*>        LocalViewers                                                     (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AContainer_Actor_C::ContainerLooted(bool* Success, const TArray<class APlayerState*>& LocalViewers, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Actor_C", "ContainerLooted");

	Params::AContainer_Actor_C_ContainerLooted_Params Parms{};

	Parms.LocalViewers = LocalViewers;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Container_Actor.Container_Actor_C.GetCanStoreItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanStoreItems                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AContainer_Actor_C::GetCanStoreItems(bool* CanStoreItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Actor_C", "GetCanStoreItems");

	Params::AContainer_Actor_C_GetCanStoreItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanStoreItems != nullptr)
		*CanStoreItems = Parms.CanStoreItems;

}


// Function Container_Actor.Container_Actor_C.GetPlayersViewing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerState*>        PlayersViewing                                                   (Parm, OutParm, HasGetValueTypeHash)

void AContainer_Actor_C::GetPlayersViewing(TArray<class APlayerState*>* PlayersViewing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Actor_C", "GetPlayersViewing");

	Params::AContainer_Actor_C_GetPlayersViewing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PlayersViewing != nullptr)
		*PlayersViewing = std::move(Parms.PlayersViewing);

}


// Function Container_Actor.Container_Actor_C.GetContainerProperties
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)
// uint8                              SlotsPerRow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStorageContainer                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InventorySize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AContainer_Actor_C::GetContainerProperties(class FText* Name, uint8* SlotsPerRow, bool* IsStorageContainer, int32* InventorySize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Actor_C", "GetContainerProperties");

	Params::AContainer_Actor_C_GetContainerProperties_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (SlotsPerRow != nullptr)
		*SlotsPerRow = Parms.SlotsPerRow;

	if (IsStorageContainer != nullptr)
		*IsStorageContainer = Parms.IsStorageContainer;

	if (InventorySize != nullptr)
		*InventorySize = Parms.InventorySize;

}


// Function Container_Actor.Container_Actor_C.GetContainerInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       InventoryComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AContainer_Actor_C::GetContainerInventory(class UInventoryComponent_C** InventoryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Actor_C", "GetContainerInventory");

	Params::AContainer_Actor_C_GetContainerInventory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InventoryComponent != nullptr)
		*InventoryComponent = Parms.InventoryComponent;

}


// Function Container_Actor.Container_Actor_C.OnActorUsed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainerLooted_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AContainer_Actor_C::OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_ContainerLooted_Success, const struct FInventoryItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Actor_C", "OnActorUsed");

	Params::AContainer_Actor_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_ContainerLooted_Success = CallFunc_ContainerLooted_Success;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Container_Actor.Container_Actor_C.LoadInventoryItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      InventoryItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadInventoryItems_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AContainer_Actor_C::LoadInventoryItems(int32 InventorySize, TArray<struct FInventoryItem>& InventoryItems, bool* Success, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_LoadInventoryItems_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Actor_C", "LoadInventoryItems");

	Params::AContainer_Actor_C_LoadInventoryItems_Params Parms{};

	Parms.InventorySize = InventorySize;
	Parms.InventoryItems = InventoryItems;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_LoadInventoryItems_Success = CallFunc_LoadInventoryItems_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Container_Actor.Container_Actor_C.InitializeInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AContainer_Actor_C::InitializeInventory(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Actor_C", "InitializeInventory");

	Params::AContainer_Actor_C_InitializeInventory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Container_Actor.Container_Actor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AContainer_Actor_C::UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Actor_C", "UserConstructionScript");

	Params::AContainer_Actor_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Container_Actor.Container_Actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AContainer_Actor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Actor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container_Actor.Container_Actor_C.ExecuteUbergraph_Container_Actor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeInventory_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AContainer_Actor_C::ExecuteUbergraph_Container_Actor(int32 EntryPoint, bool CallFunc_InitializeInventory_Success, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Actor_C", "ExecuteUbergraph_Container_Actor");

	Params::AContainer_Actor_C_ExecuteUbergraph_Container_Actor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_InitializeInventory_Success = CallFunc_InitializeInventory_Success;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


