#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C
// (Actor)

class UClass* ABPAmmoItem_AllAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAmmoItem_AllAmmo_C");

	return Clss;
}


// BPAmmoItem_AllAmmo_C BPAmmoItem_AllAmmo.Default__BPAmmoItem_AllAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPAmmoItem_AllAmmo_C* ABPAmmoItem_AllAmmo_C::GetDefaultObj()
{
	static class ABPAmmoItem_AllAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPAmmoItem_AllAmmo_C*>(ABPAmmoItem_AllAmmo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void ABPAmmoItem_AllAmmo_C::ReceiveBeginPlay(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAmmoItem_AllAmmo_C", "ReceiveBeginPlay");

	Params::ABPAmmoItem_AllAmmo_C_ReceiveBeginPlay_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.FillAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AOakCharacter*               PickupInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAttributeData*           CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAttributeData*           MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_AddModifierToGbxAttribute_ModifierActionResult          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_AddModifierToGbxAttribute_ReturnValue                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPAmmoItem_AllAmmo_C::FillAmmo(class AOakCharacter* PickupInstigator, class UGbxAttributeData* CurrentValue, class UGbxAttributeData* MaxValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAmmoItem_AllAmmo_C", "FillAmmo");

	Params::ABPAmmoItem_AllAmmo_C_FillAmmo_Params Parms{};

	Parms.PickupInstigator = PickupInstigator;
	Parms.CurrentValue = CurrentValue;
	Parms.MaxValue = MaxValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_AddModifierToGbxAttribute_ModifierActionResult = CallFunc_AddModifierToGbxAttribute_ModifierActionResult;
	Parms.CallFunc_AddModifierToGbxAttribute_ReturnValue = CallFunc_AddModifierToGbxAttribute_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.PickedUp
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AOakCharacter*               PickupInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIsPlayerExecOutput     CallFunc_BranchOnIsPlayer_Branches                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPAmmoItem_AllAmmo_C::PickedUp(class AOakCharacter* PickupInstigator, enum class EIsPlayerExecOutput CallFunc_BranchOnIsPlayer_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAmmoItem_AllAmmo_C", "PickedUp");

	Params::ABPAmmoItem_AllAmmo_C_PickedUp_Params Parms{};

	Parms.PickupInstigator = PickupInstigator;
	Parms.CallFunc_BranchOnIsPlayer_Branches = CallFunc_BranchOnIsPlayer_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.CanBePickedUp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AOakCharacter*               PickupInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsedByInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AInventoryItemPickup*        WorldPickupActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBePickedUp_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_EvaluateCondition_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABPAmmoItem_AllAmmo_C::CanBePickedUp(class AOakCharacter* PickupInstigator, int32 Quantity, bool UsedByInstigator, class AInventoryItemPickup* WorldPickupActor, bool CallFunc_CanBePickedUp_ReturnValue, bool CallFunc_IsPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_EvaluateCondition_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAmmoItem_AllAmmo_C", "CanBePickedUp");

	Params::ABPAmmoItem_AllAmmo_C_CanBePickedUp_Params Parms{};

	Parms.PickupInstigator = PickupInstigator;
	Parms.Quantity = Quantity;
	Parms.UsedByInstigator = UsedByInstigator;
	Parms.WorldPickupActor = WorldPickupActor;
	Parms.CallFunc_CanBePickedUp_ReturnValue = CallFunc_CanBePickedUp_ReturnValue;
	Parms.CallFunc_IsPlayer_ReturnValue = CallFunc_IsPlayer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_EvaluateCondition_ReturnValue = CallFunc_K2_EvaluateCondition_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


