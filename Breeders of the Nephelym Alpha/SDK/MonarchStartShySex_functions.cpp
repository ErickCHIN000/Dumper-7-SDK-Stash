#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchStartShySex.MonarchStartShySex_C
// (None)

class UClass* UMonarchStartShySex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchStartShySex_C");

	return Clss;
}


// MonarchStartShySex_C MonarchStartShySex.Default__MonarchStartShySex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchStartShySex_C* UMonarchStartShySex_C::GetDefaultObj()
{
	static class UMonarchStartShySex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchStartShySex_C*>(UMonarchStartShySex_C::StaticClass()->DefaultObject);

	return Default;
}

}


