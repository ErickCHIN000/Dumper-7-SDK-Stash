#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_CircleOfProtection_Mod_04.SpellActor_CircleOfProtection_Mod_04_C
// (Actor)

class UClass* ASpellActor_CircleOfProtection_Mod_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_CircleOfProtection_Mod_04_C");

	return Clss;
}


// SpellActor_CircleOfProtection_Mod_04_C SpellActor_CircleOfProtection_Mod_04.Default__SpellActor_CircleOfProtection_Mod_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_CircleOfProtection_Mod_04_C* ASpellActor_CircleOfProtection_Mod_04_C::GetDefaultObj()
{
	static class ASpellActor_CircleOfProtection_Mod_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_CircleOfProtection_Mod_04_C*>(ASpellActor_CircleOfProtection_Mod_04_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_CircleOfProtection_Mod_04.SpellActor_CircleOfProtection_Mod_04_C.PulseSelfCastDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetDataTableValue_OutValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGbx_Damage_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCauseDamageStatusEffectOverridesK2Node_MakeStruct_CauseDamageStatusEffectOverrides               (NoDestructor)

void ASpellActor_CircleOfProtection_Mod_04_C::PulseSelfCastDamage(float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FHitResult& Temp_struct_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_CircleOfProtection_Mod_04_C", "PulseSelfCastDamage");

	Params::ASpellActor_CircleOfProtection_Mod_04_C_PulseSelfCastDamage_Params Parms{};

	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.K2Node_ClassDynamicCast_AsGbx_Damage_Type = K2Node_ClassDynamicCast_AsGbx_Damage_Type;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_CauseDamageStatusEffectOverrides = K2Node_MakeStruct_CauseDamageStatusEffectOverrides;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_CircleOfProtection_Mod_04.SpellActor_CircleOfProtection_Mod_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_CircleOfProtection_Mod_04_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_CircleOfProtection_Mod_04_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_CircleOfProtection_Mod_04.SpellActor_CircleOfProtection_Mod_04_C.SetupMod4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_CircleOfProtection_Mod_04_C::SetupMod4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_CircleOfProtection_Mod_04_C", "SetupMod4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_CircleOfProtection_Mod_04.SpellActor_CircleOfProtection_Mod_04_C.SpawnFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_CircleOfProtection_Mod_04_C::SpawnFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_CircleOfProtection_Mod_04_C", "SpawnFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_CircleOfProtection_Mod_04.SpellActor_CircleOfProtection_Mod_04_C.InitialMaterialSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_CircleOfProtection_Mod_04_C::InitialMaterialSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_CircleOfProtection_Mod_04_C", "InitialMaterialSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_CircleOfProtection_Mod_04.SpellActor_CircleOfProtection_Mod_04_C.SpawnDecal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_CircleOfProtection_Mod_04_C::SpawnDecal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_CircleOfProtection_Mod_04_C", "SpawnDecal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_CircleOfProtection_Mod_04.SpellActor_CircleOfProtection_Mod_04_C.DoCircleDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_CircleOfProtection_Mod_04_C::DoCircleDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_CircleOfProtection_Mod_04_C", "DoCircleDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_CircleOfProtection_Mod_04.SpellActor_CircleOfProtection_Mod_04_C.ExecuteUbergraph_SpellActor_CircleOfProtection_Mod_04
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)

void ASpellActor_CircleOfProtection_Mod_04_C::ExecuteUbergraph_SpellActor_CircleOfProtection_Mod_04(int32 EntryPoint, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable1, class UParticleSystem* Temp_object_Variable2, class UParticleSystem* Temp_object_Variable3, class UParticleSystem* Temp_object_Variable4, enum class EOakElementalType Temp_byte_Variable, class UParticleSystem* Temp_object_Variable5, class UParticleSystem* Temp_object_Variable6, class UParticleSystem* Temp_object_Variable7, class UParticleSystem* Temp_object_Variable8, class UParticleSystem* Temp_object_Variable9, class UParticleSystem* Temp_object_Variable10, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UParticleSystem* K2Node_Select_Default, class UParticleSystem* Temp_object_Variable11, enum class EOakElementalType Temp_byte_Variable1, class UParticleSystem* K2Node_Select1_Default, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_CircleOfProtection_Mod_04_C", "ExecuteUbergraph_SpellActor_CircleOfProtection_Mod_04");

	Params::ASpellActor_CircleOfProtection_Mod_04_C_ExecuteUbergraph_SpellActor_CircleOfProtection_Mod_04_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_object_Variable10 = Temp_object_Variable10;
	Parms.CallFunc_GetClassElementalType_ReturnValue = CallFunc_GetClassElementalType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_object_Variable11 = Temp_object_Variable11;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetClassElementalType_ReturnValue1 = CallFunc_GetClassElementalType_ReturnValue1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue1 = CallFunc_SpawnEmitterAttached_ReturnValue1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


