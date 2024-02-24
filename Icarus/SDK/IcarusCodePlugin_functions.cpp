#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class IcarusCodePlugin.StupidDoesNothing
// (None)

class UClass* UStupidDoesNothing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StupidDoesNothing");

	return Clss;
}


// StupidDoesNothing IcarusCodePlugin.Default__StupidDoesNothing
// (Public, ClassDefaultObject, ArchetypeObject)

class UStupidDoesNothing* UStupidDoesNothing::GetDefaultObj()
{
	static class UStupidDoesNothing* Default = nullptr;

	if (!Default)
		Default = static_cast<UStupidDoesNothing*>(UStupidDoesNothing::StaticClass()->DefaultObject);

	return Default;
}

}


