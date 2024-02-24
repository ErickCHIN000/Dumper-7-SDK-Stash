#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Actionable_Bandage_Consumable.BP_Actionable_Bandage_Consumable_C
// (None)

class UClass* UBP_Actionable_Bandage_Consumable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Actionable_Bandage_Consumable_C");

	return Clss;
}


// BP_Actionable_Bandage_Consumable_C BP_Actionable_Bandage_Consumable.Default__BP_Actionable_Bandage_Consumable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Actionable_Bandage_Consumable_C* UBP_Actionable_Bandage_Consumable_C::GetDefaultObj()
{
	static class UBP_Actionable_Bandage_Consumable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Actionable_Bandage_Consumable_C*>(UBP_Actionable_Bandage_Consumable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Actionable_Bandage_Consumable.BP_Actionable_Bandage_Consumable_C.CanHold
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_Actionable_Bandage_Consumable_C::CanHold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actionable_Bandage_Consumable_C", "CanHold");

	Params::UBP_Actionable_Bandage_Consumable_C_CanHold_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Actionable_Bandage_Consumable.BP_Actionable_Bandage_Consumable_C.CompleteHold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Actionable_Bandage_Consumable_C::CompleteHold(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actionable_Bandage_Consumable_C", "CompleteHold");

	Params::UBP_Actionable_Bandage_Consumable_C_CompleteHold_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Actionable_Bandage_Consumable.BP_Actionable_Bandage_Consumable_C.ExecuteUbergraph_BP_Actionable_Bandage_Consumable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetPlayer_OwningPlayer                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Success                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemInventoryAndSlot_Validity                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Actionable_Bandage_Consumable_C::ExecuteUbergraph_BP_Actionable_Bandage_Consumable(int32 EntryPoint, class AIcarusPlayerCharacter* CallFunc_GetPlayer_OwningPlayer, bool K2Node_Event_Success, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actionable_Bandage_Consumable_C", "ExecuteUbergraph_BP_Actionable_Bandage_Consumable");

	Params::UBP_Actionable_Bandage_Consumable_C_ExecuteUbergraph_BP_Actionable_Bandage_Consumable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayer_OwningPlayer = CallFunc_GetPlayer_OwningPlayer;
	Parms.K2Node_Event_Success = K2Node_Event_Success;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_Validity = CallFunc_GetFocusedItemInventoryAndSlot_Validity;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


