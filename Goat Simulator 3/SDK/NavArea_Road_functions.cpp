#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_Road.NavArea_Road_C
// (None)

class UClass* UNavArea_Road_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Road_C");

	return Clss;
}


// NavArea_Road_C NavArea_Road.Default__NavArea_Road_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_Road_C* UNavArea_Road_C::GetDefaultObj()
{
	static class UNavArea_Road_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Road_C*>(UNavArea_Road_C::StaticClass()->DefaultObject);

	return Default;
}

}


