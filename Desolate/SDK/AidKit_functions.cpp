#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AidKit.AidKit_C
// (Actor)

class UClass* AAidKit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AidKit_C");

	return Clss;
}


// AidKit_C AidKit.Default__AidKit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAidKit_C* AAidKit_C::GetDefaultObj()
{
	static class AAidKit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAidKit_C*>(AAidKit_C::StaticClass()->DefaultObject);

	return Default;
}

}


