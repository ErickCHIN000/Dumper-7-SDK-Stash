#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieHadSex01.CassieHadSex01_C
// (None)

class UClass* UCassieHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieHadSex01_C");

	return Clss;
}


// CassieHadSex01_C CassieHadSex01.Default__CassieHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieHadSex01_C* UCassieHadSex01_C::GetDefaultObj()
{
	static class UCassieHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieHadSex01_C*>(UCassieHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


