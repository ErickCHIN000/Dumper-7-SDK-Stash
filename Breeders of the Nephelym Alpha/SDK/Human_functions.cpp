#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Human.Human_C
// (None)

class UClass* UHuman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Human_C");

	return Clss;
}


// Human_C Human.Default__Human_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuman_C* UHuman_C::GetDefaultObj()
{
	static class UHuman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuman_C*>(UHuman_C::StaticClass()->DefaultObject);

	return Default;
}

}


