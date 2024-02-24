#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DemonPool.DemonPool_C
// (None)

class UClass* UDemonPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DemonPool_C");

	return Clss;
}


// DemonPool_C DemonPool.Default__DemonPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDemonPool_C* UDemonPool_C::GetDefaultObj()
{
	static class UDemonPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDemonPool_C*>(UDemonPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


