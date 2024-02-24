#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_WalkArea_Cheap.NavArea_WalkArea_Cheap_C
// (None)

class UClass* UNavArea_WalkArea_Cheap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_WalkArea_Cheap_C");

	return Clss;
}


// NavArea_WalkArea_Cheap_C NavArea_WalkArea_Cheap.Default__NavArea_WalkArea_Cheap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_WalkArea_Cheap_C* UNavArea_WalkArea_Cheap_C::GetDefaultObj()
{
	static class UNavArea_WalkArea_Cheap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_WalkArea_Cheap_C*>(UNavArea_WalkArea_Cheap_C::StaticClass()->DefaultObject);

	return Default;
}

}


