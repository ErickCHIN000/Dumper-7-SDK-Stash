#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeVerySad2.MegaSlimeVerySad2_C
// (None)

class UClass* UMegaSlimeVerySad2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeVerySad2_C");

	return Clss;
}


// MegaSlimeVerySad2_C MegaSlimeVerySad2.Default__MegaSlimeVerySad2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeVerySad2_C* UMegaSlimeVerySad2_C::GetDefaultObj()
{
	static class UMegaSlimeVerySad2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeVerySad2_C*>(UMegaSlimeVerySad2_C::StaticClass()->DefaultObject);

	return Default;
}

}


