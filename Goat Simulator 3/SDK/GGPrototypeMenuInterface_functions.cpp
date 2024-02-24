#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GGPrototypeMenuInterface.GGPrototypeMenuInterface_C
// (None)

class UClass* IGGPrototypeMenuInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGPrototypeMenuInterface_C");

	return Clss;
}


// GGPrototypeMenuInterface_C GGPrototypeMenuInterface.Default__GGPrototypeMenuInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IGGPrototypeMenuInterface_C* IGGPrototypeMenuInterface_C::GetDefaultObj()
{
	static class IGGPrototypeMenuInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IGGPrototypeMenuInterface_C*>(IGGPrototypeMenuInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GGPrototypeMenuInterface.GGPrototypeMenuInterface_C.GetGearInfoPanelContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Panel                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGGPrototypeMenuInterface_C::GetGearInfoPanelContainer(class UPanelWidget** Panel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGPrototypeMenuInterface_C", "GetGearInfoPanelContainer");

	Params::IGGPrototypeMenuInterface_C_GetGearInfoPanelContainer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Panel != nullptr)
		*Panel = Parms.Panel;

}


// Function GGPrototypeMenuInterface.GGPrototypeMenuInterface_C.SetPlayerGameData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGPlayerGameDataAsset*      PlayerGameData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGGPrototypeMenuInterface_C::SetPlayerGameData(class UGGPlayerGameDataAsset* PlayerGameData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGPrototypeMenuInterface_C", "SetPlayerGameData");

	Params::IGGPrototypeMenuInterface_C_SetPlayerGameData_Params Parms{};

	Parms.PlayerGameData = PlayerGameData;

	UObject::ProcessEvent(Func, &Parms);

}

}


