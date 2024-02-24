#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_Creature_NPC_Villager.AIC_Creature_NPC_Villager_C
// (Actor)

class UClass* AAIC_Creature_NPC_Villager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_Creature_NPC_Villager_C");

	return Clss;
}


// AIC_Creature_NPC_Villager_C AIC_Creature_NPC_Villager.Default__AIC_Creature_NPC_Villager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_Creature_NPC_Villager_C* AAIC_Creature_NPC_Villager_C::GetDefaultObj()
{
	static class AAIC_Creature_NPC_Villager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_Creature_NPC_Villager_C*>(AAIC_Creature_NPC_Villager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIC_Creature_NPC_Villager.AIC_Creature_NPC_Villager_C.GetPortalLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EncounterVillageLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Creature_NPC_Villager_C::GetPortalLocation(bool* IsValid, struct FVector* EncounterVillageLocation, bool CallFunc_Vector_IsNearlyZero_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Creature_NPC_Villager_C", "GetPortalLocation");

	Params::AAIC_Creature_NPC_Villager_C_GetPortalLocation_Params Parms{};

	Parms.CallFunc_Vector_IsNearlyZero_ReturnValue = CallFunc_Vector_IsNearlyZero_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (EncounterVillageLocation != nullptr)
		*EncounterVillageLocation = std::move(Parms.EncounterVillageLocation);

}


// Function AIC_Creature_NPC_Villager.AIC_Creature_NPC_Villager_C.GetVillageLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EncounterVillageLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Creature_NPC_Villager_C::GetVillageLocation(bool* IsValid, struct FVector* EncounterVillageLocation, bool CallFunc_Vector_IsNearlyZero_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Creature_NPC_Villager_C", "GetVillageLocation");

	Params::AAIC_Creature_NPC_Villager_C_GetVillageLocation_Params Parms{};

	Parms.CallFunc_Vector_IsNearlyZero_ReturnValue = CallFunc_Vector_IsNearlyZero_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (EncounterVillageLocation != nullptr)
		*EncounterVillageLocation = std::move(Parms.EncounterVillageLocation);

}


// Function AIC_Creature_NPC_Villager.AIC_Creature_NPC_Villager_C.SetPortalLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Creature_NPC_Villager_C::SetPortalLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Creature_NPC_Villager_C", "SetPortalLocation");

	Params::AAIC_Creature_NPC_Villager_C_SetPortalLocation_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_Creature_NPC_Villager.AIC_Creature_NPC_Villager_C.SetVillageLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Creature_NPC_Villager_C::SetVillageLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Creature_NPC_Villager_C", "SetVillageLocation");

	Params::AAIC_Creature_NPC_Villager_C_SetVillageLocation_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}

}


