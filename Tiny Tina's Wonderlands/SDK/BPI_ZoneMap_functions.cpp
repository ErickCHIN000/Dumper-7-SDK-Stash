#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ZoneMap.BPI_ZoneMap_C
// (None)

class UClass* IBPI_ZoneMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ZoneMap_C");

	return Clss;
}


// BPI_ZoneMap_C BPI_ZoneMap.Default__BPI_ZoneMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ZoneMap_C* IBPI_ZoneMap_C::GetDefaultObj()
{
	static class IBPI_ZoneMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ZoneMap_C*>(IBPI_ZoneMap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ZoneMap.BPI_ZoneMap_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ZoneMap_C::Activate_POI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ZoneMap_C", "Activate POI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_ZoneMap.BPI_ZoneMap_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ZoneMap_C::End_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ZoneMap_C", "End Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_ZoneMap.BPI_ZoneMap_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ZoneMap_C::Begin_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ZoneMap_C", "Begin Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}

}


