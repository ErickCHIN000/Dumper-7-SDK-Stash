#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Toxic.Toxic_C
// (Actor)

class UClass* AToxic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Toxic_C");

	return Clss;
}


// Toxic_C Toxic.Default__Toxic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AToxic_C* AToxic_C::GetDefaultObj()
{
	static class AToxic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AToxic_C*>(AToxic_C::StaticClass()->DefaultObject);

	return Default;
}

}


