#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rice.Rice_C
// (Actor)

class UClass* ARice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rice_C");

	return Clss;
}


// Rice_C Rice.Default__Rice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARice_C* ARice_C::GetDefaultObj()
{
	static class ARice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARice_C*>(ARice_C::StaticClass()->DefaultObject);

	return Default;
}

}


