#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bu_00_03.Bu_00_03_C
// (Actor)

class UClass* ABu_00_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bu_00_03_C");

	return Clss;
}


// Bu_00_03_C Bu_00_03.Default__Bu_00_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABu_00_03_C* ABu_00_03_C::GetDefaultObj()
{
	static class ABu_00_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABu_00_03_C*>(ABu_00_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


