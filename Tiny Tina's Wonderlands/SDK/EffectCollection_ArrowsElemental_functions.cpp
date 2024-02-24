#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_ArrowsElemental.EffectCollection_ArrowsElemental_C
// (None)

class UClass* UEffectCollection_ArrowsElemental_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_ArrowsElemental_C");

	return Clss;
}


// EffectCollection_ArrowsElemental_C EffectCollection_ArrowsElemental.Default__EffectCollection_ArrowsElemental_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_ArrowsElemental_C* UEffectCollection_ArrowsElemental_C::GetDefaultObj()
{
	static class UEffectCollection_ArrowsElemental_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_ArrowsElemental_C*>(UEffectCollection_ArrowsElemental_C::StaticClass()->DefaultObject);

	return Default;
}

}


