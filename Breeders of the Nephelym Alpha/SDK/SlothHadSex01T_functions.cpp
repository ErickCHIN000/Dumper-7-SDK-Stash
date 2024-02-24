#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothHadSex01T.SlothHadSex01T_C
// (None)

class UClass* USlothHadSex01T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothHadSex01T_C");

	return Clss;
}


// SlothHadSex01T_C SlothHadSex01T.Default__SlothHadSex01T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothHadSex01T_C* USlothHadSex01T_C::GetDefaultObj()
{
	static class USlothHadSex01T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothHadSex01T_C*>(USlothHadSex01T_C::StaticClass()->DefaultObject);

	return Default;
}

}


