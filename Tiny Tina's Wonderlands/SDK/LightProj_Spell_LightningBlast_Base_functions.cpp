#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_LightningBlast_Base.LightProj_Spell_LightningBlast_Base_C
// (None)

class UClass* ULightProj_Spell_LightningBlast_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_LightningBlast_Base_C");

	return Clss;
}


// LightProj_Spell_LightningBlast_Base_C LightProj_Spell_LightningBlast_Base.Default__LightProj_Spell_LightningBlast_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_LightningBlast_Base_C* ULightProj_Spell_LightningBlast_Base_C::GetDefaultObj()
{
	static class ULightProj_Spell_LightningBlast_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_LightningBlast_Base_C*>(ULightProj_Spell_LightningBlast_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Spell_LightningBlast_Base.LightProj_Spell_LightningBlast_Base_C.OnBegin
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    SpellData                                                        (Edit, BlueprintVisible, NoDestructor)
// struct FSpawnableSpellBasicData    CallFunc_GetSpellData_Res                                        (NoDestructor)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSpellHavePart_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_LightningBlast_Base_C::OnBegin(class ULightProjectile* Projectile, const struct FSpawnableSpellBasicData& SpellData, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, bool CallFunc_DoesSpellHavePart_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_LightningBlast_Base_C", "OnBegin");

	Params::ULightProj_Spell_LightningBlast_Base_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.SpellData = SpellData;
	Parms.CallFunc_GetSpellData_Res = CallFunc_GetSpellData_Res;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.CallFunc_DoesSpellHavePart_ReturnValue = CallFunc_DoesSpellHavePart_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_LightningBlast_Base.LightProj_Spell_LightningBlast_Base_C.GetSpellData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    Res                                                              (Parm, OutParm, NoDestructor)
// class USpellLightProjectile*       K2Node_DynamicCast_AsSpell_Light_Projectile                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_LightningBlast_Base_C::GetSpellData(class ULightProjectile* Projectile, struct FSpawnableSpellBasicData* Res, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_LightningBlast_Base_C", "GetSpellData");

	Params::ULightProj_Spell_LightningBlast_Base_C_GetSpellData_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.K2Node_DynamicCast_AsSpell_Light_Projectile = K2Node_DynamicCast_AsSpell_Light_Projectile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = std::move(Parms.Res);

}


// Function LightProj_Spell_LightningBlast_Base.LightProj_Spell_LightningBlast_Base_C.CreateChainController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResults                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FSpawnableSpellBasicData    CallFunc_GetSpellData_Res                                        (NoDestructor)
// class AActor*                      CallFunc_GetHitActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetHitLocation_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_LightningBlast_Base_C::CreateChainController(class ULightProjectile* Projectile, const struct FHitResult& HitResults, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class AActor* CallFunc_GetHitActor_ReturnValue, const struct FVector& CallFunc_GetHitLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_LightningBlast_Base_C", "CreateChainController");

	Params::ULightProj_Spell_LightningBlast_Base_C_CreateChainController_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.HitResults = HitResults;
	Parms.CallFunc_GetSpellData_Res = CallFunc_GetSpellData_Res;
	Parms.CallFunc_GetHitActor_ReturnValue = CallFunc_GetHitActor_ReturnValue;
	Parms.CallFunc_GetHitLocation_ReturnValue = CallFunc_GetHitLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


