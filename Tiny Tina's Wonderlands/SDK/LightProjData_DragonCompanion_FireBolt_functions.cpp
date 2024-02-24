#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjData_DragonCompanion_FireBolt.LightProjData_DragonCompanion_FireBolt_C
// (None)

class UClass* ULightProjData_DragonCompanion_FireBolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjData_DragonCompanion_FireBolt_C");

	return Clss;
}


// LightProjData_DragonCompanion_FireBolt_C LightProjData_DragonCompanion_FireBolt.Default__LightProjData_DragonCompanion_FireBolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjData_DragonCompanion_FireBolt_C* ULightProjData_DragonCompanion_FireBolt_C::GetDefaultObj()
{
	static class ULightProjData_DragonCompanion_FireBolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjData_DragonCompanion_FireBolt_C*>(ULightProjData_DragonCompanion_FireBolt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjData_DragonCompanion_FireBolt.LightProjData_DragonCompanion_FireBolt_C.CreateSplat
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            LightProjectile                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  TransformData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_KnightOfTheClaw_C>K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetDragonPet_Ref                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C>K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ExternalDragonCompanionCreateFireBoltSplat_Res          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProjData_DragonCompanion_FireBolt_C::CreateSplat(class ULightProjectile* LightProjectile, const struct FTransform& TransformData, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetDragonPet_Ref, bool Temp_bool_IsClosed_Variable, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_ExternalDragonCompanionCreateFireBoltSplat_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_DragonCompanion_FireBolt_C", "CreateSplat");

	Params::ULightProjData_DragonCompanion_FireBolt_C_CreateSplat_Params Parms{};

	Parms.LightProjectile = LightProjectile;
	Parms.TransformData = TransformData;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw = K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetDragonPet_Ref = CallFunc_GetDragonPet_Ref;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet = K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_ExternalDragonCompanionCreateFireBoltSplat_Res = CallFunc_ExternalDragonCompanionCreateFireBoltSplat_Res;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjData_DragonCompanion_FireBolt.LightProjData_DragonCompanion_FireBolt_C.OnImpact
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_GetHitLocation_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void ULightProjData_DragonCompanion_FireBolt_C::OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& CallFunc_GetHitLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_DragonCompanion_FireBolt_C", "OnImpact");

	Params::ULightProjData_DragonCompanion_FireBolt_C_OnImpact_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.CallFunc_GetHitLocation_ReturnValue = CallFunc_GetHitLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjData_DragonCompanion_FireBolt.LightProjData_DragonCompanion_FireBolt_C.OnExplode
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void ULightProjData_DragonCompanion_FireBolt_C::OnExplode(class ULightProjectile* Projectile, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_DragonCompanion_FireBolt_C", "OnExplode");

	Params::ULightProjData_DragonCompanion_FireBolt_C_OnExplode_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


