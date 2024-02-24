#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_ResourceHarvesting.BPFL_ResourceHarvesting_C
// (None)

class UClass* UBPFL_ResourceHarvesting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_ResourceHarvesting_C");

	return Clss;
}


// BPFL_ResourceHarvesting_C BPFL_ResourceHarvesting.Default__BPFL_ResourceHarvesting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_ResourceHarvesting_C* UBPFL_ResourceHarvesting_C::GetDefaultObj()
{
	static class UBPFL_ResourceHarvesting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_ResourceHarvesting_C*>(UBPFL_ResourceHarvesting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_ResourceHarvesting.BPFL_ResourceHarvesting_C.Set Pickup VFX
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                VFX_ColorOverride                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                VFX_LeavesSummerColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                VFX_LeavesFallColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     VFX_MeshParticleScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_DebrisSpawnChance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_DustSpawnChance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_LeavesSpawnChance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_SplintersSpawnChance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_VegSpawnChance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_LeafType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_Scale                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     VFX_LeavesScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                VFX_SecondaryColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_TwigsSmallSpawnChance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_TwigsSpawnChance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_PetalSpawnChance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_TubeSpawnChance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VFX_FoliageGrass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                VFX_LeavesSpringColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ResourceHarvesting_C::Set_Pickup_VFX(class UNiagaraComponent* NiagaraSystem, const struct FLinearColor& VFX_ColorOverride, const struct FLinearColor& VFX_LeavesSummerColor, const struct FLinearColor& VFX_LeavesFallColor, const struct FVector& VFX_MeshParticleScale, double VFX_DebrisSpawnChance, double VFX_DustSpawnChance, double VFX_LeavesSpawnChance, double VFX_SplintersSpawnChance, double VFX_VegSpawnChance, double VFX_LeafType, double VFX_Scale, const struct FVector& VFX_LeavesScale, const struct FLinearColor& VFX_SecondaryColor, double VFX_TwigsSmallSpawnChance, double VFX_TwigsSpawnChance, double VFX_PetalSpawnChance, double VFX_TubeSpawnChance, double VFX_FoliageGrass, const struct FLinearColor& VFX_LeavesSpringColor, class UObject* __WorldContext, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4, float CallFunc_SetFloatParameter_Param_ImplicitCast_5, float CallFunc_SetFloatParameter_Param_ImplicitCast_6, float CallFunc_SetFloatParameter_Param_ImplicitCast_7, float CallFunc_SetFloatParameter_Param_ImplicitCast_8, float CallFunc_SetFloatParameter_Param_ImplicitCast_9, float CallFunc_SetFloatParameter_Param_ImplicitCast_10, float CallFunc_SetFloatParameter_Param_ImplicitCast_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ResourceHarvesting_C", "Set Pickup VFX");

	Params::UBPFL_ResourceHarvesting_C_Set_Pickup_VFX_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.VFX_ColorOverride = VFX_ColorOverride;
	Parms.VFX_LeavesSummerColor = VFX_LeavesSummerColor;
	Parms.VFX_LeavesFallColor = VFX_LeavesFallColor;
	Parms.VFX_MeshParticleScale = VFX_MeshParticleScale;
	Parms.VFX_DebrisSpawnChance = VFX_DebrisSpawnChance;
	Parms.VFX_DustSpawnChance = VFX_DustSpawnChance;
	Parms.VFX_LeavesSpawnChance = VFX_LeavesSpawnChance;
	Parms.VFX_SplintersSpawnChance = VFX_SplintersSpawnChance;
	Parms.VFX_VegSpawnChance = VFX_VegSpawnChance;
	Parms.VFX_LeafType = VFX_LeafType;
	Parms.VFX_Scale = VFX_Scale;
	Parms.VFX_LeavesScale = VFX_LeavesScale;
	Parms.VFX_SecondaryColor = VFX_SecondaryColor;
	Parms.VFX_TwigsSmallSpawnChance = VFX_TwigsSmallSpawnChance;
	Parms.VFX_TwigsSpawnChance = VFX_TwigsSpawnChance;
	Parms.VFX_PetalSpawnChance = VFX_PetalSpawnChance;
	Parms.VFX_TubeSpawnChance = VFX_TubeSpawnChance;
	Parms.VFX_FoliageGrass = VFX_FoliageGrass;
	Parms.VFX_LeavesSpringColor = VFX_LeavesSpringColor;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_2 = CallFunc_SetFloatParameter_Param_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_3 = CallFunc_SetFloatParameter_Param_ImplicitCast_3;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_4 = CallFunc_SetFloatParameter_Param_ImplicitCast_4;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_5 = CallFunc_SetFloatParameter_Param_ImplicitCast_5;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_6 = CallFunc_SetFloatParameter_Param_ImplicitCast_6;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_7 = CallFunc_SetFloatParameter_Param_ImplicitCast_7;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_8 = CallFunc_SetFloatParameter_Param_ImplicitCast_8;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_9 = CallFunc_SetFloatParameter_Param_ImplicitCast_9;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_10 = CallFunc_SetFloatParameter_Param_ImplicitCast_10;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_11 = CallFunc_SetFloatParameter_Param_ImplicitCast_11;

	UObject::ProcessEvent(Func, &Parms);

}

}


