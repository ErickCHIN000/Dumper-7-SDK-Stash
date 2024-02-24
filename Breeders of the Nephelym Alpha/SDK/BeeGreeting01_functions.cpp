#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeGreeting01.BeeGreeting01_C
// (None)

class UClass* UBeeGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeGreeting01_C");

	return Clss;
}


// BeeGreeting01_C BeeGreeting01.Default__BeeGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeGreeting01_C* UBeeGreeting01_C::GetDefaultObj()
{
	static class UBeeGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeGreeting01_C*>(UBeeGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


