#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Fireball_Base.LightProj_Spell_Fireball_Base_C
// (None)

class UClass* ULightProj_Spell_Fireball_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Fireball_Base_C");

	return Clss;
}


// LightProj_Spell_Fireball_Base_C LightProj_Spell_Fireball_Base.Default__LightProj_Spell_Fireball_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Fireball_Base_C* ULightProj_Spell_Fireball_Base_C::GetDefaultObj()
{
	static class ULightProj_Spell_Fireball_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Fireball_Base_C*>(ULightProj_Spell_Fireball_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Spell_Fireball_Base.LightProj_Spell_Fireball_Base_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_Fireball_Base_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_Fireball_Base_C", "OnLifetimeExpired");

	Params::ULightProj_Spell_Fireball_Base_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_Fireball_Base.LightProj_Spell_Fireball_Base_C.OnBegin
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    ProjSpellData                                                    (Edit, BlueprintVisible, NoDestructor)
// class USpellLightProjectile*       K2Node_DynamicCast_AsSpell_Light_Projectile                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSpellHavePart_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_Fireball_Base_C::OnBegin(class ULightProjectile* Projectile, const struct FSpawnableSpellBasicData& ProjSpellData, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSpellHavePart_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_Fireball_Base_C", "OnBegin");

	Params::ULightProj_Spell_Fireball_Base_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.ProjSpellData = ProjSpellData;
	Parms.K2Node_DynamicCast_AsSpell_Light_Projectile = K2Node_DynamicCast_AsSpell_Light_Projectile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSpellHavePart_ReturnValue = CallFunc_DoesSpellHavePart_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


