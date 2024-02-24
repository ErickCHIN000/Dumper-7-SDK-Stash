#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieButterButtF.CassieButterButtF_C
// (None)

class UClass* UCassieButterButtF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieButterButtF_C");

	return Clss;
}


// CassieButterButtF_C CassieButterButtF.Default__CassieButterButtF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieButterButtF_C* UCassieButterButtF_C::GetDefaultObj()
{
	static class UCassieButterButtF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieButterButtF_C*>(UCassieButterButtF_C::StaticClass()->DefaultObject);

	return Default;
}

}


