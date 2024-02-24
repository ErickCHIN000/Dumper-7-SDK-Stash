#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass APhysDeath_Mushroom_TechDeath_Fire.APhysDeath_Mushroom_TechDeath_Fire_C
// (None)

class UClass* UAPhysDeath_Mushroom_TechDeath_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("APhysDeath_Mushroom_TechDeath_Fire_C");

	return Clss;
}


// APhysDeath_Mushroom_TechDeath_Fire_C APhysDeath_Mushroom_TechDeath_Fire.Default__APhysDeath_Mushroom_TechDeath_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAPhysDeath_Mushroom_TechDeath_Fire_C* UAPhysDeath_Mushroom_TechDeath_Fire_C::GetDefaultObj()
{
	static class UAPhysDeath_Mushroom_TechDeath_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAPhysDeath_Mushroom_TechDeath_Fire_C*>(UAPhysDeath_Mushroom_TechDeath_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


