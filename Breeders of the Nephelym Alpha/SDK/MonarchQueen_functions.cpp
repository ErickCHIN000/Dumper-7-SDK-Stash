#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchQueen.MonarchQueen_C
// (None)

class UClass* UMonarchQueen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchQueen_C");

	return Clss;
}


// MonarchQueen_C MonarchQueen.Default__MonarchQueen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchQueen_C* UMonarchQueen_C::GetDefaultObj()
{
	static class UMonarchQueen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchQueen_C*>(UMonarchQueen_C::StaticClass()->DefaultObject);

	return Default;
}

}


