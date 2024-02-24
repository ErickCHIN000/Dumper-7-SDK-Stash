#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericSedative.GenericSedative_C
// (Actor)

class UClass* AGenericSedative_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericSedative_C");

	return Clss;
}


// GenericSedative_C GenericSedative.Default__GenericSedative_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericSedative_C* AGenericSedative_C::GetDefaultObj()
{
	static class AGenericSedative_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericSedative_C*>(AGenericSedative_C::StaticClass()->DefaultObject);

	return Default;
}

}


