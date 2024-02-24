#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass guitar_usable_child_actor.guitar_usable_child_actor_C
// (Actor)

class UClass* AGuitar_usable_child_actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("guitar_usable_child_actor_C");

	return Clss;
}


// guitar_usable_child_actor_C guitar_usable_child_actor.Default__guitar_usable_child_actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGuitar_usable_child_actor_C* AGuitar_usable_child_actor_C::GetDefaultObj()
{
	static class AGuitar_usable_child_actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGuitar_usable_child_actor_C*>(AGuitar_usable_child_actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function guitar_usable_child_actor.guitar_usable_child_actor_C.MoveBackToInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              Local_Item                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// enum class Enum_LuteType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGuitar_usable_child_actor_C::MoveBackToInventory(const struct FInventoryItem& Local_Item, enum class Enum_LuteType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName K2Node_Select_Default, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("guitar_usable_child_actor_C", "MoveBackToInventory");

	Params::AGuitar_usable_child_actor_C_MoveBackToInventory_Params Parms{};

	Parms.Local_Item = Local_Item;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function guitar_usable_child_actor.guitar_usable_child_actor_C.CheckIfCanPickupLute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class Enum_LuteType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGuitar_usable_child_actor_C::CheckIfCanPickupLute(enum class Enum_LuteType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue, class FName K2Node_Select_Default, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("guitar_usable_child_actor_C", "CheckIfCanPickupLute");

	Params::AGuitar_usable_child_actor_C_CheckIfCanPickupLute_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function guitar_usable_child_actor.guitar_usable_child_actor_C.OnActorUsed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_LuteType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfCanPickupLute_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGuitar_usable_child_actor_C::OnActorUsed(class APlayerController* Controller, bool* Success, enum class Enum_LuteType Temp_byte_Variable, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, bool CallFunc_CheckIfCanPickupLute_ReturnValue, class FName K2Node_Select_Default, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("guitar_usable_child_actor_C", "OnActorUsed");

	Params::AGuitar_usable_child_actor_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_CheckIfCanPickupLute_ReturnValue = CallFunc_CheckIfCanPickupLute_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function guitar_usable_child_actor.guitar_usable_child_actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGuitar_usable_child_actor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("guitar_usable_child_actor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function guitar_usable_child_actor.guitar_usable_child_actor_C.CheckIfPlayerHasGuitarInInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGuitar_usable_child_actor_C::CheckIfPlayerHasGuitarInInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("guitar_usable_child_actor_C", "CheckIfPlayerHasGuitarInInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function guitar_usable_child_actor.guitar_usable_child_actor_C.ExecuteUbergraph_guitar_usable_child_actor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMyNameInChangedSet_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfCanPickupLute_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void AGuitar_usable_child_actor_C::ExecuteUbergraph_guitar_usable_child_actor(int32 EntryPoint, bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_CheckIfCanPickupLute_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("guitar_usable_child_actor_C", "ExecuteUbergraph_guitar_usable_child_actor");

	Params::AGuitar_usable_child_actor_C_ExecuteUbergraph_guitar_usable_child_actor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMyNameInChangedSet_ReturnValue = CallFunc_IsMyNameInChangedSet_ReturnValue;
	Parms.CallFunc_CheckIfCanPickupLute_ReturnValue = CallFunc_CheckIfCanPickupLute_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


