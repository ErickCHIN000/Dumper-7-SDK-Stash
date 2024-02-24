#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_WalkArea.NavArea_WalkArea_C
// (None)

class UClass* UNavArea_WalkArea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_WalkArea_C");

	return Clss;
}


// NavArea_WalkArea_C NavArea_WalkArea.Default__NavArea_WalkArea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_WalkArea_C* UNavArea_WalkArea_C::GetDefaultObj()
{
	static class UNavArea_WalkArea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_WalkArea_C*>(UNavArea_WalkArea_C::StaticClass()->DefaultObject);

	return Default;
}

}


