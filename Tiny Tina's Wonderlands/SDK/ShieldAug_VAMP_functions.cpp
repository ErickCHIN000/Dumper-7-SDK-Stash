#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShieldAug_VAMP.ShieldAug_VAMP_C
// (None)

class UClass* UShieldAug_VAMP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShieldAug_VAMP_C");

	return Clss;
}


// ShieldAug_VAMP_C ShieldAug_VAMP.Default__ShieldAug_VAMP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShieldAug_VAMP_C* UShieldAug_VAMP_C::GetDefaultObj()
{
	static class UShieldAug_VAMP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShieldAug_VAMP_C*>(UShieldAug_VAMP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShieldAug_VAMP.ShieldAug_VAMP_C.K2_OnWeaponShotModified
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
// class AWeapon*                     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponShotModifierData     Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetValueFromStackCount_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShieldAug_VAMP_C::K2_OnWeaponShotModified(class AShield* Shield, struct FAugmentData& StackData, class AWeapon* Weapon, struct FWeaponShotModifierData& Data, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetValueFromStackCount_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldAug_VAMP_C", "K2_OnWeaponShotModified");

	Params::UShieldAug_VAMP_C_K2_OnWeaponShotModified_Params Parms{};

	Parms.Shield = Shield;
	Parms.StackData = StackData;
	Parms.Weapon = Weapon;
	Parms.Data = Data;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetValueFromStackCount_ReturnValue = CallFunc_GetValueFromStackCount_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue = CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


