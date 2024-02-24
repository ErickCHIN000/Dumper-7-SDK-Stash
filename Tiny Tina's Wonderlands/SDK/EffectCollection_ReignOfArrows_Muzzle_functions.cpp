#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_ReignOfArrows_Muzzle.EffectCollection_ReignOfArrows_Muzzle_C
// (None)

class UClass* UEffectCollection_ReignOfArrows_Muzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_ReignOfArrows_Muzzle_C");

	return Clss;
}


// EffectCollection_ReignOfArrows_Muzzle_C EffectCollection_ReignOfArrows_Muzzle.Default__EffectCollection_ReignOfArrows_Muzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_ReignOfArrows_Muzzle_C* UEffectCollection_ReignOfArrows_Muzzle_C::GetDefaultObj()
{
	static class UEffectCollection_ReignOfArrows_Muzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_ReignOfArrows_Muzzle_C*>(UEffectCollection_ReignOfArrows_Muzzle_C::StaticClass()->DefaultObject);

	return Default;
}

}


