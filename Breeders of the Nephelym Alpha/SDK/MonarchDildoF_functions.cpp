#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchDildoF.MonarchDildoF_C
// (None)

class UClass* UMonarchDildoF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchDildoF_C");

	return Clss;
}


// MonarchDildoF_C MonarchDildoF.Default__MonarchDildoF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchDildoF_C* UMonarchDildoF_C::GetDefaultObj()
{
	static class UMonarchDildoF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchDildoF_C*>(UMonarchDildoF_C::StaticClass()->DefaultObject);

	return Default;
}

}


