#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_LaserBolt.ElementalEffectCollection_LaserBolt_C
// (None)

class UClass* UElementalEffectCollection_LaserBolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_LaserBolt_C");

	return Clss;
}


// ElementalEffectCollection_LaserBolt_C ElementalEffectCollection_LaserBolt.Default__ElementalEffectCollection_LaserBolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_LaserBolt_C* UElementalEffectCollection_LaserBolt_C::GetDefaultObj()
{
	static class UElementalEffectCollection_LaserBolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_LaserBolt_C*>(UElementalEffectCollection_LaserBolt_C::StaticClass()->DefaultObject);

	return Default;
}

}


