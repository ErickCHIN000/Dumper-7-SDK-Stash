#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BovaurAyrshireT.BovaurAyrshireT_C
// (None)

class UClass* UBovaurAyrshireT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BovaurAyrshireT_C");

	return Clss;
}


// BovaurAyrshireT_C BovaurAyrshireT.Default__BovaurAyrshireT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBovaurAyrshireT_C* UBovaurAyrshireT_C::GetDefaultObj()
{
	static class UBovaurAyrshireT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBovaurAyrshireT_C*>(UBovaurAyrshireT_C::StaticClass()->DefaultObject);

	return Default;
}

}


