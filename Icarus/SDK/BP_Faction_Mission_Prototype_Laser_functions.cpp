#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C
// (Actor)

class UClass* ABP_Faction_Mission_Prototype_Laser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Faction_Mission_Prototype_Laser_C");

	return Clss;
}


// BP_Faction_Mission_Prototype_Laser_C BP_Faction_Mission_Prototype_Laser.Default__BP_Faction_Mission_Prototype_Laser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Faction_Mission_Prototype_Laser_C* ABP_Faction_Mission_Prototype_Laser_C::GetDefaultObj()
{
	static class ABP_Faction_Mission_Prototype_Laser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Faction_Mission_Prototype_Laser_C*>(ABP_Faction_Mission_Prototype_Laser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.OnRep_Burning
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UThermalComponent*           CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Faction_Mission_Prototype_Laser_C::OnRep_Burning(enum class EValid CallFunc_GetTrait_Paths, class UThermalComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_Prototype_Laser_C", "OnRep_Burning");

	Params::ABP_Faction_Mission_Prototype_Laser_C_OnRep_Burning_Params Parms{};

	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.GetLaserSourceLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ForwardVector                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Faction_Mission_Prototype_Laser_C::GetLaserSourceLocation(struct FVector* Location, struct FVector* ForwardVector, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_Prototype_Laser_C", "GetLaserSourceLocation");

	Params::ABP_Faction_Mission_Prototype_Laser_C_GetLaserSourceLocation_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ForwardVector != nullptr)
		*ForwardVector = std::move(Parms.ForwardVector);

}


// Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.SetPoweredMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Faction_Mission_Prototype_Laser_C::SetPoweredMaterial(bool On, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_Prototype_Laser_C", "SetPoweredMaterial");

	Params::ABP_Faction_Mission_Prototype_Laser_C_SetPoweredMaterial_Params Parms{};

	Parms.On = On;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.GetLaserImpacts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UNiagaraComponent*>   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<class UNiagaraComponent*>   K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

TArray<class UNiagaraComponent*> ABP_Faction_Mission_Prototype_Laser_C::GetLaserImpacts(TArray<class UNiagaraComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_Prototype_Laser_C", "GetLaserImpacts");

	Params::ABP_Faction_Mission_Prototype_Laser_C_GetLaserImpacts_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.GetLaserDecals
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UDecalComponent*>     ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<class UDecalComponent*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

TArray<class UDecalComponent*> ABP_Faction_Mission_Prototype_Laser_C::GetLaserDecals(TArray<class UDecalComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_Prototype_Laser_C", "GetLaserDecals");

	Params::ABP_Faction_Mission_Prototype_Laser_C_GetLaserDecals_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.GetLaserBeams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UNiagaraComponent*>   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<class UNiagaraComponent*>   K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

TArray<class UNiagaraComponent*> ABP_Faction_Mission_Prototype_Laser_C::GetLaserBeams(TArray<class UNiagaraComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_Prototype_Laser_C", "GetLaserBeams");

	Params::ABP_Faction_Mission_Prototype_Laser_C_GetLaserBeams_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


