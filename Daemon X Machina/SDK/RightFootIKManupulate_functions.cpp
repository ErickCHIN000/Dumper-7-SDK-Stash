#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RightFootIKManupulate.RightFootIKManupulate_C
// (None)

class UClass* URightFootIKManupulate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RightFootIKManupulate_C");

	return Clss;
}


// RightFootIKManupulate_C RightFootIKManupulate.Default__RightFootIKManupulate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URightFootIKManupulate_C* URightFootIKManupulate_C::GetDefaultObj()
{
	static class URightFootIKManupulate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URightFootIKManupulate_C*>(URightFootIKManupulate_C::StaticClass()->DefaultObject);

	return Default;
}

}


