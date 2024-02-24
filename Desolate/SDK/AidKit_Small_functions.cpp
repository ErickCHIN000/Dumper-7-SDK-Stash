#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AidKit_Small.AidKit_Small_C
// (Actor)

class UClass* AAidKit_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AidKit_Small_C");

	return Clss;
}


// AidKit_Small_C AidKit_Small.Default__AidKit_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAidKit_Small_C* AAidKit_Small_C::GetDefaultObj()
{
	static class AAidKit_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAidKit_Small_C*>(AAidKit_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


