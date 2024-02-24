#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vanoga_WallPoint.Vanoga_WallPoint_C
// (Actor)

class UClass* AVanoga_WallPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vanoga_WallPoint_C");

	return Clss;
}


// Vanoga_WallPoint_C Vanoga_WallPoint.Default__Vanoga_WallPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVanoga_WallPoint_C* AVanoga_WallPoint_C::GetDefaultObj()
{
	static class AVanoga_WallPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVanoga_WallPoint_C*>(AVanoga_WallPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


