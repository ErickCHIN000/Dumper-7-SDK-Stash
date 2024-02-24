#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DemonSuccubusT.DemonSuccubusT_C
// (None)

class UClass* UDemonSuccubusT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DemonSuccubusT_C");

	return Clss;
}


// DemonSuccubusT_C DemonSuccubusT.Default__DemonSuccubusT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDemonSuccubusT_C* UDemonSuccubusT_C::GetDefaultObj()
{
	static class UDemonSuccubusT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDemonSuccubusT_C*>(UDemonSuccubusT_C::StaticClass()->DefaultObject);

	return Default;
}

}


