#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_Dodge.Scout_Dodge_C
// (None)

class UClass* UScout_Dodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_Dodge_C");

	return Clss;
}


// Scout_Dodge_C Scout_Dodge.Default__Scout_Dodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_Dodge_C* UScout_Dodge_C::GetDefaultObj()
{
	static class UScout_Dodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_Dodge_C*>(UScout_Dodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


