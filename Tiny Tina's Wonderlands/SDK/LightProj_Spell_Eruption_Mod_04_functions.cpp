#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Eruption_Mod_04.LightProj_Spell_Eruption_Mod_04_C
// (None)

class UClass* ULightProj_Spell_Eruption_Mod_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Eruption_Mod_04_C");

	return Clss;
}


// LightProj_Spell_Eruption_Mod_04_C LightProj_Spell_Eruption_Mod_04.Default__LightProj_Spell_Eruption_Mod_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Eruption_Mod_04_C* ULightProj_Spell_Eruption_Mod_04_C::GetDefaultObj()
{
	static class ULightProj_Spell_Eruption_Mod_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Eruption_Mod_04_C*>(ULightProj_Spell_Eruption_Mod_04_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Spell_Eruption_Mod_04.LightProj_Spell_Eruption_Mod_04_C.OnImpact
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  SpellHitInfo                                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FSpawnableSpellBasicData    InSpellData                                                      (Edit, BlueprintVisible, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USpellLightProjectile*       K2Node_DynamicCast_AsSpell_Light_Projectile                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TransformSplat_SplatTransform                           (IsPlainOldData, NoDestructor)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_Eruption_Mod_04_C::OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FHitResult& SpellHitInfo, const struct FSpawnableSpellBasicData& InSpellData, bool Temp_bool_Has_Been_Initd_Variable, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, const struct FTransform& CallFunc_TransformSplat_SplatTransform, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_Eruption_Mod_04_C", "OnImpact");

	Params::ULightProj_Spell_Eruption_Mod_04_C_OnImpact_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.SpellHitInfo = SpellHitInfo;
	Parms.InSpellData = InSpellData;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_DynamicCast_AsSpell_Light_Projectile = K2Node_DynamicCast_AsSpell_Light_Projectile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_TransformSplat_SplatTransform = CallFunc_TransformSplat_SplatTransform;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


