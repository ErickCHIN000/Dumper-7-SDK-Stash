#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_ReignOfArrows.EffectCollection_ReignOfArrows_C
// (None)

class UClass* UEffectCollection_ReignOfArrows_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_ReignOfArrows_C");

	return Clss;
}


// EffectCollection_ReignOfArrows_C EffectCollection_ReignOfArrows.Default__EffectCollection_ReignOfArrows_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_ReignOfArrows_C* UEffectCollection_ReignOfArrows_C::GetDefaultObj()
{
	static class UEffectCollection_ReignOfArrows_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_ReignOfArrows_C*>(UEffectCollection_ReignOfArrows_C::StaticClass()->DefaultObject);

	return Default;
}

}


