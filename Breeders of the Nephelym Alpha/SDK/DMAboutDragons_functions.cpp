#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMAboutDragons.DMAboutDragons_C
// (None)

class UClass* UDMAboutDragons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMAboutDragons_C");

	return Clss;
}


// DMAboutDragons_C DMAboutDragons.Default__DMAboutDragons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMAboutDragons_C* UDMAboutDragons_C::GetDefaultObj()
{
	static class UDMAboutDragons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMAboutDragons_C*>(UDMAboutDragons_C::StaticClass()->DefaultObject);

	return Default;
}

}


