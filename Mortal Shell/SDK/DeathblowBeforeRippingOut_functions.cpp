#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DeathblowBeforeRippingOut.DeathblowBeforeRippingOut_C
// (None)

class UClass* UDeathblowBeforeRippingOut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeathblowBeforeRippingOut_C");

	return Clss;
}


// DeathblowBeforeRippingOut_C DeathblowBeforeRippingOut.Default__DeathblowBeforeRippingOut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDeathblowBeforeRippingOut_C* UDeathblowBeforeRippingOut_C::GetDefaultObj()
{
	static class UDeathblowBeforeRippingOut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeathblowBeforeRippingOut_C*>(UDeathblowBeforeRippingOut_C::StaticClass()->DefaultObject);

	return Default;
}

}


