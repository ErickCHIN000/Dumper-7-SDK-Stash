#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMDefault01.DMDefault01_C
// (None)

class UClass* UDMDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMDefault01_C");

	return Clss;
}


// DMDefault01_C DMDefault01.Default__DMDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMDefault01_C* UDMDefault01_C::GetDefaultObj()
{
	static class UDMDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMDefault01_C*>(UDMDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


