#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlackBox2.BlackBox2_C
// (Actor)

class UClass* ABlackBox2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackBox2_C");

	return Clss;
}


// BlackBox2_C BlackBox2.Default__BlackBox2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlackBox2_C* ABlackBox2_C::GetDefaultObj()
{
	static class ABlackBox2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlackBox2_C*>(ABlackBox2_C::StaticClass()->DefaultObject);

	return Default;
}

}


