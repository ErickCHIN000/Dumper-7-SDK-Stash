#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimePlay.MegaSlimePlay_C
// (None)

class UClass* UMegaSlimePlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimePlay_C");

	return Clss;
}


// MegaSlimePlay_C MegaSlimePlay.Default__MegaSlimePlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimePlay_C* UMegaSlimePlay_C::GetDefaultObj()
{
	static class UMegaSlimePlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimePlay_C*>(UMegaSlimePlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


