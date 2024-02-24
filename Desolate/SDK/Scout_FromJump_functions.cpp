#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_FromJump.Scout_FromJump_C
// (None)

class UClass* UScout_FromJump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_FromJump_C");

	return Clss;
}


// Scout_FromJump_C Scout_FromJump.Default__Scout_FromJump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_FromJump_C* UScout_FromJump_C::GetDefaultObj()
{
	static class UScout_FromJump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_FromJump_C*>(UScout_FromJump_C::StaticClass()->DefaultObject);

	return Default;
}

}


