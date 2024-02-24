#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dragon.Dragon_C
// (None)

class UClass* UDragon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dragon_C");

	return Clss;
}


// Dragon_C Dragon.Default__Dragon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragon_C* UDragon_C::GetDefaultObj()
{
	static class UDragon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragon_C*>(UDragon_C::StaticClass()->DefaultObject);

	return Default;
}

}


