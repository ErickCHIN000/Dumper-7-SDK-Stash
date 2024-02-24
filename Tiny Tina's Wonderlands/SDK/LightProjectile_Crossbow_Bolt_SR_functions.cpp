#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_Crossbow_Bolt_SR.LightProjectile_Crossbow_Bolt_SR_C
// (None)

class UClass* ULightProjectile_Crossbow_Bolt_SR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_Crossbow_Bolt_SR_C");

	return Clss;
}


// LightProjectile_Crossbow_Bolt_SR_C LightProjectile_Crossbow_Bolt_SR.Default__LightProjectile_Crossbow_Bolt_SR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_Crossbow_Bolt_SR_C* ULightProjectile_Crossbow_Bolt_SR_C::GetDefaultObj()
{
	static class ULightProjectile_Crossbow_Bolt_SR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_Crossbow_Bolt_SR_C*>(ULightProjectile_Crossbow_Bolt_SR_C::StaticClass()->DefaultObject);

	return Default;
}

}


