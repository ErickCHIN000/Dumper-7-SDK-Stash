#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShieldAug_AncientDeity.ShieldAug_AncientDeity_C
// (None)

class UClass* UShieldAug_AncientDeity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShieldAug_AncientDeity_C");

	return Clss;
}


// ShieldAug_AncientDeity_C ShieldAug_AncientDeity.Default__ShieldAug_AncientDeity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShieldAug_AncientDeity_C* UShieldAug_AncientDeity_C::GetDefaultObj()
{
	static class UShieldAug_AncientDeity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShieldAug_AncientDeity_C*>(UShieldAug_AncientDeity_C::StaticClass()->DefaultObject);

	return Default;
}

}


