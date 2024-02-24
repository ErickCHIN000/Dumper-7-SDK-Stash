#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlackBox1.BlackBox1_C
// (Actor)

class UClass* ABlackBox1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackBox1_C");

	return Clss;
}


// BlackBox1_C BlackBox1.Default__BlackBox1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlackBox1_C* ABlackBox1_C::GetDefaultObj()
{
	static class ABlackBox1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlackBox1_C*>(ABlackBox1_C::StaticClass()->DefaultObject);

	return Default;
}

}


