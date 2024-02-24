#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryEssence.EmissaryEssence_C
// (None)

class UClass* UEmissaryEssence_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryEssence_C");

	return Clss;
}


// EmissaryEssence_C EmissaryEssence.Default__EmissaryEssence_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryEssence_C* UEmissaryEssence_C::GetDefaultObj()
{
	static class UEmissaryEssence_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryEssence_C*>(UEmissaryEssence_C::StaticClass()->DefaultObject);

	return Default;
}

}


