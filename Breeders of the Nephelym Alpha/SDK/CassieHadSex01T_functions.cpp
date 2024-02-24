#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieHadSex01T.CassieHadSex01T_C
// (None)

class UClass* UCassieHadSex01T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieHadSex01T_C");

	return Clss;
}


// CassieHadSex01T_C CassieHadSex01T.Default__CassieHadSex01T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieHadSex01T_C* UCassieHadSex01T_C::GetDefaultObj()
{
	static class UCassieHadSex01T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieHadSex01T_C*>(UCassieHadSex01T_C::StaticClass()->DefaultObject);

	return Default;
}

}


