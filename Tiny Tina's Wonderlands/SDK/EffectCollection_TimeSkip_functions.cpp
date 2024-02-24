#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_TimeSkip.EffectCollection_TimeSkip_C
// (None)

class UClass* UEffectCollection_TimeSkip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_TimeSkip_C");

	return Clss;
}


// EffectCollection_TimeSkip_C EffectCollection_TimeSkip.Default__EffectCollection_TimeSkip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_TimeSkip_C* UEffectCollection_TimeSkip_C::GetDefaultObj()
{
	static class UEffectCollection_TimeSkip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_TimeSkip_C*>(UEffectCollection_TimeSkip_C::StaticClass()->DefaultObject);

	return Default;
}

}


