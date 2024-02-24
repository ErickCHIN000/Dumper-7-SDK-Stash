#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_Cannonballer.EffectCollection_Cannonballer_C
// (None)

class UClass* UEffectCollection_Cannonballer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_Cannonballer_C");

	return Clss;
}


// EffectCollection_Cannonballer_C EffectCollection_Cannonballer.Default__EffectCollection_Cannonballer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_Cannonballer_C* UEffectCollection_Cannonballer_C::GetDefaultObj()
{
	static class UEffectCollection_Cannonballer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_Cannonballer_C*>(UEffectCollection_Cannonballer_C::StaticClass()->DefaultObject);

	return Default;
}

}


