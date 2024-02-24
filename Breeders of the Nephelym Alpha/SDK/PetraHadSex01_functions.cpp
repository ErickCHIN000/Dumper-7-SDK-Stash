#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PetraHadSex01.PetraHadSex01_C
// (None)

class UClass* UPetraHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetraHadSex01_C");

	return Clss;
}


// PetraHadSex01_C PetraHadSex01.Default__PetraHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPetraHadSex01_C* UPetraHadSex01_C::GetDefaultObj()
{
	static class UPetraHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPetraHadSex01_C*>(UPetraHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


