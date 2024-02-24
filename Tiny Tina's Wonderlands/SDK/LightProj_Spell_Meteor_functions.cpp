#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Meteor.LightProj_Spell_Meteor_C
// (None)

class UClass* ULightProj_Spell_Meteor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Meteor_C");

	return Clss;
}


// LightProj_Spell_Meteor_C LightProj_Spell_Meteor.Default__LightProj_Spell_Meteor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Meteor_C* ULightProj_Spell_Meteor_C::GetDefaultObj()
{
	static class ULightProj_Spell_Meteor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Meteor_C*>(ULightProj_Spell_Meteor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Spell_Meteor.LightProj_Spell_Meteor_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_Meteor_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_Meteor_C", "OnLifetimeExpired");

	Params::ULightProj_Spell_Meteor_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


