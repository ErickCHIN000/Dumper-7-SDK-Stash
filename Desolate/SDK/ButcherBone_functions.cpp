#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButcherBone.ButcherBone_C
// (Actor)

class UClass* AButcherBone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButcherBone_C");

	return Clss;
}


// ButcherBone_C ButcherBone.Default__ButcherBone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AButcherBone_C* AButcherBone_C::GetDefaultObj()
{
	static class AButcherBone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AButcherBone_C*>(AButcherBone_C::StaticClass()->DefaultObject);

	return Default;
}

}


