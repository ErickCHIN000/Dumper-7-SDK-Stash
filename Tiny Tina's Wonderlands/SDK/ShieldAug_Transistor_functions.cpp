#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShieldAug_Transistor.ShieldAug_Transistor_C
// (None)

class UClass* UShieldAug_Transistor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShieldAug_Transistor_C");

	return Clss;
}


// ShieldAug_Transistor_C ShieldAug_Transistor.Default__ShieldAug_Transistor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShieldAug_Transistor_C* UShieldAug_Transistor_C::GetDefaultObj()
{
	static class UShieldAug_Transistor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShieldAug_Transistor_C*>(UShieldAug_Transistor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShieldAug_Transistor.ShieldAug_Transistor_C.K2_OnShieldUnequipped
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               Equipper                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)

void UShieldAug_Transistor_C::K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData& StackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldAug_Transistor_C", "K2_OnShieldUnequipped");

	Params::UShieldAug_Transistor_C_K2_OnShieldUnequipped_Params Parms{};

	Parms.Shield = Shield;
	Parms.Equipper = Equipper;
	Parms.StackData = StackData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShieldAug_Transistor.ShieldAug_Transistor_C.K2_OnShieldDepleted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)

void UShieldAug_Transistor_C::K2_OnShieldDepleted(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldAug_Transistor_C", "K2_OnShieldDepleted");

	Params::UShieldAug_Transistor_C_K2_OnShieldDepleted_Params Parms{};

	Parms.Shield = Shield;
	Parms.ResourcePool = ResourcePool;
	Parms.StackData = StackData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShieldAug_Transistor.ShieldAug_Transistor_C.ClearPreviousStatusEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ElementArrayIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShieldAug_Transistor_C::ClearPreviousStatusEffect(class AShield* Shield, int32 ElementArrayIndex, int32 Temp_int_Variable, class UStatusEffectData* Temp_object_Variable, class UStatusEffectData* Temp_object_Variable1, class UStatusEffectData* Temp_object_Variable2, class UStatusEffectData* Temp_object_Variable3, class UStatusEffectData* Temp_object_Variable4, class UStatusEffectData* Temp_object_Variable5, class UStatusEffectData* K2Node_Select_Default, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldAug_Transistor_C", "ClearPreviousStatusEffect");

	Params::UShieldAug_Transistor_C_ClearPreviousStatusEffect_Params Parms{};

	Parms.Shield = Shield;
	Parms.ElementArrayIndex = ElementArrayIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShieldAug_Transistor.ShieldAug_Transistor_C.K2_OnDamageTaken
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
// class UDamageComponent*            DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReceivedDamageDetails      Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetElementalType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectData*           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UShieldAug_Transistor_C::K2_OnDamageTaken(class AShield* Shield, struct FAugmentData& StackData, class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, struct FReceivedDamageDetails& Details, int32 Temp_int_Variable, enum class EOakElementalType CallFunc_GetElementalType_ReturnValue, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, enum class EOakElementalType Temp_byte_Variable, class UStatusEffectData* Temp_object_Variable, class UStatusEffectData* Temp_object_Variable1, class UStatusEffectData* Temp_object_Variable2, class UStatusEffectData* Temp_object_Variable3, class UStatusEffectData* Temp_object_Variable4, class UStatusEffectData* Temp_object_Variable5, class UStatusEffectData* K2Node_Select_Default, enum class EOakElementalType Temp_byte_Variable1, bool CallFunc_IsValid_ReturnValue, int32 K2Node_Select1_Default, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldAug_Transistor_C", "K2_OnDamageTaken");

	Params::UShieldAug_Transistor_C_K2_OnDamageTaken_Params Parms{};

	Parms.Shield = Shield;
	Parms.StackData = StackData;
	Parms.DamageReceiver = DamageReceiver;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.Details = Details;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetElementalType_ReturnValue = CallFunc_GetElementalType_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


