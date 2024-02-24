#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Fireball_HHG_New.LightProj_Spell_Fireball_HHG_New_C
// (None)

class UClass* ULightProj_Spell_Fireball_HHG_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Fireball_HHG_New_C");

	return Clss;
}


// LightProj_Spell_Fireball_HHG_New_C LightProj_Spell_Fireball_HHG_New.Default__LightProj_Spell_Fireball_HHG_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Fireball_HHG_New_C* ULightProj_Spell_Fireball_HHG_New_C::GetDefaultObj()
{
	static class ULightProj_Spell_Fireball_HHG_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Fireball_HHG_New_C*>(ULightProj_Spell_Fireball_HHG_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Spell_Fireball_HHG_New.LightProj_Spell_Fireball_HHG_New_C.OnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_Fireball_HHG_New_C::OnBegin(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_Fireball_HHG_New_C", "OnBegin");

	Params::ULightProj_Spell_Fireball_HHG_New_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


