#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReaperSex_F.ReaperSex_F_C
// (None)

class UClass* UReaperSex_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReaperSex_F_C");

	return Clss;
}


// ReaperSex_F_C ReaperSex_F.Default__ReaperSex_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReaperSex_F_C* UReaperSex_F_C::GetDefaultObj()
{
	static class UReaperSex_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReaperSex_F_C*>(UReaperSex_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


