#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ClawArmor.BPI_ClawArmor_C
// (None)

class UClass* IBPI_ClawArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ClawArmor_C");

	return Clss;
}


// BPI_ClawArmor_C BPI_ClawArmor.Default__BPI_ClawArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ClawArmor_C* IBPI_ClawArmor_C::GetDefaultObj()
{
	static class IBPI_ClawArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ClawArmor_C*>(IBPI_ClawArmor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ClawArmor.BPI_ClawArmor_C.GetClawArmorElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ClawArmor_C::GetClawArmorElement(class UClass** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ClawArmor_C", "GetClawArmorElement");

	Params::IBPI_ClawArmor_C_GetClawArmorElement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


