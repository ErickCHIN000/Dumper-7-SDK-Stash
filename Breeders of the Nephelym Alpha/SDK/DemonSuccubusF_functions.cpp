#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DemonSuccubusF.DemonSuccubusF_C
// (None)

class UClass* UDemonSuccubusF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DemonSuccubusF_C");

	return Clss;
}


// DemonSuccubusF_C DemonSuccubusF.Default__DemonSuccubusF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDemonSuccubusF_C* UDemonSuccubusF_C::GetDefaultObj()
{
	static class UDemonSuccubusF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDemonSuccubusF_C*>(UDemonSuccubusF_C::StaticClass()->DefaultObject);

	return Default;
}

}


