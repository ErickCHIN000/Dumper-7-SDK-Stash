#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeExplosion.DmgTypeExplosion_C
// (None)

class UClass* UDmgTypeExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeExplosion_C");

	return Clss;
}


// DmgTypeExplosion_C DmgTypeExplosion.Default__DmgTypeExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeExplosion_C* UDmgTypeExplosion_C::GetDefaultObj()
{
	static class UDmgTypeExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeExplosion_C*>(UDmgTypeExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


