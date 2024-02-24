#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bu_01_00.Bu_01_00_C
// (Actor)

class UClass* ABu_01_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bu_01_00_C");

	return Clss;
}


// Bu_01_00_C Bu_01_00.Default__Bu_01_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABu_01_00_C* ABu_01_00_C::GetDefaultObj()
{
	static class ABu_01_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABu_01_00_C*>(ABu_01_00_C::StaticClass()->DefaultObject);

	return Default;
}

}


