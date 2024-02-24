#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleHadSex01.KybeleHadSex01_C
// (None)

class UClass* UKybeleHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleHadSex01_C");

	return Clss;
}


// KybeleHadSex01_C KybeleHadSex01.Default__KybeleHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleHadSex01_C* UKybeleHadSex01_C::GetDefaultObj()
{
	static class UKybeleHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleHadSex01_C*>(UKybeleHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


