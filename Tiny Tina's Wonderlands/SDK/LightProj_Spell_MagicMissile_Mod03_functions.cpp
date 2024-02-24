#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_MagicMissile_Mod03.LightProj_Spell_MagicMissile_Mod03_C
// (None)

class UClass* ULightProj_Spell_MagicMissile_Mod03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_MagicMissile_Mod03_C");

	return Clss;
}


// LightProj_Spell_MagicMissile_Mod03_C LightProj_Spell_MagicMissile_Mod03.Default__LightProj_Spell_MagicMissile_Mod03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_MagicMissile_Mod03_C* ULightProj_Spell_MagicMissile_Mod03_C::GetDefaultObj()
{
	static class ULightProj_Spell_MagicMissile_Mod03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_MagicMissile_Mod03_C*>(ULightProj_Spell_MagicMissile_Mod03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Spell_MagicMissile_Mod03.LightProj_Spell_MagicMissile_Mod03_C.OnImpact
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ULightProj_Spell_MagicMissile_Mod03_C::OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_MagicMissile_Mod03_C", "OnImpact");

	Params::ULightProj_Spell_MagicMissile_Mod03_C_OnImpact_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}

}


