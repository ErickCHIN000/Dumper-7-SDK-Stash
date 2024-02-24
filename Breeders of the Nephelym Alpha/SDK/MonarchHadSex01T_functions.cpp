#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchHadSex01T.MonarchHadSex01T_C
// (None)

class UClass* UMonarchHadSex01T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchHadSex01T_C");

	return Clss;
}


// MonarchHadSex01T_C MonarchHadSex01T.Default__MonarchHadSex01T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchHadSex01T_C* UMonarchHadSex01T_C::GetDefaultObj()
{
	static class UMonarchHadSex01T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchHadSex01T_C*>(UMonarchHadSex01T_C::StaticClass()->DefaultObject);

	return Default;
}

}


