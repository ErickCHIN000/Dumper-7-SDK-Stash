#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchDefault01.MonarchDefault01_C
// (None)

class UClass* UMonarchDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchDefault01_C");

	return Clss;
}


// MonarchDefault01_C MonarchDefault01.Default__MonarchDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchDefault01_C* UMonarchDefault01_C::GetDefaultObj()
{
	static class UMonarchDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchDefault01_C*>(UMonarchDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


