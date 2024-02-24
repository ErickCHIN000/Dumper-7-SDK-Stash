#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BunnyPracticeT.BunnyPracticeT_C
// (None)

class UClass* UBunnyPracticeT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BunnyPracticeT_C");

	return Clss;
}


// BunnyPracticeT_C BunnyPracticeT.Default__BunnyPracticeT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBunnyPracticeT_C* UBunnyPracticeT_C::GetDefaultObj()
{
	static class UBunnyPracticeT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBunnyPracticeT_C*>(UBunnyPracticeT_C::StaticClass()->DefaultObject);

	return Default;
}

}


