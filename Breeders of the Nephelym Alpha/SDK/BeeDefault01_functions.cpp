#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeDefault01.BeeDefault01_C
// (None)

class UClass* UBeeDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeDefault01_C");

	return Clss;
}


// BeeDefault01_C BeeDefault01.Default__BeeDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeDefault01_C* UBeeDefault01_C::GetDefaultObj()
{
	static class UBeeDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeDefault01_C*>(UBeeDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


