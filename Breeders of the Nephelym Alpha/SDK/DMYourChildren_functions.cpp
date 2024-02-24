#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMYourChildren.DMYourChildren_C
// (None)

class UClass* UDMYourChildren_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMYourChildren_C");

	return Clss;
}


// DMYourChildren_C DMYourChildren.Default__DMYourChildren_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMYourChildren_C* UDMYourChildren_C::GetDefaultObj()
{
	static class UDMYourChildren_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMYourChildren_C*>(UDMYourChildren_C::StaticClass()->DefaultObject);

	return Default;
}

}


