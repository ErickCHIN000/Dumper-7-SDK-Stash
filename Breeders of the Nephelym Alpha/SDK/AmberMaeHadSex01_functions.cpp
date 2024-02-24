#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeHadSex01.AmberMaeHadSex01_C
// (None)

class UClass* UAmberMaeHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeHadSex01_C");

	return Clss;
}


// AmberMaeHadSex01_C AmberMaeHadSex01.Default__AmberMaeHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeHadSex01_C* UAmberMaeHadSex01_C::GetDefaultObj()
{
	static class UAmberMaeHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeHadSex01_C*>(UAmberMaeHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


