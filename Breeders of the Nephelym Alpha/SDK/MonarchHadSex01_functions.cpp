#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchHadSex01.MonarchHadSex01_C
// (None)

class UClass* UMonarchHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchHadSex01_C");

	return Clss;
}


// MonarchHadSex01_C MonarchHadSex01.Default__MonarchHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchHadSex01_C* UMonarchHadSex01_C::GetDefaultObj()
{
	static class UMonarchHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchHadSex01_C*>(UMonarchHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


