#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimePlay1.MegaSlimePlay1_C
// (None)

class UClass* UMegaSlimePlay1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimePlay1_C");

	return Clss;
}


// MegaSlimePlay1_C MegaSlimePlay1.Default__MegaSlimePlay1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimePlay1_C* UMegaSlimePlay1_C::GetDefaultObj()
{
	static class UMegaSlimePlay1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimePlay1_C*>(UMegaSlimePlay1_C::StaticClass()->DefaultObject);

	return Default;
}

}


