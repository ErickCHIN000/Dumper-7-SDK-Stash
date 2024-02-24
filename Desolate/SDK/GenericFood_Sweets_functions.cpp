#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericFood_Sweets.GenericFood_Sweets_C
// (Actor)

class UClass* AGenericFood_Sweets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericFood_Sweets_C");

	return Clss;
}


// GenericFood_Sweets_C GenericFood_Sweets.Default__GenericFood_Sweets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericFood_Sweets_C* AGenericFood_Sweets_C::GetDefaultObj()
{
	static class AGenericFood_Sweets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericFood_Sweets_C*>(AGenericFood_Sweets_C::StaticClass()->DefaultObject);

	return Default;
}

}


