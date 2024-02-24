#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeftFootIKManupulate.LeftFootIKManupulate_C
// (None)

class UClass* ULeftFootIKManupulate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeftFootIKManupulate_C");

	return Clss;
}


// LeftFootIKManupulate_C LeftFootIKManupulate.Default__LeftFootIKManupulate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeftFootIKManupulate_C* ULeftFootIKManupulate_C::GetDefaultObj()
{
	static class ULeftFootIKManupulate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeftFootIKManupulate_C*>(ULeftFootIKManupulate_C::StaticClass()->DefaultObject);

	return Default;
}

}


