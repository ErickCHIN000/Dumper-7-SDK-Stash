#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_HittableObject.BPI_HittableObject_C
// (None)

class UClass* IBPI_HittableObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_HittableObject_C");

	return Clss;
}


// BPI_HittableObject_C BPI_HittableObject.Default__BPI_HittableObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_HittableObject_C* IBPI_HittableObject_C::GetDefaultObj()
{
	static class IBPI_HittableObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_HittableObject_C*>(IBPI_HittableObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_HittableObject.BPI_HittableObject_C.OnGettingHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HittableObject_C::OnGettingHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HittableObject_C", "OnGettingHit");



	UObject::ProcessEvent(Func, nullptr);

}

}


