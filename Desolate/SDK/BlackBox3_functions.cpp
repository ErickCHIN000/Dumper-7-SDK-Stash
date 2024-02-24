#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlackBox3.BlackBox3_C
// (Actor)

class UClass* ABlackBox3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackBox3_C");

	return Clss;
}


// BlackBox3_C BlackBox3.Default__BlackBox3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlackBox3_C* ABlackBox3_C::GetDefaultObj()
{
	static class ABlackBox3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlackBox3_C*>(ABlackBox3_C::StaticClass()->DefaultObject);

	return Default;
}

}


