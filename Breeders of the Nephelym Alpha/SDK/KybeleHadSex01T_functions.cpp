#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleHadSex01T.KybeleHadSex01T_C
// (None)

class UClass* UKybeleHadSex01T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleHadSex01T_C");

	return Clss;
}


// KybeleHadSex01T_C KybeleHadSex01T.Default__KybeleHadSex01T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleHadSex01T_C* UKybeleHadSex01T_C::GetDefaultObj()
{
	static class UKybeleHadSex01T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleHadSex01T_C*>(UKybeleHadSex01T_C::StaticClass()->DefaultObject);

	return Default;
}

}


