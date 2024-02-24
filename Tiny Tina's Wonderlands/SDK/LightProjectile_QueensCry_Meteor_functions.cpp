#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_QueensCry_Meteor.LightProjectile_QueensCry_Meteor_C
// (None)

class UClass* ULightProjectile_QueensCry_Meteor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_QueensCry_Meteor_C");

	return Clss;
}


// LightProjectile_QueensCry_Meteor_C LightProjectile_QueensCry_Meteor.Default__LightProjectile_QueensCry_Meteor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_QueensCry_Meteor_C* ULightProjectile_QueensCry_Meteor_C::GetDefaultObj()
{
	static class ULightProjectile_QueensCry_Meteor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_QueensCry_Meteor_C*>(ULightProjectile_QueensCry_Meteor_C::StaticClass()->DefaultObject);

	return Default;
}

}


