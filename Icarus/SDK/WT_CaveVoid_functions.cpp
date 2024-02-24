#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WT_CaveVoid.WT_CaveVoid_C
// (Actor)

class UClass* AWT_CaveVoid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WT_CaveVoid_C");

	return Clss;
}


// WT_CaveVoid_C WT_CaveVoid.Default__WT_CaveVoid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWT_CaveVoid_C* AWT_CaveVoid_C::GetDefaultObj()
{
	static class AWT_CaveVoid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWT_CaveVoid_C*>(AWT_CaveVoid_C::StaticClass()->DefaultObject);

	return Default;
}

}


