#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Gorlan_Controller.Gorlan_Controller_C
// (Actor)

class UClass* AGorlan_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gorlan_Controller_C");

	return Clss;
}


// Gorlan_Controller_C Gorlan_Controller.Default__Gorlan_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGorlan_Controller_C* AGorlan_Controller_C::GetDefaultObj()
{
	static class AGorlan_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGorlan_Controller_C*>(AGorlan_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


