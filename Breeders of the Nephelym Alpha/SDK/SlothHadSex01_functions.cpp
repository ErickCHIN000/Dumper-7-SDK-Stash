#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothHadSex01.SlothHadSex01_C
// (None)

class UClass* USlothHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothHadSex01_C");

	return Clss;
}


// SlothHadSex01_C SlothHadSex01.Default__SlothHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothHadSex01_C* USlothHadSex01_C::GetDefaultObj()
{
	static class USlothHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothHadSex01_C*>(USlothHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


