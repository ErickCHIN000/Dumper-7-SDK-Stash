#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMLame.DMLame_C
// (None)

class UClass* UDMLame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMLame_C");

	return Clss;
}


// DMLame_C DMLame.Default__DMLame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMLame_C* UDMLame_C::GetDefaultObj()
{
	static class UDMLame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMLame_C*>(UDMLame_C::StaticClass()->DefaultObject);

	return Default;
}

}


