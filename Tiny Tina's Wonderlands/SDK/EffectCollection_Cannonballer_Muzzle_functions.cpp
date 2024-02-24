#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_Cannonballer_Muzzle.EffectCollection_Cannonballer_Muzzle_C
// (None)

class UClass* UEffectCollection_Cannonballer_Muzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_Cannonballer_Muzzle_C");

	return Clss;
}


// EffectCollection_Cannonballer_Muzzle_C EffectCollection_Cannonballer_Muzzle.Default__EffectCollection_Cannonballer_Muzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_Cannonballer_Muzzle_C* UEffectCollection_Cannonballer_Muzzle_C::GetDefaultObj()
{
	static class UEffectCollection_Cannonballer_Muzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_Cannonballer_Muzzle_C*>(UEffectCollection_Cannonballer_Muzzle_C::StaticClass()->DefaultObject);

	return Default;
}

}


