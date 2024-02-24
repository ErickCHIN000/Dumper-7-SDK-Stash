#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButcherChoice.ButcherChoice_C
// (Actor)

class UClass* AButcherChoice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButcherChoice_C");

	return Clss;
}


// ButcherChoice_C ButcherChoice.Default__ButcherChoice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AButcherChoice_C* AButcherChoice_C::GetDefaultObj()
{
	static class AButcherChoice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AButcherChoice_C*>(AButcherChoice_C::StaticClass()->DefaultObject);

	return Default;
}

}


