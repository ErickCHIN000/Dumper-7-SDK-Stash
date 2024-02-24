#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vanoga_ThrowItem.Vanoga_ThrowItem_C
// (Actor)

class UClass* AVanoga_ThrowItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vanoga_ThrowItem_C");

	return Clss;
}


// Vanoga_ThrowItem_C Vanoga_ThrowItem.Default__Vanoga_ThrowItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVanoga_ThrowItem_C* AVanoga_ThrowItem_C::GetDefaultObj()
{
	static class AVanoga_ThrowItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVanoga_ThrowItem_C*>(AVanoga_ThrowItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


