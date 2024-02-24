#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaHadSex01.LeylannaHadSex01_C
// (None)

class UClass* ULeylannaHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaHadSex01_C");

	return Clss;
}


// LeylannaHadSex01_C LeylannaHadSex01.Default__LeylannaHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaHadSex01_C* ULeylannaHadSex01_C::GetDefaultObj()
{
	static class ULeylannaHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaHadSex01_C*>(ULeylannaHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


