#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragonHoard.DragonHoard_C
// (None)

class UClass* UDragonHoard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonHoard_C");

	return Clss;
}


// DragonHoard_C DragonHoard.Default__DragonHoard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragonHoard_C* UDragonHoard_C::GetDefaultObj()
{
	static class UDragonHoard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragonHoard_C*>(UDragonHoard_C::StaticClass()->DefaultObject);

	return Default;
}

}


