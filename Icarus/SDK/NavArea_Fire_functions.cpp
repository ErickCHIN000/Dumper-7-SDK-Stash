#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_Fire.NavArea_Fire_C
// (None)

class UClass* UNavArea_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Fire_C");

	return Clss;
}


// NavArea_Fire_C NavArea_Fire.Default__NavArea_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_Fire_C* UNavArea_Fire_C::GetDefaultObj()
{
	static class UNavArea_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Fire_C*>(UNavArea_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


