#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IBPChar_MushroomCompanion.IBPChar_MushroomCompanion_C
// (None)

class UClass* IIBPChar_MushroomCompanion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IBPChar_MushroomCompanion_C");

	return Clss;
}


// IBPChar_MushroomCompanion_C IBPChar_MushroomCompanion.Default__IBPChar_MushroomCompanion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIBPChar_MushroomCompanion_C* IIBPChar_MushroomCompanion_C::GetDefaultObj()
{
	static class IIBPChar_MushroomCompanion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIBPChar_MushroomCompanion_C*>(IIBPChar_MushroomCompanion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IBPChar_MushroomCompanion.IBPChar_MushroomCompanion_C.Passive_Ranger_11_Set_Enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIBPChar_MushroomCompanion_C::Passive_Ranger_11_Set_Enabled(bool Enabled, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_MushroomCompanion_C", "Passive_Ranger_11_Set_Enabled");

	Params::IIBPChar_MushroomCompanion_C_Passive_Ranger_11_Set_Enabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IBPChar_MushroomCompanion.IBPChar_MushroomCompanion_C.Passive_Ranger_07_Set_Enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIBPChar_MushroomCompanion_C::Passive_Ranger_07_Set_Enabled(bool Enabled, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IBPChar_MushroomCompanion_C", "Passive_Ranger_07_Set_Enabled");

	Params::IIBPChar_MushroomCompanion_C_Passive_Ranger_07_Set_Enabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


