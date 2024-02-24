#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_UsesSecondarySpellMod.Condition_UsesSecondarySpellMod_C
// (None)

class UClass* UCondition_UsesSecondarySpellMod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_UsesSecondarySpellMod_C");

	return Clss;
}


// Condition_UsesSecondarySpellMod_C Condition_UsesSecondarySpellMod.Default__Condition_UsesSecondarySpellMod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_UsesSecondarySpellMod_C* UCondition_UsesSecondarySpellMod_C::GetDefaultObj()
{
	static class UCondition_UsesSecondarySpellMod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_UsesSecondarySpellMod_C*>(UCondition_UsesSecondarySpellMod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_UsesSecondarySpellMod.Condition_UsesSecondarySpellMod_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AOakPlayerController*        K2Node_DynamicCast_AsOak_Player_Controller                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_OakInventoryItemPickup_C*K2Node_DynamicCast_AsBP_Oak_Inventory_Item_Pickup                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetAssociatedCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_UsesSecondarySpellMod_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_OakInventoryItemPickup_C* K2Node_DynamicCast_AsBP_Oak_Inventory_Item_Pickup, bool K2Node_DynamicCast_bSuccess1, class ACharacter* CallFunc_GetAssociatedCharacter_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_UsesSecondarySpellMod_C", "EvaluateCondition");

	Params::UCondition_UsesSecondarySpellMod_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsOak_Player_Controller = K2Node_DynamicCast_AsOak_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Oak_Inventory_Item_Pickup = K2Node_DynamicCast_AsBP_Oak_Inventory_Item_Pickup;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetAssociatedCharacter_ReturnValue = CallFunc_GetAssociatedCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


