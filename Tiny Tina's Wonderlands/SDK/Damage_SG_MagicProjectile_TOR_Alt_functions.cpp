#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_SG_MagicProjectile_TOR_Alt.Damage_SG_MagicProjectile_TOR_Alt_C
// (None)

class UClass* UDamage_SG_MagicProjectile_TOR_Alt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_SG_MagicProjectile_TOR_Alt_C");

	return Clss;
}


// Damage_SG_MagicProjectile_TOR_Alt_C Damage_SG_MagicProjectile_TOR_Alt.Default__Damage_SG_MagicProjectile_TOR_Alt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_SG_MagicProjectile_TOR_Alt_C* UDamage_SG_MagicProjectile_TOR_Alt_C::GetDefaultObj()
{
	static class UDamage_SG_MagicProjectile_TOR_Alt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_SG_MagicProjectile_TOR_Alt_C*>(UDamage_SG_MagicProjectile_TOR_Alt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Damage_SG_MagicProjectile_TOR_Alt.Damage_SG_MagicProjectile_TOR_Alt_C.OnHitEnemy
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageDataEventDetails     Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      PlayerOwner                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InDamageCauser                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LightProjectileData                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StickyDamage                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_MagicProjectile_TOR_C>K2Node_DynamicCast_AsBPI_Magic_Projectile_TOR                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDamage_SG_MagicProjectile_TOR_Alt_C::OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, class AActor* PlayerOwner, class AActor* InDamageCauser, class AActor* HitActor, class UClass* LightProjectileData, float StickyDamage, TScriptInterface<class IBPI_MagicProjectile_TOR_C> K2Node_DynamicCast_AsBPI_Magic_Projectile_TOR, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Damage_SG_MagicProjectile_TOR_Alt_C", "OnHitEnemy");

	Params::UDamage_SG_MagicProjectile_TOR_Alt_C_OnHitEnemy_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.DamageTarget = DamageTarget;
	Parms.Details = Details;
	Parms.PlayerOwner = PlayerOwner;
	Parms.InDamageCauser = InDamageCauser;
	Parms.HitActor = HitActor;
	Parms.LightProjectileData = LightProjectileData;
	Parms.StickyDamage = StickyDamage;
	Parms.K2Node_DynamicCast_AsBPI_Magic_Projectile_TOR = K2Node_DynamicCast_AsBPI_Magic_Projectile_TOR;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


