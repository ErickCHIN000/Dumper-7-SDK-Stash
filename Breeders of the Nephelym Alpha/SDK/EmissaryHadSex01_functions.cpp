#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryHadSex01.EmissaryHadSex01_C
// (None)

class UClass* UEmissaryHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryHadSex01_C");

	return Clss;
}


// EmissaryHadSex01_C EmissaryHadSex01.Default__EmissaryHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryHadSex01_C* UEmissaryHadSex01_C::GetDefaultObj()
{
	static class UEmissaryHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryHadSex01_C*>(UEmissaryHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


