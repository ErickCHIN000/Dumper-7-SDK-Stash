#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileMaster.BP_ProjectileMaster_C
// (Actor)

class UClass* ABP_ProjectileMaster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileMaster_C");

	return Clss;
}


// BP_ProjectileMaster_C BP_ProjectileMaster.Default__BP_ProjectileMaster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileMaster_C* ABP_ProjectileMaster_C::GetDefaultObj()
{
	static class ABP_ProjectileMaster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileMaster_C*>(ABP_ProjectileMaster_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectileMaster.BP_ProjectileMaster_C.SpawnCombatText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCombatText_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileMaster_C::SpawnCombatText(const struct FVector& Location, double Damage, class UCombatText_C* CallFunc_Create_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, const struct FLinearColor& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileMaster_C", "SpawnCombatText");

	Params::ABP_ProjectileMaster_C_SpawnCombatText_Params Parms{};

	Parms.Location = Location;
	Parms.Damage = Damage;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileMaster.BP_ProjectileMaster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileMaster_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileMaster_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


