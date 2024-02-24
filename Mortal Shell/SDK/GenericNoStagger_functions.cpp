#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericNoStagger.GenericNoStagger_C
// (None)

class UClass* UGenericNoStagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericNoStagger_C");

	return Clss;
}


// GenericNoStagger_C GenericNoStagger.Default__GenericNoStagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGenericNoStagger_C* UGenericNoStagger_C::GetDefaultObj()
{
	static class UGenericNoStagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenericNoStagger_C*>(UGenericNoStagger_C::StaticClass()->DefaultObject);

	return Default;
}

}


