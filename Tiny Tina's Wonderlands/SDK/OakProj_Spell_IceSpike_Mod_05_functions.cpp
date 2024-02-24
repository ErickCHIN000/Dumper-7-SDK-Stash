#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OakProj_Spell_IceSpike_Mod_05.OakProj_Spell_IceSpike_Mod_05_C
// (Actor)

class UClass* AOakProj_Spell_IceSpike_Mod_05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OakProj_Spell_IceSpike_Mod_05_C");

	return Clss;
}


// OakProj_Spell_IceSpike_Mod_05_C OakProj_Spell_IceSpike_Mod_05.Default__OakProj_Spell_IceSpike_Mod_05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOakProj_Spell_IceSpike_Mod_05_C* AOakProj_Spell_IceSpike_Mod_05_C::GetDefaultObj()
{
	static class AOakProj_Spell_IceSpike_Mod_05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOakProj_Spell_IceSpike_Mod_05_C*>(AOakProj_Spell_IceSpike_Mod_05_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OakProj_Spell_IceSpike_Mod_05.OakProj_Spell_IceSpike_Mod_05_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOakProj_Spell_IceSpike_Mod_05_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakProj_Spell_IceSpike_Mod_05_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OakProj_Spell_IceSpike_Mod_05.OakProj_Spell_IceSpike_Mod_05_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AOakProj_Spell_IceSpike_Mod_05_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakProj_Spell_IceSpike_Mod_05_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OakProj_Spell_IceSpike_Mod_05.OakProj_Spell_IceSpike_Mod_05_C.BeginCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AOakProj_Spell_IceSpike_Mod_05_C::BeginCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakProj_Spell_IceSpike_Mod_05_C", "BeginCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OakProj_Spell_IceSpike_Mod_05.OakProj_Spell_IceSpike_Mod_05_C.OnExplode
// (Event, Protected, BlueprintEvent)
// Parameters:

void AOakProj_Spell_IceSpike_Mod_05_C::OnExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakProj_Spell_IceSpike_Mod_05_C", "OnExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OakProj_Spell_IceSpike_Mod_05.OakProj_Spell_IceSpike_Mod_05_C.Audio_FadeStorm
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOakProj_Spell_IceSpike_Mod_05_C::Audio_FadeStorm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakProj_Spell_IceSpike_Mod_05_C", "Audio_FadeStorm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OakProj_Spell_IceSpike_Mod_05.OakProj_Spell_IceSpike_Mod_05_C.ExecuteUbergraph_OakProj_Spell_IceSpike_Mod_05
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValue_OutValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsGbx_Damage_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCauseDamageStatusEffectOverridesK2Node_MakeStruct_CauseDamageStatusEffectOverrides               (NoDestructor)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RandomRotator_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOakProj_Spell_IceSpike_Mod_05_C::ExecuteUbergraph_OakProj_Spell_IceSpike_Mod_05(int32 EntryPoint, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, const struct FHitResult& Temp_struct_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakProj_Spell_IceSpike_Mod_05_C", "ExecuteUbergraph_OakProj_Spell_IceSpike_Mod_05");

	Params::AOakProj_Spell_IceSpike_Mod_05_C_ExecuteUbergraph_OakProj_Spell_IceSpike_Mod_05_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGbx_Damage_Type = K2Node_ClassDynamicCast_AsGbx_Damage_Type;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_CauseDamageStatusEffectOverrides = K2Node_MakeStruct_CauseDamageStatusEffectOverrides;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RandomRotator_ReturnValue = CallFunc_RandomRotator_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


