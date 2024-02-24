#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C
// (None)

class UClass* UBP_HYP_Shield_AmpDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HYP_Shield_AmpDamage_C");

	return Clss;
}


// BP_HYP_Shield_AmpDamage_C BP_HYP_Shield_AmpDamage.Default__BP_HYP_Shield_AmpDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HYP_Shield_AmpDamage_C* UBP_HYP_Shield_AmpDamage_C::GetDefaultObj()
{
	static class UBP_HYP_Shield_AmpDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HYP_Shield_AmpDamage_C*>(UBP_HYP_Shield_AmpDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnShieldCreated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_HYP_Shield_AmpDamage_C::OnShieldCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HYP_Shield_AmpDamage_C", "OnShieldCreated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnTakeWeaponShieldDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ShieldDamage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HYP_Shield_AmpDamage_C::OnTakeWeaponShieldDamage(class UDamageComponent* DamageReceiver, float ShieldDamage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HYP_Shield_AmpDamage_C", "OnTakeWeaponShieldDamage");

	Params::UBP_HYP_Shield_AmpDamage_C_OnTakeWeaponShieldDamage_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.ShieldDamage = ShieldDamage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnShieldBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HYP_Shield_AmpDamage_C::OnShieldBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HYP_Shield_AmpDamage_C", "OnShieldBreak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.Weapon Equip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HYP_Shield_AmpDamage_C::Weapon_Equip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HYP_Shield_AmpDamage_C", "Weapon Equip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.Weapon Put Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HYP_Shield_AmpDamage_C::Weapon_Put_Down(class AWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HYP_Shield_AmpDamage_C", "Weapon Put Down");

	Params::UBP_HYP_Shield_AmpDamage_C_Weapon_Put_Down_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnWeaponUsed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_HYP_Shield_AmpDamage_C::OnWeaponUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HYP_Shield_AmpDamage_C", "OnWeaponUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.ExecuteUbergraph_BP_HYP_Shield_AmpDamage
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStatusEffectStackCount_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageComponent*            K2Node_CustomEvent_DamageReceiver                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ShieldDamage                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_CustomEvent_Weapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     CallFunc_GetWeapon_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// int32                              CallFunc_GetStatusEffectStackCount_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UBP_HYP_Shield_AmpDamage_C::ExecuteUbergraph_BP_HYP_Shield_AmpDamage(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_GetStatusEffectStackCount_ReturnValue, class UDamageComponent* K2Node_CustomEvent_DamageReceiver, float K2Node_CustomEvent_ShieldDamage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AController* K2Node_CustomEvent_InstigatedBy, class UDamageCauserComponent* K2Node_CustomEvent_DamageCauser, class AWeapon* K2Node_CustomEvent_Weapon, class AWeapon* CallFunc_GetWeapon_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, class APawn* CallFunc_GetInstigator_ReturnValue1, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, int32 CallFunc_GetStatusEffectStackCount_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HYP_Shield_AmpDamage_C", "ExecuteUbergraph_BP_HYP_Shield_AmpDamage");

	Params::UBP_HYP_Shield_AmpDamage_C_ExecuteUbergraph_BP_HYP_Shield_AmpDamage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetStatusEffectStackCount_ReturnValue = CallFunc_GetStatusEffectStackCount_ReturnValue;
	Parms.K2Node_CustomEvent_DamageReceiver = K2Node_CustomEvent_DamageReceiver;
	Parms.K2Node_CustomEvent_ShieldDamage = K2Node_CustomEvent_ShieldDamage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_Weapon = K2Node_CustomEvent_Weapon;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_GetInstigator_ReturnValue1 = CallFunc_GetInstigator_ReturnValue1;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_GetStatusEffectStackCount_ReturnValue1 = CallFunc_GetStatusEffectStackCount_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


