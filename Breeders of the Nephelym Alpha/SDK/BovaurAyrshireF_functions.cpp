#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BovaurAyrshireF.BovaurAyrshireF_C
// (None)

class UClass* UBovaurAyrshireF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BovaurAyrshireF_C");

	return Clss;
}


// BovaurAyrshireF_C BovaurAyrshireF.Default__BovaurAyrshireF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBovaurAyrshireF_C* UBovaurAyrshireF_C::GetDefaultObj()
{
	static class UBovaurAyrshireF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBovaurAyrshireF_C*>(UBovaurAyrshireF_C::StaticClass()->DefaultObject);

	return Default;
}

}


