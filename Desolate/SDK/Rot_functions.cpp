#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rot.Rot_C
// (Actor)

class UClass* ARot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rot_C");

	return Clss;
}


// Rot_C Rot.Default__Rot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARot_C* ARot_C::GetDefaultObj()
{
	static class ARot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARot_C*>(ARot_C::StaticClass()->DefaultObject);

	return Default;
}

}


