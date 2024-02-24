#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C
// (None)

class UClass* UBP_HYP_Shield_RestoreAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HYP_Shield_RestoreAmmo_C");

	return Clss;
}


// BP_HYP_Shield_RestoreAmmo_C BP_HYP_Shield_RestoreAmmo.Default__BP_HYP_Shield_RestoreAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HYP_Shield_RestoreAmmo_C* UBP_HYP_Shield_RestoreAmmo_C::GetDefaultObj()
{
	static class UBP_HYP_Shield_RestoreAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HYP_Shield_RestoreAmmo_C*>(UBP_HYP_Shield_RestoreAmmo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnShieldCreated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_HYP_Shield_RestoreAmmo_C::OnShieldCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HYP_Shield_RestoreAmmo_C", "OnShieldCreated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnTakeWeaponShieldDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ShieldDamage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HYP_Shield_RestoreAmmo_C::OnTakeWeaponShieldDamage(class UDamageComponent* DamageReceiver, float ShieldDamage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HYP_Shield_RestoreAmmo_C", "OnTakeWeaponShieldDamage");

	Params::UBP_HYP_Shield_RestoreAmmo_C_OnTakeWeaponShieldDamage_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.ShieldDamage = ShieldDamage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     CallFunc_GetWeapon_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     CallFunc_GetWeapon_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageComponent*            K2Node_CustomEvent_DamageReceiver                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ShieldDamage                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     CallFunc_GetWeapon_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HYP_Shield_RestoreAmmo_C::ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue1, class UDamageComponent* K2Node_CustomEvent_DamageReceiver, float K2Node_CustomEvent_ShieldDamage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AController* K2Node_CustomEvent_InstigatedBy, class UDamageCauserComponent* K2Node_CustomEvent_DamageCauser, class AWeapon* CallFunc_GetWeapon_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HYP_Shield_RestoreAmmo_C", "ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo");

	Params::UBP_HYP_Shield_RestoreAmmo_C_ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.CallFunc_GetWeapon_ReturnValue1 = CallFunc_GetWeapon_ReturnValue1;
	Parms.K2Node_CustomEvent_DamageReceiver = K2Node_CustomEvent_DamageReceiver;
	Parms.K2Node_CustomEvent_ShieldDamage = K2Node_CustomEvent_ShieldDamage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.CallFunc_GetWeapon_ReturnValue2 = CallFunc_GetWeapon_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


