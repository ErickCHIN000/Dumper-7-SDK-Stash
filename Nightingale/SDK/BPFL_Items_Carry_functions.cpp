#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Items_Carry.BPFL_Items_Carry_C
// (None)

class UClass* UBPFL_Items_Carry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Items_Carry_C");

	return Clss;
}


// BPFL_Items_Carry_C BPFL_Items_Carry.Default__BPFL_Items_Carry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Items_Carry_C* UBPFL_Items_Carry_C::GetDefaultObj()
{
	static class UBPFL_Items_Carry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Items_Carry_C*>(UBPFL_Items_Carry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Items_Carry.BPFL_Items_Carry_C.GetCarriedResource
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsCarryingResource                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Resource                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Carry_C>K2Node_DynamicCast_AsBPI_Carry                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetCarriedResource_ResourceItem                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCarriedResource_IsCarryingResource                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_Carry_C::GetCarriedResource(class AController*& Controller, class UObject* __WorldContext, bool* IsCarryingResource, class AEquippableItem** Resource, class APawn* Pawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Carry_C> K2Node_DynamicCast_AsBPI_Carry, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetCarriedResource_ResourceItem, bool CallFunc_GetCarriedResource_IsCarryingResource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Carry_C", "GetCarriedResource");

	Params::UBPFL_Items_Carry_C_GetCarriedResource_Params Parms{};

	Parms.Controller = Controller;
	Parms.__WorldContext = __WorldContext;
	Parms.Pawn = Pawn;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Carry = K2Node_DynamicCast_AsBPI_Carry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCarriedResource_ResourceItem = CallFunc_GetCarriedResource_ResourceItem;
	Parms.CallFunc_GetCarriedResource_IsCarryingResource = CallFunc_GetCarriedResource_IsCarryingResource;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCarryingResource != nullptr)
		*IsCarryingResource = Parms.IsCarryingResource;

	if (Resource != nullptr)
		*Resource = Parms.Resource;

}


// Function BPFL_Items_Carry.BPFL_Items_Carry_C.RemoveResourcesFromControllerHand
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceCountToRemove                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Entry                                                            (Edit, BlueprintVisible)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInControllerHand_IsCarryingResource              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItemInControllerHand_Item                            (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEquippableItemUtilityInterface>K2Node_DynamicCast_AsEquippable_Item_Utility_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_Carry_C::RemoveResourcesFromControllerHand(class AController*& Controller, int32 InstanceCountToRemove, class UObject* __WorldContext, const struct FInventoryEntry& Entry, class AEquippableItem* Temp_object_Variable, bool CallFunc_GetItemInControllerHand_IsCarryingResource, const struct FInventoryEntry& CallFunc_GetItemInControllerHand_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IEquippableItemUtilityInterface> K2Node_DynamicCast_AsEquippable_Item_Utility_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Carry_C", "RemoveResourcesFromControllerHand");

	Params::UBPFL_Items_Carry_C_RemoveResourcesFromControllerHand_Params Parms{};

	Parms.Controller = Controller;
	Parms.InstanceCountToRemove = InstanceCountToRemove;
	Parms.__WorldContext = __WorldContext;
	Parms.Entry = Entry;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetItemInControllerHand_IsCarryingResource = CallFunc_GetItemInControllerHand_IsCarryingResource;
	Parms.CallFunc_GetItemInControllerHand_Item = CallFunc_GetItemInControllerHand_Item;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsEquippable_Item_Utility_Interface = K2Node_DynamicCast_AsEquippable_Item_Utility_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Items_Carry.BPFL_Items_Carry_C.GetItemInControllerHand
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsCarryingResource                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (Parm, OutParm)
// class APawn*                       Pawn                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_Carry_C::GetItemInControllerHand(class AController*& Controller, class UObject* __WorldContext, bool* IsCarryingResource, struct FInventoryEntry* Item, class APawn* Pawn, class AEquippableItem* Temp_object_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Carry_C", "GetItemInControllerHand");

	Params::UBPFL_Items_Carry_C_GetItemInControllerHand_Params Parms{};

	Parms.Controller = Controller;
	Parms.__WorldContext = __WorldContext;
	Parms.Pawn = Pawn;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCarryingResource != nullptr)
		*IsCarryingResource = Parms.IsCarryingResource;

	if (Item != nullptr)
		*Item = std::move(Parms.Item);

}

}


