#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieSplintersT.CassieSplintersT_C
// (None)

class UClass* UCassieSplintersT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieSplintersT_C");

	return Clss;
}


// CassieSplintersT_C CassieSplintersT.Default__CassieSplintersT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieSplintersT_C* UCassieSplintersT_C::GetDefaultObj()
{
	static class UCassieSplintersT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieSplintersT_C*>(UCassieSplintersT_C::StaticClass()->DefaultObject);

	return Default;
}

}


