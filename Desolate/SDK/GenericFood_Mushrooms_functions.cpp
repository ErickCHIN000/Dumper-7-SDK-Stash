#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericFood_Mushrooms.GenericFood_Mushrooms_C
// (Actor)

class UClass* AGenericFood_Mushrooms_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericFood_Mushrooms_C");

	return Clss;
}


// GenericFood_Mushrooms_C GenericFood_Mushrooms.Default__GenericFood_Mushrooms_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericFood_Mushrooms_C* AGenericFood_Mushrooms_C::GetDefaultObj()
{
	static class AGenericFood_Mushrooms_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericFood_Mushrooms_C*>(AGenericFood_Mushrooms_C::StaticClass()->DefaultObject);

	return Default;
}

}


