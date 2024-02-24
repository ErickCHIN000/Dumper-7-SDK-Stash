#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragonWyvernF.DragonWyvernF_C
// (None)

class UClass* UDragonWyvernF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonWyvernF_C");

	return Clss;
}


// DragonWyvernF_C DragonWyvernF.Default__DragonWyvernF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragonWyvernF_C* UDragonWyvernF_C::GetDefaultObj()
{
	static class UDragonWyvernF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragonWyvernF_C*>(UDragonWyvernF_C::StaticClass()->DefaultObject);

	return Default;
}

}


