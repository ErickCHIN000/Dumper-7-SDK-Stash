#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Eruption_Base.LightProj_Spell_Eruption_Base_C
// (None)

class UClass* ULightProj_Spell_Eruption_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Eruption_Base_C");

	return Clss;
}


// LightProj_Spell_Eruption_Base_C LightProj_Spell_Eruption_Base.Default__LightProj_Spell_Eruption_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Eruption_Base_C* ULightProj_Spell_Eruption_Base_C::GetDefaultObj()
{
	static class ULightProj_Spell_Eruption_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Eruption_Base_C*>(ULightProj_Spell_Eruption_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Spell_Eruption_Base.LightProj_Spell_Eruption_Base_C.Timer_InAirExplosion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_Eruption_Base_C::Timer_InAirExplosion(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_Eruption_Base_C", "Timer_InAirExplosion");

	Params::ULightProj_Spell_Eruption_Base_C_Timer_InAirExplosion_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


