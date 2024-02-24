#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Meteor_Targeting_DRains.LightProj_Spell_Meteor_Targeting_DRains_C
// (None)

class UClass* ULightProj_Spell_Meteor_Targeting_DRains_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Meteor_Targeting_DRains_C");

	return Clss;
}


// LightProj_Spell_Meteor_Targeting_DRains_C LightProj_Spell_Meteor_Targeting_DRains.Default__LightProj_Spell_Meteor_Targeting_DRains_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Meteor_Targeting_DRains_C* ULightProj_Spell_Meteor_Targeting_DRains_C::GetDefaultObj()
{
	static class ULightProj_Spell_Meteor_Targeting_DRains_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Meteor_Targeting_DRains_C*>(ULightProj_Spell_Meteor_Targeting_DRains_C::StaticClass()->DefaultObject);

	return Default;
}

}


