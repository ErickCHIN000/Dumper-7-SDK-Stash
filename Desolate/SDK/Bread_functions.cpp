#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bread.Bread_C
// (Actor)

class UClass* ABread_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bread_C");

	return Clss;
}


// Bread_C Bread.Default__Bread_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABread_C* ABread_C::GetDefaultObj()
{
	static class ABread_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABread_C*>(ABread_C::StaticClass()->DefaultObject);

	return Default;
}

}


