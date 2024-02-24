#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericDamageShake1.GenericDamageShake1_C
// (None)

class UClass* UGenericDamageShake1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericDamageShake1_C");

	return Clss;
}


// GenericDamageShake1_C GenericDamageShake1.Default__GenericDamageShake1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGenericDamageShake1_C* UGenericDamageShake1_C::GetDefaultObj()
{
	static class UGenericDamageShake1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenericDamageShake1_C*>(UGenericDamageShake1_C::StaticClass()->DefaultObject);

	return Default;
}

}


