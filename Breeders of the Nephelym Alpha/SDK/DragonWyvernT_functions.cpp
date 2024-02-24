#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragonWyvernT.DragonWyvernT_C
// (None)

class UClass* UDragonWyvernT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonWyvernT_C");

	return Clss;
}


// DragonWyvernT_C DragonWyvernT.Default__DragonWyvernT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragonWyvernT_C* UDragonWyvernT_C::GetDefaultObj()
{
	static class UDragonWyvernT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragonWyvernT_C*>(UDragonWyvernT_C::StaticClass()->DefaultObject);

	return Default;
}

}


